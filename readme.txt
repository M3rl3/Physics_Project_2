
Build Instructions:
- Solutuion has one project which is automatically the default project.
- Built in Visual Studio 17 (2022). Retarget solution if necessary.

Gameplay and related:
- The setting of this game potrays a long runway dimly lit on each side.
- The spaceship takes off of this runway to then collide with the asteriod above.

Controls:
- The user can control the spaceship by pressing the 'F' key.
  This fixes the camera just behind the ship as in a third person perspective.
  Also, a small bright point light is attached to the rear of the ship to illuminate the surroundings and the ship itself.
  
- The ship has two modes of operation that the user can switch between.
	i.  Hover Mode
	ii. Engine/Thruster Driven
  Initially, the ship is set to hover mode which basically updates position based on direct updates according to user inputs.
  The engine driven mode activates the engine and applies a force on the ship depending upon its positional orientation.
  
- Ship Controls  
  User can press the 'F' key to assume control of the ship.
  The ship can be moved by using the W,A,S,D,Q,E keys to change positions on the respective axes.
  NUM1 can be used to turn on the thrusters at any point, the ship goes as fast as the number of times this key was pressed.
  NUM2 can be used to reduce said speed, ultimately bringing the ship to a complete halt.
  The speed of the ship is outputed to the titlebar of the window labelled "Ship dt" followed by a floating point value.
  Additionally, the user can press the UP, DOWN, LEFT, RIGHT, PAGEUP, PAGEDOWN 
  keys to control the rotation of the ship along all the axes.
  
- A Bounding Box is drawn around the ship and the asteroid to indicate their extents and collision bounds.
  The code that does this generation can be found in "DrawBoundingBox.cpp" file in ProjectDir.
  
- User can iterate through objects/meshes in the scene by pressing 'O' key ie. Object Mode. 
  This also locks the camera target on the object being pointed to.
  NUM1 returns the camera focus to the origin of the scene.
  NUM2 iterates through the meshes in the scene and focuses the camera on the next object/mesh.
  NUM3 focuses the camera on the previous object.
  The name of the object in question is outputed to the titlebar of the window.

- All mesh positioning and translational data is extracted from an external file to prevent re-compilation.

- The free camera can be accessed at any point by pressing the 'C' key.

- The 'X' key can be used to turn all models in the scene into wireframe mode.

- A combination of W,A,S,D,Q,E keys can be used to move the models or the camera when in their respective modes.
