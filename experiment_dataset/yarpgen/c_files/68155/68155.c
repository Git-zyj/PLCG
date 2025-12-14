/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((!(arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 39));
                                var_14 ^= (min(485045511, ((~((0 ? 65535 : 147))))));
                            }
                        }
                    }
                    var_15 = var_0;
                    arr_13 [i_0] [8] &= ((((((var_9 <= (arr_11 [8] [6] [i_1] [18] [8])))) | (min((arr_8 [22]), (arr_11 [i_0] [i_0] [16] [i_1] [18]))))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_16 = (max(var_0, ((max(-3880434124208802588, (!var_8))))));
                                var_17 += ((((((max((arr_20 [4] [i_5] [i_5] [i_5] [i_0]), 230))) + ((0 ? 8 : -3880434124208802585)))) ^ ((((arr_20 [i_7 + 2] [i_5] [i_5] [i_5] [i_0]) ^ (arr_7 [i_1] [i_5] [i_6]))))));
                                arr_22 [2] [i_1] [i_5] [i_1] [i_7] &= (max(((((arr_1 [i_5]) ^ (arr_6 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 + 2])))), (max((((!(arr_16 [i_0] [i_5] [i_5])))), 287104476244869120))));
                            }
                        }
                    }
                }
                var_18 = ((max(((-995801845033875285 ? var_1 : var_2)), 3880434124208802588)));
            }
        }
    }
    var_19 = (min(var_19, (((+((var_6 ? (33 * var_6) : var_9)))))));
    var_20 = ((!(((((min(10459313567345340763, -32))) ? (max(var_4, -1)) : (~109))))));
    #pragma endscop
}
