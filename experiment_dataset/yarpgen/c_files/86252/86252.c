/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_3 - 1] [i_0] [i_1] [i_0] [i_0] = (((((!(!var_9)))) < (arr_10 [i_0])));
                                arr_13 [5] [1] [i_2] [1] [i_0] = (min(37741, (min(((max(var_1, var_4))), (max(-5, var_3))))));
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_1 + 1] [i_0] = (min((max((((32549 ? var_7 : 59646))), (((arr_0 [5] [i_2]) ^ var_8)))), (12516 || -12519)));
                                arr_15 [i_2] [i_4] [i_3] [i_2] [i_1 - 2] [i_0] = (min((arr_1 [i_1 - 2] [i_1 + 3]), ((var_1 % (arr_6 [i_3 + 4] [9] [i_1 + 2] [i_1 + 3])))));
                                arr_16 [i_0] [3] [i_4] [i_3 - 2] [i_2] [i_0] [i_0] = ((-(((((4 ? 27766 : var_6))) ? (!var_3) : (var_9 == var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_23 [i_6 + 1] [4] [i_0] [10] [i_0] = ((var_5 ? (((min(11161, -11149)))) : (((arr_22 [7] [i_6] [i_6 - 1] [i_1 - 2]) ? var_8 : (arr_22 [i_6 + 1] [i_6] [i_6 - 2] [i_1 - 1])))));
                                arr_24 [i_6] [i_5] [10] [i_1 - 1] [i_0] = ((((min((max(-2110954867, var_1)), ((var_3 ? var_7 : var_2))))) ? (((513578159 | 3919716253806626618) ? (2132630478 ^ -23411) : 8435265229242663318)) : (max(4135635987695402533, (min(var_8, var_4))))));
                                arr_25 [i_6] [i_5] [i_5] [i_0] [i_1 - 2] [i_1] [i_0] = min(var_6, ((var_11 ? (arr_6 [i_6] [i_6 - 1] [i_6 - 2] [i_1 + 2]) : (arr_20 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_1 - 1]))));
                                arr_26 [0] [0] [i_0] = ((((arr_22 [i_6 - 2] [i_6 - 2] [i_1 + 2] [i_1]) ? (arr_22 [i_6 + 1] [i_1 + 2] [i_1 + 2] [i_1]) : 12425)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_1] [i_8] [i_2] [i_8] [i_1] [i_0] = var_11;
                                arr_33 [i_8] [i_7] [i_8] [i_1] [i_0] = ((((min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1])))) ? (min((arr_0 [i_8 + 3] [i_1 + 2]), (((arr_31 [i_8]) % 11161)))) : -32550));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
