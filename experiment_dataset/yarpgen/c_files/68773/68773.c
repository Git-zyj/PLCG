/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (((((var_0 ? (~1023) : var_2))) && (((max(274519165, 4691958080903035431))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((var_10 ? ((max(893471867, var_9))) : (((arr_4 [i_0] [5] [i_0]) + 274519185))))) != ((16454714224771353447 ? 0 : (arr_3 [i_0] [i_1])))));
                var_14 = (((~(arr_3 [i_0 - 1] [i_1]))));
                arr_6 [i_1] [i_0] [i_1] = (((40707 ? (~24828) : ((((arr_2 [i_0] [i_1]) == var_1))))));
            }
        }
    }
    #pragma endscop
}
