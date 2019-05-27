open Styles;
open Projects;

[@react.component]
let make = (~title, ~client, ~logo: list(Projects.imageLogo), ~description) =>
  <div>
    <hr />
    <div className=Styles.jobPaddingTop>
      <p className=Styles.bold> (React.string("Project: " ++ title)) </p>
      <p className=Styles.bold> (React.string("Client: " ++ client)) </p>
    </div>
    <div>
      (
        React.array(
          Array.of_list(
            List.map(
              image =>
                <img className=Styles.logos src=image.src alt=image.alt />,
              logo,
            ),
          ),
        )
      )
    </div>
    <p className=(Cn.make([Styles.jobPaddingBottom, Styles.justify]))>
      (React.string(description))
    </p>
  </div>;
