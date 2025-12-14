/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [1] [i_0] = (((3 - 7555861809690719470) - (961635164322186318 - 3366)));
                    var_18 = (((((var_16 - 4229183747) - (189 - 75))) - ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) - -1))) - (1270229000 - -2779151774166394285)))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((((((10596390670476798106 - (arr_0 [i_1 + 1]))) - (var_11 - -536870912))) - ((((((var_15 * (arr_1 [4] [i_1 + 1])))) - ((var_14 + (arr_6 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            }
        }
    }
    var_19 = (((((var_14 - 9766213408720655266) - (3528254908 - var_13))) - ((((2811576739 - 127) - (-2779151774166394285 - 4595135650825207306))))));
    #pragma endscop
}
