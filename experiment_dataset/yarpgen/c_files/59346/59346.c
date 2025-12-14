/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_10 = (arr_2 [6] [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((~((-(arr_4 [6] [i_0 + 1])))));
                    var_12 = -247;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [18] [i_1] [i_2] [i_3] [i_4] = (min(4294967295, 6502760729971303833));
                                var_13 = var_7;
                                var_14 = (max(var_14, ((max(var_7, ((4294967295 ? 4077991678 : -7834346560213910337)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0 - 3] = (~1);
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [9] = ((1 % ((max(57, 15)))));
        arr_17 [i_5 - 2] [i_5 - 2] = ((~(((var_8 > (arr_8 [i_5] [i_5]))))));
        arr_18 [i_5 - 2] [i_5 - 2] = (~4294967295);
    }
    var_15 = var_7;
    #pragma endscop
}
