/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 += ((!((-var_4 || (((arr_2 [1]) > -1))))));
        arr_3 [7] = (1863765251 * 22);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((((~((-(arr_2 [i_0])))))) ? var_9 : var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = ((((((198 > var_1) ? ((var_12 / (arr_1 [11]))) : ((var_12 ? var_5 : 6802585947833497600))))) ? (!var_12) : (1863765247 && var_12)));
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] [i_0] [i_0] = (((-(arr_4 [i_0] [i_1]))));
                                var_17 = (min(var_17, (((-(((1583980864 & var_10) ^ -var_4)))))));
                                var_18 = ((-(arr_2 [i_4])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_21 [14] [8] [i_6] [10] = (((!65533) <= (((arr_9 [15] [i_5] [i_5] [15]) | 6802585947833497600))));
                var_19 *= (((1039790883 ? var_13 : 2431202073)));
                var_20 *= (~var_6);
                arr_22 [i_0] [i_0] [i_6] = ((!(((var_3 << (206 - 185))))));
            }
            arr_23 [i_0] [i_5] = ((((arr_18 [i_0] [i_0] [13]) - var_6)) + (arr_16 [i_5 + 3]));
        }
        var_21 = (max(var_21, (~13119172791644114907)));
    }
    var_22 = (max(var_22, ((~(((var_8 + var_4) / -var_3))))));
    #pragma endscop
}
