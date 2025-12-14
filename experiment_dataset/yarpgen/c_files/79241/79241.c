/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2 - 2] [i_0] = 65525;
                            var_16 &= ((+(min((arr_5 [i_2 + 1]), (max((arr_2 [i_1] [i_0]), var_11))))));
                            arr_10 [i_0] [i_2] = ((var_5 ? (((((arr_8 [i_3] [i_0] [i_0] [i_0]) ? var_14 : (arr_5 [i_0]))))) : (min((arr_7 [6] [i_0] [i_0] [i_2 - 3]), (arr_7 [i_2] [i_0] [i_0] [i_2 - 3])))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (i_0 % 2 == zero) ? (((((-(arr_1 [0]))) << ((((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + 1539525728)) - 7))))) : (((((-(arr_1 [0]))) << ((((((((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + 1539525728)) - 7)) + 152852441)) - 21)))));
                arr_12 [i_0] [i_0] = (((~142302807) ? (arr_0 [i_0] [i_1]) : ((var_13 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] = ((-(((((-7779 ? 0 : (arr_8 [i_0] [i_0] [i_4] [i_5 - 1])))) ? (((var_2 ? var_10 : 1865678719))) : (((arr_2 [i_1] [i_0]) % (arr_7 [i_0] [i_5 + 3] [i_0] [8])))))));
                            arr_20 [6] [6] [i_1] [i_4] [i_1] [i_0] = (min((((-(1 != 5082)))), 1));
                            arr_21 [i_5] [i_0] [8] [i_0] [i_0] [i_0] = var_2;
                            var_17 = (((min((arr_8 [7] [i_0] [9] [i_5]), -133395723))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((!(((((max(var_11, 5918407357763844299))) ? ((min(1, 1))) : var_6)))));
    #pragma endscop
}
