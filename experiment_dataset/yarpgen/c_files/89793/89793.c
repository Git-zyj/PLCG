/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_12 % (min((min(2147483647, (-2147483647 - 1))), (~2147483647))))))));
    var_19 ^= ((var_14 != (((min(0, var_8))))));
    var_20 = (max(var_20, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 |= (!-2147483635);
                var_22 = -818410757;
                arr_5 [14] [i_1] [i_1] = (~0);
                var_23 += ((((1 << (3920628760722562236 - 3920628760722562235))) >> ((((-(arr_2 [i_0]))) + 11243084))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    arr_12 [i_2 - 1] [i_2] [i_2] [i_2] &= (~-2147483620);
                    var_24 = ((!((max(var_14, (min(var_15, var_14)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_25 = (((((arr_10 [i_3] [i_5 + 2] [i_4 - 1] [i_3]) ? (arr_10 [i_3] [i_5 - 2] [i_4 + 1] [i_3]) : var_6)) % (arr_10 [i_3] [i_3] [i_4 + 1] [i_5])));
                                var_26 -= (((var_2 / 17) ? ((-(arr_15 [i_6 - 2] [i_6 - 2] [i_5 + 1] [i_5 + 1] [i_2 - 1] [i_2 - 1]))) : 3920628760722562236));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
