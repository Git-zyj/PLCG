/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = var_8;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_11 = 6601;
                arr_8 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_1]);
            }
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_12 = (((((var_0 ^ (arr_9 [i_1] [i_1])))) ? (arr_6 [i_1] [i_0] [i_1] [i_1 - 1]) : (127 % var_2)));
                var_13 = (((arr_2 [i_0] [i_3]) ? (arr_6 [i_1 - 1] [i_0] [i_0] [i_0]) : 1830402678));
                var_14 = ((-(arr_3 [i_3] [i_1] [i_0])));
            }
        }
        var_15 += (((((1175931417 ? (arr_2 [i_0] [i_0]) : (arr_9 [i_0] [i_0])))) + ((var_8 ? 0 : var_1))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_15 [i_4] = ((-((-(arr_9 [i_4] [i_4])))));
        var_16 = (((max(-12, (arr_11 [i_4] [i_4])))));
    }
    var_17 = var_0;
    var_18 = (var_4 & var_7);
    #pragma endscop
}
