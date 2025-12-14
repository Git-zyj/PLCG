/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_8 ? 32767 : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [12] [i_1] [i_1] = ((~(arr_3 [i_0] [i_1] [8])));
                var_11 = (min(var_11, ((((-(arr_0 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_3] [i_3] [12] = ((54629 ^ (((25880 && (((var_4 >> (18446744073709551615 - 18446744073709551612)))))))));
                            var_12 = (min(var_12, ((max(-13127723321536692469, var_5)))));
                            arr_12 [i_0] [18] [i_2] [i_3] [i_3] = ((~(arr_7 [1] [i_1] [i_1] [7])));
                            arr_13 [15] [i_1] [i_1] [i_3] [i_1] [9] = 1;
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, 22927));
    #pragma endscop
}
