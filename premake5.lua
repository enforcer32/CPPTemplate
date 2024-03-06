include "Dependencies.lua"

workspace "CPPTemplate"
   architecture "x86"
   startproject "Project"
   configurations { "Debug", "Release" }

outputdir = "%{cfg.system}-%{cfg.architecture}-%{cfg.buildcfg}"

group "Dependencies"
   include "Dependencies/spdlog"
group ""

include "project"
