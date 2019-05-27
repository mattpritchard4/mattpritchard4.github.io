let str = React.string;
module Styles = {
  open Css;

  let wrapper = style([display(`flex), marginBottom(px(16))]);
  let img =
    style([
      width(px(64)),
      height(px(64)),
      borderRadius(px(32)),
      marginRight(px(12)),
    ]);

  let bioText = style([display(`flex), alignItems(`center)]);
};

[@react.component]
let make = () =>
  <div className=Styles.wrapper>
    <img src="/images/bio.jpg" alt="Matt Pritchard" className=Styles.img />
    <p className=Styles.bioText> ("Written by Matt Pritchard" |> str) </p>
  </div>;

let default = make;
