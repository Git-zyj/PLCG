/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_13));
    var_17 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 ^= ((!(arr_2 [i_1] [i_1] [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((((2932936309 ? (arr_4 [i_2] [i_1] [i_0]) : 37534))) ? -var_6 : ((~(arr_5 [i_2] [i_1] [i_1] [i_0]))));
                var_19 = (min(var_19, var_3));
                var_20 = (max(var_20, (-1292353573520723700 + -1575664147)));
            }
            var_21 = (arr_4 [i_0] [i_1] [i_0]);
        }
        arr_8 [i_0] [i_0] = ((-1292353573520723713 ? (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_5 [10] [10] [10] [i_0]))) : 1557352275));
        arr_9 [i_0] = (((~var_11) == (arr_5 [i_0] [i_0] [i_0] [i_0])));
    }
    var_22 = 720642561;
    #pragma endscop
}
