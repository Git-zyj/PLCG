/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((((var_14 >= (min(2305843009213677568, (arr_4 [i_0] [i_1]))))) ? (min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 3]))) : (((((((arr_4 [i_0] [i_1]) / 13)) == var_11))))));
                arr_5 [i_0] [i_0] [i_1] = (((arr_0 [i_1]) ? (((0 >= var_12) ^ (max((arr_4 [i_0] [i_0]), (arr_2 [i_1]))))) : 9223372036854775800));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 += (var_4 || var_3);
                                var_22 = (max(var_22, ((((var_18 * -90) ? (max((arr_3 [i_2 + 1] [18]), (((var_10 ? -8538 : 65519))))) : var_14)))));
                                arr_12 [i_0] [15] [i_1] [i_0] [14] [i_2] [13] = ((((min((arr_2 [i_4]), (((var_13 + 2147483647) << (arr_9 [i_0] [i_1] [3] [i_4])))))) <= (((1111755367 && var_11) & (arr_0 [15])))));
                            }
                        }
                    }
                }
                arr_13 [0] [i_1] = 11;
                var_23 *= var_0;
            }
        }
    }
    var_24 += ((((((min(var_16, var_9)) >> (((max(2251765453946880, var_1)) - 9638349909195755984))))) ? (var_11 == -1) : (max((((var_6 ? 17 : var_15))), ((var_5 ? var_18 : var_3))))));
    #pragma endscop
}
