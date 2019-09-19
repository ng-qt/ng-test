module.exports = {
  globals: {
    'ts-jest': {
      diagnostics: {
        ignoreCodes: 'TS151001',
      },
      tsConfig: '<rootDir>/tsconfig.spec.json',
    }
  },
  collectCoverage: true,
  coverageReporters: ['json'],
  testEnvironment: 'node',
  testMatch: ['**/+(*.)+(spec|test).+(ts|js)?(x)'],
  transform: {
    '^.+\\.(ts|js)$': 'ts-jest',
  },
  modulePathIgnorePatterns: ['<rootDir>/node_modules'],
  moduleFileExtensions: ['ts', 'js', 'json'],
};