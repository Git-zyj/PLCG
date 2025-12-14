/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = 140187732541440;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 |= (arr_0 [i_0]);
                    var_15 = ((((((arr_3 [i_2]) ? (!1) : ((min(23560, 117)))))) ? (min(((-5490 ? 1 : (arr_7 [i_0] [i_1 + 1] [6]))), (max(5507, -470805295)))) : (arr_6 [i_0] [i_0] [i_2])));
                    var_16 = (min(var_16, 130023424));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_17 = -831328578;
                    var_18 = (~0);
                }
                var_19 = arr_8 [i_1 + 3] [i_1 - 2] [i_1] [i_1];
                arr_10 [i_0] [i_1] |= ((var_11 != (min((arr_0 [i_1]), (max(-5490, 831328566))))));
                var_20 = (max((((((((arr_0 [i_1 - 2]) ? -831328578 : -7763))) ? -831328578 : 16))), ((((((arr_6 [i_1] [i_1] [i_0]) % 36482))) ? (((max(var_8, -125)))) : (max(var_7, var_9))))));
            }
        }
    }
    var_21 ^= (~1);
    var_22 |= var_5;
    #pragma endscop
}
