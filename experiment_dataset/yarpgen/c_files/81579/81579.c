/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_0 + 1]);

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (max(var_14, (((~(((arr_2 [i_0 + 1] [i_1 - 3]) ? var_1 : (arr_2 [i_0 + 3] [i_1 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_4] [8] = (((~106) & 0));
                                var_15 = (i_1 % 2 == 0) ? ((((((((arr_5 [i_1] [i_2] [i_1]) || (arr_8 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3])))) * ((((arr_2 [i_0] [i_0]) && 16446))))) >> (((max(var_3, (arr_5 [i_1] [i_1 - 1] [i_1]))) - 2664859277)))) : ((((((((arr_5 [i_1] [i_2] [i_1]) || (arr_8 [i_0] [i_1 - 3] [i_2] [i_0] [i_1 - 3])))) * ((((arr_2 [i_0] [i_0]) && 16446))))) >> (((((max(var_3, (arr_5 [i_1] [i_1 - 1] [i_1]))) - 2664859277)) + 1140296985))));
                                var_16 = (max(var_16, ((max((((-1 != (16446 - 27376)))), (arr_8 [5] [i_3] [i_2] [12] [12]))))));
                                var_17 = (((arr_4 [i_3]) ? ((~(arr_11 [i_3]))) : ((max((arr_11 [i_0]), 16384)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((min(1, (var_1 % var_6))) & (((var_0 << (var_2 + 73)))));
    var_19 += var_9;
    #pragma endscop
}
