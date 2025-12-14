/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((~0) * (((!((max(var_12, (arr_6 [i_1]))))))));
                    var_15 = arr_1 [i_0];
                    var_16 = (min(var_16, (((-(~var_2))))));
                    var_17 = (((~(-23795 && 9959970128847088526))));
                    var_18 = (max(var_18, (((((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) << (((arr_2 [i_0 + 1]) - 2499)))) >> (((max((arr_7 [i_1] [i_1] [i_2] [5]), 5119114339391111784)) - 6318350998712567167))))) && (((var_0 >= (arr_4 [i_0])))))))));
                }
            }
        }
    }
    var_19 = (max(var_19, var_3));
    #pragma endscop
}
