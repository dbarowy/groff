// src/roff/troff/input.cpp looks for these
void process_input_stack(void);                     // src/roff/troff/input.cpp
void end_diversions(void);                          // src/roff/troff/div.cpp
void title(void);                                   // src/roff/troff/env.cpp

// src/preproc/eqn/eqn.y looks for these
class box;                                          // src/preproc/eqn/box.h
box *make_mark_box(box *p);                         // src/preproc/eqn/mark.cpp
box *make_lineup_box(box *p);                       // src/preproc/eqn/mark.cpp
box *make_script_box(box *nuc, box *sub, box *sup); // src/preproc/eqn/script.cpp