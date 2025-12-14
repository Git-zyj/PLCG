/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((arr_4 [i_0]) | (((min((arr_0 [i_0] [i_2]), var_12)) << var_4)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_1] = (arr_9 [i_1] [i_1] [i_1] [i_1] [i_4] [i_0]);
                                var_17 = var_4;
                                var_18 += ((((((!(arr_8 [i_0]))) << (var_12 - 3947565047373658415)))));
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = ((!((max(15, 35)))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] = (min((max(((var_0 ? (arr_8 [i_0]) : var_12)), 15)), var_7));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_19 = ((10366 ? (arr_1 [i_0]) : ((15 ? 7418260078276953128 : -9))));
                        var_20 = (min(var_20, var_9));
                    }
                }
            }
        }
    }
    #pragma endscop
}
