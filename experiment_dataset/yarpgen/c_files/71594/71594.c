/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (!879025788);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 &= ((!((min((((arr_4 [i_0] [i_0] [i_2]) * (arr_1 [i_4]))), (~var_4))))));
                                var_15 = (arr_6 [i_1] [i_2] [i_3] [7]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = ((((max(-719395309, (((arr_5 [i_6] [i_5] [i_2]) ? (arr_13 [i_0] [i_5] [i_2] [i_5] [i_5]) : (arr_0 [i_2] [i_1])))))) ? (max((arr_1 [i_2 + 1]), (((arr_2 [i_1] [i_1]) ? (arr_1 [i_2]) : 118)))) : (((((9995 ? 65167 : (arr_1 [i_0])))) ? (max(12839432937742524687, var_10)) : var_1))));
                                arr_17 [i_0] [i_1] [8] [i_6] = (min((max((arr_6 [i_1] [i_0] [i_2 + 1] [i_6 - 1]), var_0)), 31));
                                var_17 &= (((arr_16 [i_0] [i_0] [i_1] [i_2 - 2] [i_6 - 1]) ? ((7775398337266368871 ? (arr_9 [i_0] [i_1] [6]) : var_3)) : var_8));
                                var_18 ^= 16971;
                            }
                        }
                    }
                    arr_18 [i_1] = (((((arr_10 [i_1]) % ((var_11 ? -69 : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2 - 2]))))) == (((~(arr_12 [i_2] [i_1] [i_1] [i_0]))))));
                    var_19 = var_8;
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
