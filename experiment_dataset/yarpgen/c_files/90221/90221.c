/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_8 ? (var_14 % var_9) : 9223372036854775784);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 |= 914;
                var_21 |= 64622;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 = var_8;
                    var_23 = (arr_0 [4]);
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_24 = (min(var_24, (((((((27 ? -9223372036854775794 : (arr_1 [i_3] [9]))))) * ((1 & (arr_7 [i_1] [i_1 + 3] [17]))))))));
                    arr_10 [i_3] [i_1] [i_0 - 2] [i_0 + 3] = ((-((-(((arr_2 [i_0] [i_0 - 1] [13]) ? 60165 : (arr_7 [i_0] [19] [i_0 + 1])))))));
                    var_25 *= 1;
                    var_26 ^= ((((arr_3 [i_1] [i_0]) ? (arr_8 [8] [i_1]) : (~1))));
                }
                arr_11 [16] = (arr_7 [18] [i_1 + 1] [19]);
            }
        }
    }
    var_27 = var_16;
    #pragma endscop
}
