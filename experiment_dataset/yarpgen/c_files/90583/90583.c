/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_0]);
                arr_7 [i_0] [i_0] [i_1] = (((~4103147918) < ((((((-(arr_5 [i_0])))) ? 18411086484094521094 : -1)))));
                arr_8 [i_0] [i_1] [i_0] = (-1909593060 / 296974906);
            }
        }
    }
    var_18 = (min(var_18, (((((~var_13) > var_11))))));
    var_19 = (min(var_19, ((((max(var_14, 30168)) - (var_8 / var_9))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_2] = (arr_9 [i_4 + 3] [i_4 - 2]);
                    var_20 = (max(var_20, (min((!11118417178075497654), (~1)))));
                    arr_17 [i_4] [i_3] [i_2] = (arr_13 [i_4 + 2] [i_3] [i_4]);
                    var_21 ^= (+(((arr_14 [i_4 - 1] [i_3] [i_4]) ? (arr_14 [i_4 + 3] [i_3] [7]) : 64512)));
                    var_22 = ((((((var_12 / (arr_15 [i_2] [i_3] [i_4]))))) / ((-((1 ? 4294902784 : (arr_15 [i_4] [i_3] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
