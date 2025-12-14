/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80941
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
                arr_5 [i_0] [i_0] [i_1] = (((((60815 + ((60815 >> (((arr_3 [i_0] [i_1] [i_1]) - 129))))))) ? (1 < 9223372036854775807) : (min(var_11, (arr_3 [i_0] [i_0] [i_0])))));
                var_16 *= -4720;
            }
        }
    }
    var_17 = (max(var_17, ((max(var_11, (((((min(4294967295, var_8))) ? var_4 : 60805))))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (min((min((max((arr_18 [i_2 + 1]), 60816)), ((max(7168, 4729))))), (((1 - ((32764 >> (var_14 + 60))))))));
                                arr_19 [6] [2] [2] [i_4] [i_5] [i_6] [i_4] = ((-(arr_6 [i_2 - 1])));
                                arr_20 [i_2 + 2] [i_3] [i_3] [i_5] [i_6] &= (arr_12 [i_2] [6] [i_4] [i_5]);
                                var_19 ^= (((max(60807, var_6)) >> ((((165 ? (arr_6 [i_2 + 1]) : (arr_7 [i_2 - 1] [i_2 + 2]))) + 1381758365))));
                                arr_21 [i_2 + 2] [i_3] [i_4] [i_5] [i_2 + 2] = ((((91 ? (arr_14 [i_2] [i_2 - 2] [i_6] [i_6] [i_2] [i_6]) : (arr_14 [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1]))) > ((min(60807, 60799)))));
                            }
                        }
                    }
                    var_20 = ((arr_6 [i_2 - 1]) ? (((arr_11 [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1]) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 - 2]))) : ((max(-1765, 4721))));
                    var_21 = ((-((((arr_8 [i_2 + 1]) > (arr_8 [i_2 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
