/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 ^= (max(((((arr_5 [i_0] [i_0] [i_0] [6]) ? var_4 : (min((arr_3 [8] [1] [8]), (arr_6 [i_2] [i_1] [i_0] [i_0])))))), (((var_2 + 2824249671194539506) + (arr_5 [i_1 - 1] [i_1 + 1] [i_2 + 1] [0])))));
                    arr_7 [i_0] [i_0] = ((+(((var_2 / -114) % ((var_6 + (arr_4 [i_2 + 1] [i_0] [i_0] [i_0])))))));
                    arr_8 [i_0] [1] &= ((((~(max((arr_3 [i_2] [i_2] [8]), (arr_1 [i_0]))))) * ((((!(arr_6 [i_1 + 1] [i_2 + 1] [i_2] [i_2])))))));
                    var_13 = ((~(min(var_6, var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((max((max(-122328698, 127)), var_4)) > (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [4] [6] = (((arr_11 [i_0] [i_1] [i_0] [15]) ? 32767 : ((((!(arr_14 [i_0] [i_0] [i_0] [i_0]))) ? (var_8 || var_4) : (arr_4 [i_2 - 1] [i_0] [i_0] [i_1 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((~(min(var_1, (arr_9 [i_6] [i_6] [i_5] [i_5])))));
                var_15 = (((max((arr_0 [2] [i_6]), (arr_13 [i_5] [i_5] [12] [2] [i_5])))) <= (((var_9 ? -114 : 126))));
                arr_21 [i_6] = ((((((65535 ? 18080 : (arr_6 [5] [i_6] [5] [i_5]))) ? (~-97) : (arr_11 [i_5] [i_5] [4] [i_6])))));
            }
        }
    }
    var_16 = (max(((min(65514, (~var_10)))), (((~27538) | var_3))));
    var_17 = var_2;
    #pragma endscop
}
