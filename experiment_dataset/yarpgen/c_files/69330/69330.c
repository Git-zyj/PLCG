/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(var_12, (((-((max(1, -16384)))))))))));
    var_18 = (max(var_18, 16393));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((+(((arr_2 [i_0]) ? (arr_0 [i_0]) : var_12))))) ? (max((((arr_0 [i_0]) ? (arr_4 [6]) : 36028797018832896)), ((((arr_2 [i_0]) == (arr_1 [i_1])))))) : (1 * -16380))))));
                arr_5 [i_1] [i_1] [i_0] = min((((arr_3 [i_0] [i_1] [i_1]) ? (((~(arr_1 [i_0])))) : (-16403 & 4294967280))), 146561738);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((-(((!(((156 ? 16403 : 250)))))))))));
                                var_21 = 19279;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_22 -= var_9;

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_1] [i_5] [i_7] [i_7] = (arr_0 [9]);
                                var_23 |= (((arr_14 [i_0] [1] [i_7] [i_6 + 3]) / (arr_14 [i_0] [i_1] [i_6] [i_6])));
                                var_24 = (min(var_24, ((((arr_18 [i_6 + 2]) || (arr_4 [i_7]))))));
                            }
                            var_25 = (arr_14 [11] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
