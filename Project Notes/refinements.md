# Good Practices

## Use Husky to implement pre-commit hooks for linting and formatting:

- npx pkg set scripts.prepare = "husky install"
- npx husky-init && npm install
- npx husky set .husky/pre-commit
- npx lint staged

```json
add in the package.json
  "lint-staged": {
    "**/*": "prettier --write --ignore-unknown"
  },
```

## Using config to set a environment configuration

- make a config.ts file
- create three configurations:
  - test config
  - dev config
  - prod config
- Eg:

```js
import "dotenv/config";

const baseConfig = {
  PORT: process.env.PORT || 3000,
  HOST: process.env.HOST || "0.0.0.0",
  SSO_BASE_URL: process.env.SSO_BASE_URL || "",
  SSO_CLIENT_ID: process.env.SSO_CLIENT_ID || "",
  SSO_CLIENT_SECRET: process.env.SSO_CLIENT_SECRET || "",
  SSO_INTROSPECT_ENDPOINT: process.env.SSO_INTROSPECT_ENDPOINT || "",
  WEBHOOK_SECRET_KEY: process.env.WEBHOOK_SECRET_KEY || "long string",
};

const testConfig = {
  ...baseConfig,
  MONGO_URI: process.env.TEST_MONGO_URI,
};

const prodConfig = {
  ...baseConfig,
  MONGO_URI: process.env.MONGO_URI,
};

const devConfig = {
  ...baseConfig,
  MONGO_URI: process.env.DEV_MONGO_URI,
};
function createConfig() {
  const env = process.env.NODE_ENV?.toLowerCase();
  switch (env) {
    case "test":
      console.log("Loading test configuration");
      return testConfig;
    case "dev":
      console.log("Loading dev configuration");
      return devConfig;
    default:
      console.log("Loading prod/dev configuration");
      return prodConfig;
  }
}

export const config = createConfig();
```
