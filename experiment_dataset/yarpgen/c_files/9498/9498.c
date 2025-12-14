/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_20 = (arr_1 [1]);
                var_21 = (arr_6 [i_2] [i_0]);
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_13 [i_3] [9] [i_1] [i_0] = ((~(arr_5 [i_0])));
                arr_14 [i_0] = (((var_15 ? 85 : var_2)));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_22 = (((((arr_9 [1] [1] [i_4] [i_0]) + 19)) >= 70));
                arr_18 [i_4] = (arr_8 [i_0] [i_1] [3]);
            }
            var_23 = var_18;
        }
        arr_19 [i_0] = (((arr_15 [i_0]) ^ (((-1408 + 2147483647) >> ((((max(var_2, (arr_11 [i_0] [i_0] [7] [7])))) - 10749))))));
    }
    #pragma endscop
}
