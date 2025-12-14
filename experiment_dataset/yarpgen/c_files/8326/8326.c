/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = arr_5 [i_0 - 1];

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [10] [i_1] [i_2] [i_1] = var_13;
                        var_21 = var_10;
                        var_22 = var_6;
                        var_23 = ((var_9 ? (arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) : (arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])));
                        var_24 = var_11;
                    }
                    var_25 ^= min(((((((arr_1 [i_0 - 1] [i_1]) != (arr_5 [i_1])))) | ((8661 ? 126 : var_12)))), 53936);
                    var_26 = ((((((max(11599, 17))) ? 11333 : (arr_8 [i_2 - 2] [i_0] [i_0 - 1] [i_0]))) != (arr_4 [i_0] [i_0] [i_2])));
                }
                var_27 = (max(((min((arr_5 [i_0]), -110))), (arr_5 [i_0 + 3])));
            }
        }
    }
    var_28 = ((var_1 ? var_10 : 14558));
    #pragma endscop
}
