open Jest;
open Expect;

let _ =

describe "ClearButton" (fun _ => {
  test "renders" (fun _ => {
    let dispatch = fun _ => ();
    let tree = ClearButton.createElement ::dispatch children::[] () |> Renderer.render;

    (expect tree) |> toMatchSnapshot;
  });
});
