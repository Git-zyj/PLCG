/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_9) + (((61391 ? ((153 ? 53560 : -10)) : (var_0 || 14095873486228236749))))));
    var_13 = ((((var_3 <= (var_4 * var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((!((((((arr_4 [15] [19]) ? 10797 : var_10)) + (var_1 <= var_9))))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        var_15 = (max(var_15, 111));
                        arr_13 [10] [i_1] [i_3] [i_2 + 1] [i_2 - 1] [i_3 + 1] = (max(((((((10797 ? var_1 : (arr_6 [15])))) || (arr_11 [16] [i_2 - 1] [i_3])))), -57));
                        var_16 = (min(var_16, (((max(((~(arr_7 [16]))), 10794))))));
                    }
                    var_17 = (-201 ? ((((arr_1 [i_2 - 1] [i_2 - 1]) || var_2))) : ((125 + (arr_0 [i_2 - 1] [i_2 + 2]))));
                    var_18 = ((-(((-124 + 2147483647) << ((((var_8 ? (arr_6 [17]) : 3138243315472533221)) - 41894))))));
                }
            }
        }
    }
    var_19 = (var_7 + var_4);
    var_20 = ((var_5 ? var_8 : var_11));
    #pragma endscop
}
