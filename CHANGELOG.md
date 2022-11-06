# Changelog

## 0.3.4

The `build/build` program is more intuitive. See `build/build --help`.

CI runners, especially those for macOS and Linux, have become more efficient and thorough. The use of `build/build` allows many CI runners to build and test across build types and sanitizers more easily than otherwsie. Some platform specifics for the Android and Windows are being sorted out. In the meantime, Android and Windows are using the "old" runner jobs.

## 0.3.3

The Android adapter is identical to the Linux `inotify`-based adapter except for its handling of `inotify_init` and the associated watch options.

Android was given a CI job.

## 0.3.2

Toge's portability PR was merged.

## 0.3.1

The `inotify`-based adapter for Linux is refined.

## 0.3.0

The `inotify`-based adapter for Linux is introduced. Concerns about its accuracy are carefully considered.

Niall's suggestions prompted future work being planned for improvements on the design of all adapters.

## 0.2.9

The `warthog` adapter is fixed on Windows. The Windows CI runner is nudged.

## 0.2.8

Tooling in `tool/release` is refined to match the typical commit syntax. This currently applies to the release hooks in `.version` and `build/in/CMakeLists.txt`.

## 0.2.7

`tool/release` writes to `.version` and `tool/hone` prepends `#pragma once` to the output from `--header-content-amalgam`.

The Windows CI runner is nudged.

## 0.2.6

Directory tree around `watch` is refined.

`tool/sloc` is introduced (to count the significant lines of codes).

`src/tiny-main.cpp` is introduced.

## 0.2.5

CI is implemented through GitHub Actions.

The MIT license is chosen.

## 0.2.4

A single-header artifact is created.

`tool/hone` is introduced to generate a single-header amalgamation of this project.

Documentation in the `README.md` is heavily updated.

## 0.2.3

`tool/release` is made more clear and the EBNF is made valid (a comma was missing).

## 0.2.2

`tool/release` is usable and fully-featured.

`tool/release` may show its usage as EBNF.

C++20 Concepts are removed for being very interesting but not beneficial enough to an API with a very small surface.

Comments are refactoring according to the MISRA guidelines.

## 0.2.1

`tell dbun` is refactored.

The `FSEvent` adapter is made more safe.

## 0.2.0

The first public release includes:

- The `event` object and the `watch` function
- Stream operator overloads for JSON output
- Event parsing control
- The CLI program
- Documentation throughout