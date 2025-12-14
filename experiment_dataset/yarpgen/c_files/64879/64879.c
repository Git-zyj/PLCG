/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_10;
                var_21 -= arr_3 [1];
            }
        }
    }
    var_22 = (((((!(~var_1)))) << (var_9 + 32086)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_8 [i_2] [i_2] = min(((((~var_6) ? 50107 : var_19))), ((6861447226437012912 / (arr_7 [i_2] [i_3]))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_2] [i_2] [6] = ((((-16384 && (1 <= -16390)))));
                            var_23 += 255;
                            var_24 = ((125 ? 6861447226437012903 : -16406));
                        }
                    }
                }
                arr_17 [i_2] [i_2] = ((~(min(((-28637 ? 11585296847272538704 : 22)), (((~(arr_11 [i_2] [18] [i_2] [i_2]))))))));
                var_25 = (((4064261514 ? 8192 : (-9223372036854775807 - 1))));
                var_26 -= ((+((var_4 ? ((((arr_12 [11] [3] [i_3] [16]) > (arr_15 [i_2] [i_2] [i_2] [5])))) : (((arr_4 [1]) ? (arr_13 [i_2] [20] [8] [i_3]) : var_2))))));
            }
        }
    }
    #pragma endscop
}
