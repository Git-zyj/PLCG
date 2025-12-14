/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_6, 16368)))) ? var_1 : var_5));
    var_21 = 16368;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = (~412420912);

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_23 ^= var_12;
                        arr_9 [i_3] = -5424532751983661024;
                        arr_10 [i_0] [4] [i_1] [i_2 + 1] [10] [i_2 + 1] |= ((((max(var_19, 1891495544))) ? (((((min(var_0, var_12))) >= (max((arr_0 [i_1] [i_3 - 1]), var_9))))) : ((56490 ? var_16 : -995448656359748227))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_24 += (min((((7989 ? 103 : (arr_11 [i_1])))), ((1813910313 ? 915958589 : 1))));
                        arr_13 [i_0] [i_1] [8] [i_2 + 1] [i_4] = (~(!3379008707));
                    }
                    arr_14 [2] [i_0] [i_0] [i_2] = (((((((45 ? 1813910323 : var_19))) ? 51278 : (max(1813910313, 156543019))))) ? ((max((!4294967284), var_2))) : (((~4294967284) / ((-8910 ? 915958577 : 1916485431)))));
                    var_25 = (max(-8874873568515986829, 3379008718));
                }
            }
        }
    }
    var_26 -= (((((max(49152, var_1))) ? (~31669) : ((29469 ? -104 : -2204)))));
    #pragma endscop
}
