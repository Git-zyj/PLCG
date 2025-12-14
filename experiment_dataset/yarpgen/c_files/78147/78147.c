/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 10448142312326091827;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (arr_9 [i_1] [i_1] [i_1]);
                    var_12 -= (((((~(arr_1 [i_2])))) ? (arr_0 [i_2]) : (arr_8 [i_0] [i_1] [6])));
                    var_13 = (((arr_1 [i_0]) ? (((((arr_6 [i_1]) != (arr_6 [i_1]))))) : (max(var_8, (arr_2 [i_2])))));
                    var_14 = ((((min(((30064771072 ? var_8 : (arr_7 [i_0]))), -1642236833))) ? (((arr_3 [i_1]) ? var_1 : (arr_3 [i_1]))) : (arr_3 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_15 = ((((arr_11 [i_3]) || (arr_11 [i_4]))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_16 += ((((max(var_1, (arr_10 [i_3])))) || (((-(arr_10 [i_3]))))));
                            var_17 = (min((min((arr_13 [i_3] [i_4] [i_5]), (arr_13 [i_3] [i_4] [4]))), ((((arr_13 [i_3] [i_3] [i_5]) > (arr_13 [i_3] [i_3] [i_6]))))));
                        }
                    }
                }
                arr_22 [i_3] = ((((min((arr_12 [i_3] [i_4]), (arr_12 [i_3] [i_4])))) ? (((max((arr_14 [i_3] [i_3]), (arr_20 [i_3] [1] [i_3] [i_3] [i_4] [i_3]))))) : (min((arr_15 [i_4]), var_8))));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_18 = (--30064771072);
        arr_25 [i_7] = ((!(arr_24 [i_7])));
        var_19 = (((163 ? 18446744043644780557 : 2199023255551)));
        var_20 = (max(var_20, var_6));
    }
    #pragma endscop
}
