open Css;

/* Global Styles */

global("body, p, h1, h2, h3", [fontFamily("Charter Regular")]);
global("h2", [fontSize(em(2.0))]);

/* Index.re Styles */

let image = style([maxWidth(pct(60.0)), margin(`auto)]);

let mainTitle =
  style([
    media("(max-width: 768px)", [fontSize(em(3.0))]),
    media("(min-width: 769px)", [fontSize(em(4.0))]),
  ]);

let subTitle =
  style([
    media("(max-width: 768px)", [fontSize(em(2.0))]),
    media("(min-width: 769px)", [fontSize(em(3.0))]),
  ]);

let center = style([textAlign(`center)]);
let justify = style([textAlign(`justify)]);

let mainGrid = style([gridTemplateRows([`auto, `auto]), display(`grid)]);

let fullWidthGrid =
  style([
    gridColumnStart(0),
    gridColumnEnd(2),
    gridRowStart(0),
    gridRowEnd(1),
    display(`grid),
  ]);

let splitGridLeft =
  style([
    gridColumnStart(0),
    gridColumnEnd(1),
    gridRowStart(1),
    gridRowEnd(2),
    display(`grid),
  ]);

let splitGridRight =
  style([
    gridColumnStart(1),
    gridColumnEnd(2),
    gridRowStart(1),
    gridRowEnd(2),
    display(`grid),
  ]);

let mobileHide = style([media("(max-width: 768px)", [display(`none)])]);
let mobileShow =
  style([
    media("(max-width: 768px)", [display(`block)]),
    media("(min-width: 769px)", [display(`none)]),
  ]);

let singleColImage =
  style([
    media(
      "(max-width: 768px)",
      [
        gridColumnStart(0),
        gridColumnEnd(1),
        gridRowStart(0),
        gridRowEnd(1),
        display(`grid),
      ],
    ),
  ]);

let singleColText =
  style([
    media(
      "(max-width: 768px)",
      [
        gridColumnStart(0),
        gridColumnEnd(1),
        gridRowStart(1),
        gridRowEnd(2),
        display(`grid),
      ],
    ),
  ]);

let fadeInAnimation =
  keyframes([(0, [opacity(0.0)]), (100, [opacity(1.0)])]);
let fadeIn =
  style([animationName(fadeInAnimation), animationDuration(3000)]);
let agencyContainOpen = style([height(pct(100.0))]);

/* Job.re Styles */

let jobPaddingTop = style([paddingTop(px(30))]);
let jobPaddingBottom = style([paddingBottom(px(30))]);
let logos = style([height(px(30)), padding(px(5))]);
let bold = style([fontFamily("Charter Bold")]);
