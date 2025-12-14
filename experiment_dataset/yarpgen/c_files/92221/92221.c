/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (min(-10, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (arr_0 [i_1]);
        var_18 = (min(var_18, (arr_1 [i_1 - 1])));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_19 = (arr_6 [i_2 - 1]);
        var_20 = (min((((arr_8 [i_2] [i_2 - 2]) / (arr_8 [i_2] [i_2 - 1]))), ((-(arr_8 [i_2] [i_2 + 1])))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_21 = ((-((max((arr_10 [i_2 + 1]), (arr_10 [i_2 + 1]))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5] [i_6] [i_3] [i_2] = (min((arr_8 [i_2 + 1] [i_3]), (arr_16 [i_2 - 1] [i_3])));
                            var_22 = (arr_10 [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_23 = 79;
    var_24 = (max(var_24, var_13));
    #pragma endscop
}
