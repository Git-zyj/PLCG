/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, ((3770647208 ? 157 : 837088954))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] [14] [i_2] [i_3] = ((837088954 ? ((621869380 | (21560 >= 8804977383523716838))) : (((!(arr_6 [i_1] [i_0]))))));
                        arr_12 [i_0] [i_2] [i_2] = ((!((max(-5476679012630373040, 2)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_4] = (max(((1 ? 144115188074807296 : 31716)), 6));
                        var_14 = 1;
                    }
                    arr_16 [4] [i_1] [4] |= -534044732972949998;
                }
            }
        }
    }
    var_15 = ((!(var_0 / var_12)));
    #pragma endscop
}
