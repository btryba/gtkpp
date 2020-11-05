
gtkppSources = [
  'gtkpp-ActionGroup.cpp',
  'gtkpp-Box.cpp',
  'gtkpp-Button.cpp',
  'gtkpp-Container.cpp',
  'gtkpp-File.cpp',
  'gtkpp-Image.cpp',
  'gtkpp-Label.cpp',
  'gtkpp-Settings.cpp',
  'gtkpp-Stack.cpp',
  'gtkpp-StyleContext.cpp',
  'gtkpp-ToggleButton.cpp',
  'gtkpp-ToolBar.cpp',
  'gtkpp-ToolItem.cpp',
  'gtkpp-UIManager.cpp',
  'gtkpp-Widget.cpp',
  'gtkpp-WidgetPath.cpp',
]


gtkpp_deps = [ gtk ]

gtkpp_lib = static_library('gtkpp',
  gtkppSources,
  dependencies: gtkpp_deps,
  include_directories: [ '..', rootInclude, ],
  install: false
)

gtkpp = declare_dependency(
  include_directories: include_directories('.'),
  link_with: [
    gtkpp_lib
  ],
  dependencies: gtkpp_deps,
)