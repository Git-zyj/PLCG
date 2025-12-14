/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 531287931));
    var_21 = var_13;
    var_22 = ((-((-8980930325581480881 ? ((1305703537 ? 1401771599808597624 : -1)) : 46018))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_23 = ((arr_12 [i_0] [i_2] [i_3]) | ((403539677550175494 ? -870840760408928364 : 1180024185)));
                                var_24 = (min(var_24, (((~(!942426599))))));
                                var_25 = (max(var_25, (((2437632838 ? 4294967295 : ((((!((min(7340032, 44878))))))))))));
                                var_26 = (max(var_26, ((((6494147559786200301 != 20680) ? (((arr_4 [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0 + 1]) : (arr_2 [i_0 - 1]))) : (((((((arr_6 [6]) < (arr_0 [3] [i_4 + 1]))))) * (arr_3 [i_3]))))))));
                            }
                        }
                    }
                    arr_13 [4] [i_1] [i_2] = ((((((((arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) + var_5))) ? (!1402964523) : (arr_10 [i_0] [i_0] [12] [i_2] [i_0 - 1] [i_0 + 2])))) ? (((arr_3 [i_0 - 1]) ? (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]) : ((~(arr_9 [i_2]))))) : (arr_12 [i_0 - 1] [i_0 - 1] [i_2]));
                    var_27 = ((2790220298 ? 42166 : 4294967295));

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_28 = (-7340033 & 44876);
                        var_29 = ((-1 ? (((!-2935227517214141887) * (3483009508 + 20680))) : var_10));
                        arr_17 [i_2] [i_1] [i_1] [i_2] [i_2] [i_1] = (arr_2 [10]);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_2] [i_1] [7] = (min(0, ((((arr_4 [6] [2] [6]) && -1682193405470890604)))));
                        var_30 = ((~((57344 ? (arr_7 [i_0] [i_0] [i_2] [i_0 + 1]) : (~114688)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
