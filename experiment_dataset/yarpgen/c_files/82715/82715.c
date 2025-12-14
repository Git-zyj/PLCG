/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_11 = (min(((max(246, (arr_11 [i_1] [i_1] [i_2] [i_2 + 1])))), (max((arr_8 [i_0] [i_3] [i_1]), (max(var_2, var_3))))));
                        arr_15 [i_3] [i_1] [i_2] [i_1 - 1] [i_1] [i_0] = (min((min(0, var_0)), ((max(-127, 93)))));
                    }
                }
            }
        }
        var_12 = (min(var_12, (max((max(4427982099702678051, var_5)), ((max((arr_6 [i_0 - 1] [4]), (arr_6 [i_0 + 1] [0]))))))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_13 *= (max((max(12329337801909553376, (arr_17 [i_4 - 2] [i_4 + 1]))), ((max(var_3, 4294967295)))));
        var_14 *= (min((max((arr_17 [i_4] [i_4 - 3]), 4294967271)), ((max((arr_18 [i_4 - 3] [i_4 + 2]), (arr_18 [i_4 + 1] [i_4 - 2]))))));
        arr_20 [i_4] [i_4] = (max((max((arr_16 [i_4 - 3] [i_4 - 2]), var_4)), (max(20321, (arr_16 [i_4] [i_4 - 1])))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_15 = 6;
        var_16 *= 4294967242;
    }
    var_17 = (min(var_3, var_2));
    var_18 = max(var_7, var_4);
    var_19 ^= var_4;
    #pragma endscop
}
