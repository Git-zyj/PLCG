/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((min(var_10, 0))), ((var_12 ? var_7 : var_9))))) ? ((~(max(127, var_5)))) : ((min(((var_10 << (var_19 - 42003112))), var_12)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 += (((+((7644264905131759869 ? (arr_0 [i_0]) : 1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = ((((-(arr_2 [i_1]))) & (arr_3 [i_1] [i_0] [13])));
            arr_6 [i_0] = (arr_2 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_16 [i_4] = (0 == 65535);
                            arr_17 [i_3] [i_2] [i_2] [i_3] [i_4] [6] [i_2] = (arr_13 [i_0] [14] [i_1] [14] [14] [14]);
                            var_23 = (min(var_23, ((((var_9 == 1) ? var_1 : (arr_10 [i_0 - 1] [i_2] [i_4]))))));
                            arr_18 [i_0] [5] [i_0 + 2] [i_0 + 2] [i_0] = ((2147483648 ? (((13085840770678341309 ? (arr_0 [i_0]) : 1))) : 8139155370884239236));
                            arr_19 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = 2047;
                        }
                    }
                }
            }
        }
        var_24 -= ((((max(var_1, 1))) ? 1096250488 : (arr_2 [i_0 + 2])));
    }
    var_25 = -var_18;
    var_26 += (min(-829426481, (((!((min(var_7, var_11))))))));
    #pragma endscop
}
