/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(1, 1086298155)))) ? (((((var_6 ? 0 : 1302640449))) ? var_13 : 54568)) : ((1 >> (8588708488654394177 - 8588708488654394163)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (min((min(((38 ? (-2147483647 - 1) : 1)), var_8)), (3473875019 || -9414)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((~((var_12 ? 2 : 26856375))))) || (((var_8 / (max(-11311, var_8)))))))));
                                var_16 = (((((((((var_12 == (arr_0 [i_1] [i_2]))))) + (((arr_3 [i_0]) ? var_7 : 8588708488654394187))))) ? ((65534 ? 8588708488654394177 : 1)) : ((((arr_4 [i_1]) ? var_1 : var_13)))));
                                arr_14 [i_0] [i_1] [i_0] [13] [i_0] = (((2 + (~var_8))) & (~var_5));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [7] [1] [i_5] = -var_6;
                        var_17 = (max(var_17, (~1)));
                        var_18 = (min(var_18, ((max((arr_15 [i_0] [4] [i_2] [i_2] [i_2] [i_5]), (max((((4294967288 ? (arr_6 [i_1] [i_1]) : var_11))), var_12)))))));
                        var_19 = (((9115 ? ((9858035585055157438 ? 1 : 1)) : 8388608)));
                    }
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
