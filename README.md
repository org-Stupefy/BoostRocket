# BoostRocket

![BoostRocket](/Resources/Branding/BoostRocketPlay-1.png?raw=true "BoostRocket")

![build](https://github.com/org-Stupefy/BoostRocket/workflows/Windows-Build/badge.svg)

BoostRocket is a simple 2D game inspired from FlappyBird game.
BoostRocket uses [Victoria](https://github.com/org-Stupefy/Victoria) engine at its core.

## Getting Started

Visual Studio 2017 or 2019 is recommended, Victoria is officially untested on other development environments.

Start by cloning the repository with `git clone --recursive https://github.com/org-Stupefy/BoostRocket.git`

If the repository was cloned non-recursively previously, use `git submodule update --init` to clone the necessary submodules.

## Building

BoostRocket uses premake5 for generating solutions. Run the [Win-GenProjects.bat](scripts/Win-GenProjects.bat) from scripts folder and it will generate Visual Studio 2019 solution file `Victoria.sln`.
