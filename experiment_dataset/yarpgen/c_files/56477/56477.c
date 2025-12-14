/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(-117, ((((min(var_10, (arr_3 [20])))) ? (~var_16) : (~var_10)))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_18 = (((min(3, 1))) ? ((((-6785796607471561450 == (!var_16))))) : (var_8 & var_4));
            arr_8 [i_1] = (1 >= 0);
            var_19 = var_2;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = (min((arr_10 [i_2] [i_2] [i_1 - 2] [i_1 - 2]), (arr_9 [i_2 + 1] [i_1 - 3])));
                        arr_15 [i_2] = var_16;
                        arr_16 [i_2] = var_4;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_21 = ((1073741824 ? 3221225467 : 1073741831));
                            var_22 = (((var_7 ? var_3 : 1073741828)));
                            var_23 = (arr_12 [i_0]);
                            var_24 = var_12;
                            var_25 = (((arr_18 [i_4] [i_0] [i_0] [i_1 + 1] [i_0] [i_0]) == (arr_18 [i_4] [i_4] [i_4] [i_1 + 2] [i_2] [i_2])));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
