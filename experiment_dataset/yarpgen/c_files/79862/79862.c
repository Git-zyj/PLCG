/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, var_8));
                var_13 = (min(var_13, ((((0 | 54646) ? (((arr_5 [i_0 + 1] [i_1] [i_1 - 1]) ^ (arr_5 [i_0 + 1] [i_1] [i_1 - 1]))) : ((-(arr_0 [i_1 - 1]))))))));
                arr_7 [i_1] [i_0] = ((((min(22, (max((arr_5 [i_0] [i_0 - 3] [i_1]), 3609791915791077529))))) ? (((arr_3 [i_0] [i_1]) ? (arr_2 [i_0 - 1] [i_1 - 1]) : var_9)) : (((((-(-32767 - 1))) == var_2)))));
                arr_8 [i_1] = (max((arr_5 [i_0] [i_1] [i_1]), ((9725383654822007668 ? (((((arr_0 [i_1]) != 597084281)))) : ((32767 ? var_6 : 32512))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                var_14 = var_4;
                var_15 = ((var_7 ? ((+(((arr_11 [i_3 - 1]) ? (arr_13 [i_2] [i_3] [i_3 + 1]) : 59)))) : (arr_9 [i_2])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_3] [i_2] = ((6 ^ (((var_3 ? var_8 : var_3)))));
                            var_16 = (min(var_16, ((((((~(((arr_13 [i_2] [i_2] [i_2]) << (arr_15 [5] [i_3])))))) ? ((min((((arr_11 [i_4]) ? (arr_14 [i_4]) : var_6)), ((max((arr_11 [i_4]), 252)))))) : (~var_7))))));
                            arr_20 [i_2] [i_3] [13] = ((((((arr_10 [i_3 - 1]) ? (arr_10 [i_3 - 1]) : 10115))) ? (23780 ^ 112) : -2571));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
