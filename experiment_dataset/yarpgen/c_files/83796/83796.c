/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 & var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((((27790 ? -107 : (4284003010 % 1887863022)))) || (arr_0 [i_0])));
                    arr_9 [i_0] [i_0] [6] [4] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_0] [i_0] [11] [i_0] [i_4] [1] = ((((((((arr_0 [i_0]) ? -1887863004 : var_11)) ^ (8961 % 1887862999)))) ? -1887863022 : (((!(-1887863022 > 1887863022))))));
                                var_14 = (max((max(8955, 1887863013)), ((((arr_8 [i_1] [i_0]) >= (arr_5 [13] [i_1] [i_0] [i_4]))))));
                                var_15 = -1887863004;
                                var_16 = (max(var_16, (arr_4 [10] [6])));
                                var_17 = (((arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0]) ? (max(var_0, (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0]))) : (((arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0]) ? (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0]) : (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
