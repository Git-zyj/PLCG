/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (max(var_12, (var_2 == var_3)));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((-669281273 ? 1 : -3274342735719549011)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_15 = ((~(669281287 | var_9)));
                    arr_8 [0] [i_1] = max((((((max(var_4, (arr_4 [13] [13] [i_2])))) && ((((-669281253 + 2147483647) >> (15395644313923126665 - 15395644313923126664))))))), ((var_9 ? (arr_7 [i_0]) : ((-(arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                    var_16 = (min(var_16, (((((max(((max(4949, (arr_6 [1] [i_1] [i_2] [i_2])))), -669281273))) | (((~var_4) | ((((var_2 == (arr_1 [i_0]))))))))))));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_17 = ((var_5 == ((~((var_0 ? 3499952374 : 669281280))))));
                    var_18 = (max(((-(arr_1 [i_0 - 1]))), var_4));
                    var_19 = (((arr_4 [i_0 - 3] [i_0] [i_0]) < (((-3274342735719549016 && ((max(5271116041977887228, -669281285))))))));
                    arr_12 [i_3] [i_3] [i_3] [i_3] = (max((arr_6 [i_3] [i_3] [i_3 - 1] [i_3 - 1]), ((var_2 ? var_7 : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
