/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -65535;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 *= arr_3 [i_4];
                                var_19 ^= (arr_5 [i_3]);
                                var_20 = (max(((0 < (((37 || (arr_3 [14])))))), ((!((((arr_7 [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_1] [i_0]) : 0)))))));
                                arr_11 [i_0] [5] [5] [i_1] [i_4] = (max((2147483631 && var_7), ((var_4 ? (arr_0 [i_0 - 1]) : (arr_2 [i_1])))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0 - 1] = var_13;
            }
        }
    }
    var_21 = min((((38870 - 3577030500) * (var_3 <= var_2))), 69);
    #pragma endscop
}
