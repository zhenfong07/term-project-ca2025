// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

scalaVersion := "2.13.10"

version := "0.1.0"

organization := "tw.edu.ncku"

val chiselVersion = "3.6.1"

name := "mycpu-soc-freertos"

libraryDependencies ++= Seq(
  "edu.berkeley.cs" %% "chisel3" % chiselVersion,
  "edu.berkeley.cs" %% "chiseltest" % "0.6.0" % "test",
  "edu.berkeley.cs" %% "firrtl" % "1.6.0"
)

scalacOptions ++= Seq(
  "-language:reflectiveCalls",
  "-feature",
  "-Xcheckinit",
  "-Wconf:cat=deprecation:s"
)

addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % chiselVersion cross CrossVersion.full)

Test / fork := true
Test / javaOptions += s"-Duser.dir=${baseDirectory.value}"

