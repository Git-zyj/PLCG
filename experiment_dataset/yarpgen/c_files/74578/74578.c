/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((((((38616 / (arr_6 [i_0] [i_1] [12]))) + (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0]) : (((16992290674469242938 ? 38616 : -26919))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1 + 2] [i_4] [i_4] [i_0] [i_1] [i_1 + 2] = ((((((arr_10 [i_0] [i_1] [i_2] [i_3 - 3]) ? (arr_10 [i_3] [i_1 + 4] [i_2] [i_3 - 2]) : (arr_10 [i_0] [i_2] [i_2] [i_3])))) ? 0 : ((1639993881 ? (arr_10 [i_0] [1] [i_2] [i_4]) : (arr_10 [i_0] [i_2] [i_2] [i_2])))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [0] = (~-0);
                                var_12 = (max(var_12, (((((((arr_4 [i_0]) > 1))) * (!3928917389452066365))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = (((((arr_1 [i_0] [i_0]) << (((18446744073709551607 > (arr_4 [i_0]))))))) ? 668328024 : ((-(min(-7208161601959595790, (arr_17 [i_0] [i_1 + 2] [i_0] [i_5] [i_5 + 2] [i_1]))))));
                                arr_20 [i_1] [i_1] [i_2] [i_1] [2] = ((~(((((!(arr_2 [i_0])))) / -83))));
                                arr_21 [i_0] [i_1] [i_2] = (arr_11 [i_0] [i_0] [i_1] [i_5 - 2] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_8, (((((var_3 ? var_6 : var_3))) ? (18446744073709551595 & var_4) : 4632891453532935212))));
    #pragma endscop
}
