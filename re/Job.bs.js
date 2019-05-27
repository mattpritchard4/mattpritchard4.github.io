// Generated by BUCKLESCRIPT VERSION 5.0.3, PLEASE EDIT WITH CARE
'use strict';

var Cn = require("re-classnames/src/Cn.bs.js");
var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Styles$ReactTemplate = require("./Styles.bs.js");

function Job(Props) {
  var title = Props.title;
  var client = Props.client;
  var logo = Props.logo;
  var description = Props.description;
  return React.createElement("div", undefined, React.createElement("hr", undefined), React.createElement("div", {
                  className: Styles$ReactTemplate.jobPaddingTop
                }, React.createElement("p", {
                      className: Styles$ReactTemplate.bold
                    }, "Project: " + title), React.createElement("p", {
                      className: Styles$ReactTemplate.bold
                    }, "Client: " + client)), React.createElement("div", undefined, $$Array.of_list(List.map((function (image) {
                            return React.createElement("img", {
                                        className: Styles$ReactTemplate.logos,
                                        alt: image[/* alt */1],
                                        src: image[/* src */0]
                                      });
                          }), logo))), React.createElement("p", {
                  className: Cn.make(/* :: */[
                        Styles$ReactTemplate.jobPaddingBottom,
                        /* :: */[
                          Styles$ReactTemplate.justify,
                          /* [] */0
                        ]
                      ])
                }, description));
}

var make = Job;

exports.make = make;
/* react Not a pure module */
