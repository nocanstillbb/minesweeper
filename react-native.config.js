module.exports = {
  dependency: {
    platforms: {
      android: {
        sourceDir: 'android',
        cxxModuleCMakeListsPath: `CMakeLists.txt`, 
        cxxModuleCMakeListsModuleName: 'minesweeper', 
      },
    },
  },
};

