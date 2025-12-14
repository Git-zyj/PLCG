/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_2] = -var_10;
                    arr_7 [i_0] [i_0] = 7428564787123734009;
                }

                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    var_17 = (max(var_17, ((max(((((min(0, var_8))) ? (arr_3 [i_0] [i_3]) : (arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_3]))), ((((arr_5 [i_3 + 1] [i_1 + 4]) & (arr_5 [i_3 + 2] [i_1 + 1])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_13 [i_4] [i_4])));
                                var_19 = (((arr_14 [i_5] [i_1] [i_3] [i_1] [i_0]) == (arr_3 [i_0] [i_0])));
                                var_20 = (min(var_20, (~84)));
                                var_21 += (((arr_11 [i_0] [i_0] [i_0] [i_5]) ^ (((((((arr_10 [i_3] [0] [i_3] [i_3]) ? -83 : (arr_14 [3] [i_1] [i_3] [3] [i_5])))) ? (arr_4 [i_1] [i_4]) : (~217))))));
                                var_22 = 20;
                            }
                        }
                    }
                    var_23 = ((((((!(0 | var_8))))) * ((734231205 ? 60 : 11842739360951007154))));
                }
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    var_24 = -19511;
                    var_25 ^= -3051321479126940420;
                }
            }
        }
    }
    var_26 -= var_6;
    #pragma endscop
}
