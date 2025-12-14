/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((max((!12063948218476534822), ((18446744073709551615 << (-95 + 141))))));
                arr_6 [i_1] = (((((!(!-78)))) * (((!(arr_2 [i_1]))))));
                arr_7 [i_0] [i_1] [i_1] = 7333884574612023798;
                var_11 ^= ((((max((arr_4 [i_1 - 3] [i_1 + 1] [0]), (arr_1 [i_1 - 4] [i_1])))) ? ((var_3 / (arr_1 [i_1 - 4] [i_1]))) : (arr_1 [i_1 - 2] [i_1 + 1])));
                var_12 = (((((!(arr_2 [i_0])))) <= ((((arr_3 [0] [i_1 - 2]) && (arr_0 [i_1 - 3] [i_1 - 4]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] = (min((arr_9 [i_3 - 1]), ((((arr_10 [i_3 - 1] [i_3] [i_3 - 1]) % (arr_10 [3] [i_3] [i_3 - 2]))))));
                var_13 = (max(1429336483, ((((arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1]) / (arr_10 [i_3 + 1] [i_3] [i_3 + 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_14 = ((var_9 != ((max((!var_1), ((!(arr_13 [i_2]))))))));
                            arr_17 [i_2] [i_4 + 3] [i_4] = (max((max(var_3, -71)), (((arr_15 [i_4] [i_4 + 2] [i_5] [i_5 + 4]) ? (arr_15 [i_4] [i_4 + 3] [i_4] [i_5 + 3]) : (arr_15 [i_4] [i_4 - 1] [i_4] [i_5 + 2])))));
                            var_15 = (min(var_15, (arr_10 [17] [17] [i_4])));
                            var_16 = (max(var_16, (!var_7)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((min((!-64), -4371866504407327421))))));
                                var_18 = (arr_15 [i_6] [i_3] [i_6] [i_7]);
                                var_19 = (min(var_1, (max((min((arr_14 [i_7] [i_7] [i_6]), 8331)), (arr_21 [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((-114 ? 11598473651164122249 : var_5)) << (((max(8325, 7264691935706548735)) - 7264691935706548720)))));
    #pragma endscop
}
