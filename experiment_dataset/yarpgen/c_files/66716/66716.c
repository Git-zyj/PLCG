/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((+(max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), var_3))));
        arr_3 [i_0] [i_0 - 1] = (1 < 8869);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_10 = (min(var_10, var_8));
        arr_6 [14] &= min(62876, (min((arr_4 [i_1]), 22)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_11 = (min(var_11, ((max((((!(arr_5 [i_3])))), (~8869))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_12 *= (!((max((min(1, var_3)), 8880))));
                                arr_18 [i_2] [i_4] [i_3] [i_1] [i_2] = ((-(arr_12 [10] [i_2] [i_3] [i_5 - 3] [i_5 - 3] [i_3])));
                            }
                        }
                    }
                    var_13 = (max((arr_11 [i_1] [i_1] [i_1]), (arr_8 [1] [18] [i_2])));
                    var_14 = (i_2 % 2 == zero) ? ((min((min(var_5, (arr_8 [i_3] [1] [i_2]))), (min(0, (((62192 << (((arr_15 [i_2]) - 10690)))))))))) : ((min((min(var_5, (arr_8 [i_3] [1] [i_2]))), (min(0, (((62192 << (((((((arr_15 [i_2]) - 10690)) + 9164)) - 13))))))))));
                }
            }
        }
        arr_19 [i_1] = (arr_15 [1]);
    }
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_6 + 1] = (((arr_7 [i_7 + 1] [i_7 + 1]) ? (min((arr_7 [i_7 - 1] [i_7 + 1]), var_1)) : (((min(var_8, (arr_7 [i_7 + 1] [i_7 - 1])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            arr_32 [i_9] = (((((((min(var_3, (arr_11 [1] [i_6] [i_6])))) < (max((arr_21 [i_9 + 1]), 1152921504606846960))))) + (21 < -8857)));
                            var_16 = (max(var_16, (((-var_7 ? (((8869 ? 8869 : 55068))) : ((1 % (arr_24 [i_9 + 1] [i_9 + 1] [i_6 + 2]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
