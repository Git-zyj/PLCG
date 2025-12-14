/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_2] [i_1] [i_2]);
                    arr_11 [i_0] [i_1] = (max(var_15, (((arr_0 [i_0]) + -7514372301825855617))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] = (arr_7 [i_1] [i_1] [i_1] [1]);
                                var_17 = -1;
                                var_18 = var_6;
                                var_19 = (min((arr_12 [i_0] [i_1] [i_1] [0] [0] [i_4]), ((-917204871 ? (!1971969867329794800) : ((0 ? (arr_13 [i_0] [i_1] [i_4] [i_1] [i_4]) : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 127;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_21 = ((((~((var_3 ? 4019857216807647206 : 1)))) != (arr_19 [i_5 + 1])));
                arr_23 [i_5] [i_6] = var_10;
            }
        }
    }
    #pragma endscop
}
