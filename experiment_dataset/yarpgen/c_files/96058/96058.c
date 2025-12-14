/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((((~(arr_1 [i_1 + 2]))) % (((((arr_0 [i_1]) | 65535)) / 4294967295))));
                var_18 = (((16383 ? ((max(var_9, var_16)) : var_9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 |= ((var_2 ? ((((-510798143163890011 + 9223372036854775807) << (3341767740683744915 - 3341767740683744915)))) : (0 >= var_11)));
                                var_20 = -1338402086;
                            }
                        }
                    }
                    var_21 = ((!(!var_4)));
                    var_22 *= ((!((((min((arr_13 [i_4] [i_4] [i_2] [i_2]), var_8)) & (82 || var_3))))));
                }
            }
        }
    }
    var_23 = var_11;
    var_24 |= var_5;
    #pragma endscop
}
