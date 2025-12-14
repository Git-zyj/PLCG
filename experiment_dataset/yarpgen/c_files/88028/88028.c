/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((-9586 ? 848361301 : 48740))) ? var_10 : var_8)) == var_5));
    var_15 = ((-(((130023424 / var_5) ? var_1 : ((130023424 ? var_13 : -397597295))))));
    var_16 = var_6;
    var_17 = ((var_7 ^ (((((min(var_1, var_2)) + 9223372036854775807)) >> ((((var_10 ? var_9 : 29586)) - 4149660643))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (((((arr_0 [i_1 - 1] [i_0]) ? 122 : var_3))) ? (((arr_0 [i_1 - 2] [i_1 - 4]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_9)) : ((((arr_0 [i_0] [i_1 + 1]) ? (arr_0 [i_0] [i_1 - 1]) : var_1))));
                var_19 = (((arr_0 [i_0] [i_0]) ? var_10 : (((((-(arr_3 [i_1] [i_0])))) ? var_10 : (arr_3 [i_0] [i_1])))));
                var_20 = ((((min((arr_0 [i_0 - 2] [i_1 - 4]), (arr_3 [i_1 - 1] [i_1 - 1])))) ? (((((arr_0 [i_0] [i_0]) ? 8065461115766333664 : (arr_2 [i_0]))) * ((((var_11 > (arr_3 [i_0] [i_0]))))))) : (((((((var_8 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))) != (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = 14;
                            var_21 = var_5;
                            var_22 |= ((8065461115766333664 ? ((max(var_3, (((~(arr_5 [i_0] [i_1] [i_3] [i_1]))))))) : -3669216302739351317));
                            var_23 = (max(var_23, (((max(((5377221904070334746 ? 3669216302739351303 : 1481651325)), 5377221904070334746))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
