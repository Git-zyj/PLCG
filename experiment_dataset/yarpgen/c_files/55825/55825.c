/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!9949322251849309956) ? ((-29472971 ? 8983120480276766062 : var_11)) : (var_11 - -29472971)))) ? -1241844664 : (((!18246438149534430043) ? var_0 : 2147483647))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (min(((min(var_7, (arr_5 [i_0])))), ((((-2147483647 - 1) ? (((!(arr_1 [i_3 - 1])))) : ((min(6, -109))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((!(arr_9 [17] [4] [17] [17])));
                            }
                        }
                    }
                    var_16 = (((29472970 >= 1241844646) >= ((max(-20856, (arr_9 [14] [i_1 + 1] [i_1 - 1] [i_0]))))));
                    var_17 = (arr_7 [i_2]);
                    var_18 = (min(var_18, ((((((-(arr_8 [i_0] [i_0] [i_0] [i_0] [13] [i_2]))) ? (arr_4 [i_2]) : var_0))))));
                }
            }
        }
    }
    var_19 = (((--1241844664) ? var_9 : 200305924175121560));
    #pragma endscop
}
