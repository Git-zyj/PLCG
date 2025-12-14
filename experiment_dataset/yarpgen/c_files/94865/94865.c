/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((!(!var_3))))));
        var_18 = (max(((((-2 + 2147483647) >> (var_0 + 24007)))), (((-var_5 / ((max(var_3, (arr_1 [i_0])))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (((((-(-127 - 1)))) ? (arr_1 [i_1]) : ((-1 - (arr_1 [i_0])))));
            var_20 = (var_9 / 31);
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_0] [i_0 - 1] = ((-((((var_17 || (arr_7 [i_2 - 1]))) ? (((var_17 ? var_7 : 21049))) : (var_15 - var_15)))));
            arr_10 [5] [i_2 + 3] [5] = ((-(max(-125, 1023041886))));
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_21 = (min((max((var_8 & var_9), ((min(9020, (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))), ((max((arr_2 [i_0]), -1023041903)))));
            arr_13 [i_3 - 1] = ((min((max((arr_8 [7] [4] [6]), var_2)), ((max(1023041864, 495767049))))));
        }
    }
    var_22 ^= ((-((-((var_3 ? var_2 : 20))))));
    #pragma endscop
}
