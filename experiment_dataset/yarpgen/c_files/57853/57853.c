/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_1] = ((((-59 || 1) * ((151549417 ? 159866200 : 4156676111)))));
                    var_15 = -11452;
                    var_16 = ((arr_0 [i_0] [i_1]) ? -31656 : (arr_2 [i_2] [i_1 - 2] [i_0]));
                    arr_7 [i_1] [i_1 - 2] [i_1] = ((~(min((((arr_4 [i_0] [i_1] [i_1] [i_1]) << (3784593599 - 3784593599))), -17))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = ((221021400 != (((max((arr_10 [1]), var_2))))));
        arr_12 [i_3] = ((-(((arr_5 [i_3] [13] [i_3]) - (((arr_3 [i_3]) ? (arr_5 [16] [16] [i_3]) : -69))))));
    }
    var_17 *= (-(var_14 >= var_13));
    var_18 = var_7;
    var_19 = ((~((~((min(var_1, 69)))))));
    #pragma endscop
}
