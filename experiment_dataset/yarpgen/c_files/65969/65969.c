/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 *= (~1717882249634596060);
                arr_6 [i_0] [1] [i_0] = min((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]) > (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), var_12);
                arr_7 [i_0] [i_0] = ((~(((1 > (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 1] [i_2] [i_0] [i_3] [i_4] [i_0 + 1] [i_4] = (var_8 || (1 > 1));
                                var_20 = (max(var_20, (((5808020923061731760 ? ((((min(var_10, 1))) ^ ((min((arr_2 [i_4]), (arr_8 [i_0] [12] [i_3] [i_4])))))) : (((!(arr_10 [1] [i_1] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_13 ? (var_18 && var_17) : var_3));
    var_22 = (min((1 >= var_9), 1));
    var_23 = (min(var_23, var_18));
    #pragma endscop
}
