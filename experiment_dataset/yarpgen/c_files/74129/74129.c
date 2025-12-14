/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((!(11353010615800158884 >= var_10)));
                arr_5 [i_0 - 1] [i_1] [i_0] |= ((((-(!1283285715))) <= 60));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [i_0] = var_9;
                        var_18 = (((arr_11 [3] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1]) : (arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0])));
                    }
                    var_19 = (min(var_19, (((var_16 ? (((arr_3 [i_1] [i_1] [i_2]) ? var_9 : (arr_8 [i_0] [i_1] [i_2]))) : (arr_8 [i_0 + 1] [i_1] [i_0 - 2]))))));
                }
                arr_15 [i_0] [i_1] [i_0] = (((((min(127, (arr_2 [i_0] [i_0 - 1]))))) < (arr_2 [i_0] [i_0 - 1])));
                arr_16 [i_0] = (((((-21288 + 2147483647) << (((arr_0 [i_0 + 1]) - 56929)))) != (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : 51821))));
            }
        }
    }
    var_20 = (max(var_20, (127 != var_9)));
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
