/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((arr_3 [i_1 - 1] [i_1 - 2]) ? 1180383133267799202 : (arr_2 [i_1 - 2] [i_1 - 1])));
                arr_5 [i_1] = (((arr_2 [i_0] [i_1 - 2]) ? ((8900867123926362484 % (arr_3 [i_0] [20]))) : -var_6));
                arr_6 [i_0] [i_0] [i_0] = (max((max(var_3, var_10)), (((!((max(var_6, 6879323397160634403))))))));
                arr_7 [5] = (min((arr_3 [i_1 - 1] [18]), (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_17 = 9545876949783189131;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [i_4] [i_3 + 1] [i_6] [1] [1] = var_14;
                                arr_21 [4] = (arr_2 [i_2] [i_2]);
                                arr_22 [i_6] [i_3] = ((+((((((arr_3 [i_4] [i_5]) % var_14))) ? (min(-22, (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_14 [i_2 - 2])))));
                            }
                        }
                    }
                }
                arr_23 [i_2 + 2] [17] [i_2 + 2] &= (max((((arr_14 [i_2 - 2]) ? (arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_3]) : ((((arr_9 [4]) >> (((arr_10 [i_2] [i_2]) - 340937366))))))), ((((arr_13 [i_2 + 2] [i_3]) ? (arr_8 [i_2 + 1] [i_2 + 1]) : var_0)))));
            }
        }
    }
    #pragma endscop
}
