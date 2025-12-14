/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(((min(var_1, (arr_3 [i_0])))), ((min(52, -23)))));
                arr_4 [22] [i_1] [i_1] = (((-23 - 1) ^ var_9));
                arr_5 [i_1] = -6618;
                var_14 = ((arr_2 [i_0] [i_1] [i_1 + 2]) > ((min((arr_2 [i_0] [i_1] [i_1 + 2]), (arr_2 [i_0] [i_1] [i_1 - 1])))));
                arr_6 [i_0] [i_1] = (arr_2 [i_1] [i_1] [i_1]);
            }
        }
    }
    var_15 += var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_16 += (arr_1 [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((max((max((((arr_0 [i_2]) ? 61 : (arr_8 [11]))), 23)), (max((arr_17 [i_5] [i_4] [0] [i_3] [i_2] [10]), var_7)))))));
                            var_18 = ((((~(min(var_8, 0)))) >> ((((2352128087 << (2110540063 - 2110540044))) - 45613024))));
                            var_19 = ((~((((((31394 + (arr_11 [i_2])))) && (max(1, (arr_11 [i_2]))))))));
                        }
                    }
                }
                arr_18 [i_2] [12] = (max(-66, 70));
                var_20 = (~98);
            }
        }
    }
    var_21 -= (((((var_8 - ((-56 ? var_8 : 0))))) ? 3943643966 : var_3));
    #pragma endscop
}
