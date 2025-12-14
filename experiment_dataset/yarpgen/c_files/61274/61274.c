/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = arr_4 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = ((127 ? (arr_10 [i_0] [i_1] [1] [i_0] [i_0] [i_0] [1]) : ((((arr_10 [7] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0]) == -391957959)))));
                                var_16 = 32767;
                                arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = (((max(9223372036854775807, 31)) >= var_9));
                                var_17 &= (var_8 || var_6);
                            }
                        }
                    }
                    arr_14 [i_1] = (max((max(((((arr_4 [i_2] [i_2] [i_2]) && 3932531538))), (max((arr_10 [i_0] [i_1] [i_0] [i_0] [7] [i_0] [2]), var_2)))), ((((arr_8 [0] [0] [0] [i_2]) < 3932531538)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (arr_12 [i_1] [i_1] [i_1] [i_1]);
                                arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [2] [i_6] = ((~(((var_2 != (arr_0 [i_5]))))));
                                var_19 = ((!((((var_8 + var_2) + (arr_9 [i_5] [i_5]))))));
                            }
                        }
                    }
                    var_20 ^= (~(((var_10 ^ 724176241379318478) | 32767)));
                }
            }
        }
    }
    var_21 = 1568926514;
    #pragma endscop
}
