/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(102, 13268849254829294995)) >= var_1)));
    var_16 = var_12;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((1 == (((min(0, 1))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_11 [i_0] [i_2] = 1;
                    arr_12 [i_0] [15] [i_2] = -28606;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_3] [1] = 18745;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_4] |= (2596854269 >= 0);
                        arr_21 [i_0] [i_1] = 0;
                        arr_22 [19] [i_1] [4] [6] = 249;
                        arr_23 [1] = (min((-16468819964064512194 * 0), ((((max(1, 1)) || (((0 >> (7908 - 7898)))))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_26 [i_5] = ((1977924109645039421 ? (+-25947) : (0 | 1)));
                        arr_27 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = 1977924109645039431;
                        arr_28 [i_5] [i_1] [i_1] [i_5] = ((236 ? 1 : (max(0, 16468819964064512194))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_32 [1] [i_1] [i_1] [i_5] [1] |= ((((max(6125, 88))) == -3812800270440724058));
                            arr_33 [1] [i_1] [1] [i_0] [18] = -1645393344;
                            arr_34 [i_0] [i_1] [i_3] [i_5] [9] [i_1] [i_5] = (max(1131549187, 18748));
                            arr_35 [18] [4] [16] [i_5] [i_5] [i_6] = (min((max(1977924109645039422, 1)), (((4294967287 ? 1 : 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
