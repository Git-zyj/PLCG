/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((min(var_15, var_3)) ^ (((var_17 ? ((var_12 ? 27 : var_5)) : ((var_15 ? 70 : 70)))))));
    var_20 = var_0;
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = (var_13 | 180);

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_15 [i_2] |= (max(((97 && (arr_7 [i_0 - 4] [i_3 + 2]))), (arr_0 [i_0 - 1] [i_3 + 2])));
                        var_22 = (min(var_22, (((((70 ? 536868864 : 1048575)) | (min((min(var_10, var_12)), ((var_14 ? 55 : -25951)))))))));
                        var_23 = (((((((4294967295 ? 190 : 0)) | 1))) ? 9223372036854775807 : 4032));
                    }
                    arr_16 [i_1] = ((((((!(arr_9 [i_1 - 2] [i_0 - 4] [i_0] [i_0]))))) % ((160 ? (((min((arr_8 [i_2] [10] [10]), (arr_14 [i_0] [i_0 - 4] [2] [i_0] [i_0 - 1] [i_0 + 1]))))) : ((46377 ? 1 : 17449714224397830047))))));
                }
            }
        }
    }
    #pragma endscop
}
