/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = ((((max((arr_2 [i_3]), (arr_1 [i_2 - 2] [i_4 - 2])))) ? ((4118060936 - (arr_6 [i_4 - 1] [i_1 - 1] [i_2 - 2] [i_4 - 1]))) : (arr_2 [i_4 + 1])));
                                var_13 = (arr_9 [0] [i_2 - 1] [i_2] [i_3] [i_2 - 1] [i_4 - 2] [i_2 + 1]);
                                arr_11 [i_0] [16] [i_4] [5] [i_3] [i_4 - 3] = max((arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (((arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1]) : (arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1 + 3] [2] [i_1] = (((((((22749 ? (arr_8 [i_4 - 3] [4] [4]) : (arr_10 [i_0] [i_0] [0] [i_0] [i_4])))) ? (arr_3 [i_1] [i_2 + 1] [8]) : (((arr_3 [i_2] [i_2] [i_4]) ? (arr_7 [i_0] [i_1 + 1] [i_2 - 2] [14]) : 176906360)))) > ((((((max(-23847, (arr_3 [1] [i_3] [4])))) >= ((23825 ? (arr_3 [4] [i_1 + 2] [4]) : (arr_8 [i_0] [i_0] [i_0])))))))));
                                var_14 = ((((max((arr_7 [0] [i_3] [i_1] [i_0]), 3160039630))) ? (min(23846, ((-(arr_9 [4] [14] [14] [8] [i_3] [i_3] [i_4]))))) : (arr_6 [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_15 = -1;
                    arr_15 [16] [i_1 + 3] [7] = ((-16 ? (arr_6 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3]) : (arr_6 [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1])));
                }
            }
        }
    }
    var_16 = ((var_6 == ((2182861396 ? -23847 : var_7))));
    #pragma endscop
}
