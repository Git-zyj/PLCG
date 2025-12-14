/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min((min((arr_1 [i_1 + 2]), var_1)), (max(var_14, (arr_1 [i_1 - 1])))));
                var_20 = (min(((max(1, 0))), (max((arr_3 [i_0] [i_0]), 0))));
                var_21 = (min(var_21, (max((min((arr_2 [i_1 + 2] [i_1 + 2] [i_1 - 2]), 1)), (max(1, var_9))))));
                arr_4 [i_0] [i_1] = (max(((min(32767, -32752))), (max((arr_1 [i_1 - 2]), var_13))));
                var_22 = (max(var_22, ((min(((min((max((arr_2 [i_0] [i_0] [i_1 + 2]), (arr_3 [i_0] [4]))), 32753))), (min(((min(-8336894286854034161, -32752))), (min((arr_1 [i_1]), (-9223372036854775807 - 1))))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = 10799562902989111498;
        var_23 = -1368352232;
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        arr_12 [i_3] = (min((min(31, (arr_11 [i_3 + 2] [i_3 + 1]))), (max(var_9, 1519221547))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_24 = (max((max((arr_15 [i_4 - 1]), (arr_15 [i_4 - 1]))), (max(-53, (max(29, 18446744073709551609))))));
                    var_25 = max((max(60190154, var_9)), ((max((arr_2 [i_3 + 3] [i_3 - 1] [i_3 - 1]), var_17))));
                    var_26 = min((min(var_11, (min(var_12, var_8)))), ((min(32935, 1))));
                }
            }
        }
        var_27 = (max((max((arr_15 [i_3 - 1]), ((max(var_17, 10))))), ((max(var_17, 29265)))));
    }
    var_28 = (min((max(var_3, var_15)), var_13));
    #pragma endscop
}
