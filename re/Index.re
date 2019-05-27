let str = React.string;
open Projects;
open Styles;
let selfie = "/images/selfie_resize.jpg";

/* For a page of static text like this one, it would be easier to just use plain React
   components since we don't get to take advantage of Reason's type system */
[@react.component]
let make = () =>
  <div className=Styles.fadeIn>
    <div>
      <div className=Styles.center>
        <h1 className=Styles.mainTitle> ("Matt Pritchard" |> str) </h1>
        <h2 className=Styles.subTitle> ("Web Developer" |> str) </h2>
        <div className=Styles.mobileShow>
          <img src=selfie className=Styles.image alt="Headshot" />
        </div>
        <div className=(Cn.make([Styles.mainGrid, Styles.justify]))>
          <div
            className=(Cn.make([Styles.splitGridLeft, Styles.singleColText]))>
            <h3> ("Who Am I?" |> str) </h3>
            <p>
              (
                "Hi, I'm Matt, a self taught programmer and Senior Front End Developer at "
                |> str
              )
              <a href="https://d3-nyc.com"> ("D3 NYC" |> str) </a>
              (
                ". Over the last few years, I've worked with a variety of web technologies and programming languages across a wide range of client work and internal agency projects. As the agency has grown, I've hired and managed a team of three excellent developers, worked with our Account team to solve complex problems, and represented the agency in person with clients to assess their needs and devise novel solutions."
                |> str
              )
            </p>
            <p>
              (
                "I have a strong interest in functional programming and typed languages (this site was built with ReasonML!) and constantly push myself to learn something new every day. If you would like to know a little about my professional experience, check out the projects below that I've worked on at D3 NYC!"
                |> str
              )
            </p>
            <p className=Styles.bold>
              ("Contact me: " |> str)
              <a href="mailto:mattpritchard4@gmail.com">
                ("mattpritchard4@gmail.com" |> str)
              </a>
            </p>
          </div>
          <div
            className=(Cn.make([Styles.splitGridRight, Styles.mobileHide]))>
            <img src=selfie className=Styles.image />
          </div>
        </div>
      </div>
    </div>
    <div className=Styles.agencyContainOpen>
      <div>
        <h2 className=Styles.center>
          ("Languages and Technical Skills" |> str)
        </h2>
        <br />
        <ul>
          <li>
            <h3 className=Styles.bold> ("Proficient: " |> str) </h3>
            <p>
              (
                "JavaScript, Ruby, HTML, CSS, Grid, Bootstrap, SASS, jQuery, Pug, Pollen, Git, Bash, Emacs"
                |> str
              )
            </p>
          </li>
          <li>
            <h3 className=Styles.bold> ("Exposure: " |> str) </h3>
            <p>
              (
                "React, OCaml, ReasonML, Reason-React, TypeScript, Angular 6/7, GatsbyJS, PHP, Racket, Scheme, C"
                |> str
              )
            </p>
          </li>
          <li>
            <h3 className=Styles.bold> ("CMS/ESP: " |> str) </h3>
            <p>
              (
                "WordPress, Webflow, Agility Harmony, Sailthru, Braze, Oracle Respnsys, Squarespace, Active Campaign, Exact Target"
                |> str
              )
            </p>
          </li>
        </ul>
        <br />
      </div>
      <div className=Styles.center>
        <h2> ("Agency Projects" |> str) </h2>
        <br />
      </div>
      (
        React.array(
          Array.of_list(
            List.map(
              job =>
                <Job
                  title=job.title
                  client=job.client
                  logo=job.logo
                  description=job.description
                />,
              Projects.project,
            ),
          ),
        )
      )
    </div>
  </div>;

let default = make;
