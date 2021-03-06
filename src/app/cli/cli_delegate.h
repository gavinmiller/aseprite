// Aseprite
// Copyright (C) 2016-2018  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef APP_CLI_CLI_DELEGATE_H_INCLUDED
#define APP_CLI_CLI_DELEGATE_H_INCLUDED
#pragma once

#include <string>

namespace app {

  class AppOptions;
  class Context;
  class DocumentExporter;
  struct CliOpenFile;

  class CliDelegate {
  public:
    virtual ~CliDelegate() { }
    virtual void showHelp(const AppOptions& options) { }
    virtual void showVersion() { }
    virtual void uiMode() { }
    virtual void shellMode() { }
    virtual void batchMode() { }
    virtual void beforeOpenFile(const CliOpenFile& cof) { }
    virtual void afterOpenFile(const CliOpenFile& cof) { }
    virtual void saveFile(Context* ctx, const CliOpenFile& cof) { }
    virtual void loadPalette(Context* ctx, const CliOpenFile& cof, const std::string& filename) { }
    virtual void exportFiles(Context* ctx, DocumentExporter& exporter) { }
    virtual void execScript(const std::string& filename) { }
  };

} // namespace app

#endif
