/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = ((((((max(var_11, var_11))) ? ((1 ? 240 : 262143)) : ((var_6 ? var_9 : (arr_6 [i_2] [i_2] [i_2] [i_1] [i_0]))))) << (((((~var_4) + (~5807669469506575234))) - 6342750413783488272))));
                        arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] = (~((~(arr_6 [i_1 + 2] [i_2] [i_2] [3] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_13 = (max(((((var_7 ? (arr_7 [i_4] [i_2] [i_1] [i_0]) : var_10)) << (((var_8 == (arr_0 [i_4])))))), (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                                var_14 = (max((((~12639074604202976381) - ((((!(arr_1 [i_1 - 1] [i_0]))))))), ((((((arr_10 [i_0]) ? 51 : var_0)) == (((arr_5 [i_0] [i_5] [i_5] [i_0]) ? 8988370775897720092 : (arr_15 [7] [7] [7] [7] [i_5]))))))));
                                arr_17 [i_5] [i_4] [i_0] [i_0] [i_1] [i_0] = (arr_3 [i_5 + 3]);
                            }
                        }
                    }
                    var_15 = 179593506;
                }
            }
        }
    }
    var_16 = var_11;
    var_17 = var_9;
    #pragma endscop
}
