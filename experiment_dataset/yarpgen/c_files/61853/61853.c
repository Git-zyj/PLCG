/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_3 > (var_9 || var_6)));
    var_17 *= var_6;
    var_18 = (max((max((16384 == var_10), var_11)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1] [i_0] [i_2] = ((0 ? 6694016821456541876 : 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [6] [i_2 + 1] [i_0] [i_0] |= (((arr_10 [i_1] [0] [i_4 + 2]) ? 1 : (arr_6 [i_0] [14])));
                                var_20 *= (var_8 - 1);
                            }
                        }
                    }
                    var_21 = (max(var_21, (1 >> 1)));
                }
                arr_16 [6] [i_1] &= (max((((((1 ? 1 : 1)) < ((1 ? 1 : 1))))), (((!1) ? ((min(1, 1))) : 1))));
                arr_17 [i_1] = min(((((arr_13 [i_1 + 1] [i_1 + 1] [i_1] [13] [i_1 - 1] [i_1 + 1]) ? (arr_5 [i_1 - 1]) : -var_8))), var_11);
                var_22 = ((((max((min(var_3, (arr_9 [i_1]))), (((!(arr_11 [4] [i_1 - 1] [i_0]))))))) ? 1 : 1));
            }
        }
    }
    #pragma endscop
}
