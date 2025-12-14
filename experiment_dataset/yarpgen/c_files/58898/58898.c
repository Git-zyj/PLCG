/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((~(~114))) & var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_19 -= var_17;
                    var_20 = (max(var_20, ((((arr_0 [i_0] [i_1]) >> 0)))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_21 = 218;
                    arr_12 [i_0] [i_1] [i_3] [1] = (-9223372036854775807 - 1);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_22 ^= (max(15, ((142 | (-498140737 - -756547765)))));
                    arr_16 [12] [i_4] = (arr_6 [13] [13] [i_4]);
                    arr_17 [i_0] [i_0] [i_0] = (3506238383 + 1322368072);
                    arr_18 [4] [9] [i_4] = ((((((~7259857373677909195) ? ((4026531840 ? (arr_9 [i_1] [i_1] [i_1]) : (arr_2 [i_4] [i_1] [i_0]))) : (0 ^ -19)))) ? (min(((64 ? (arr_2 [5] [5] [5]) : 8439320698319755286)), (arr_7 [i_0] [i_0] [i_0]))) : var_1));
                }
                var_23 = ((((-(9208277157049821365 + 788728913))) + var_8));
            }
        }
    }
    var_24 = (min(var_24, ((min(2445912785, (var_3 + var_9))))));
    var_25 = ((var_0 ? var_13 : var_10));
    #pragma endscop
}
