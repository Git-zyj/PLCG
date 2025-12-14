/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = -3566964224;
            var_17 &= 3166807965;
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = -111;
            arr_9 [i_0] [i_2] [i_2] = (!48511);
            arr_10 [i_0] = var_0;
            arr_11 [i_2] = 3166807974;
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_19 = (max(var_19, ((((~((195 ? var_11 : -1))))))));
            arr_15 [i_0] [i_3] = var_8;
            arr_16 [i_0] = (1128159347 ? ((((((1128159317 ? 17032 : 94)) <= 88)))) : ((3166808008 ? var_7 : var_2)));
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                var_20 = var_5;
                arr_21 [i_4] = (var_15 || var_0);
                var_21 = var_0;
            }
        }
    }
    var_22 = var_9;
    var_23 = ((((max((!16777184), (!255))))) + (max(-var_11, (!1106601399))));
    #pragma endscop
}
