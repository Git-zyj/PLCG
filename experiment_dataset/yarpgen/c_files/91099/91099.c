/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 86;
    var_15 = (max(-86, 28137));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, 24311));
        var_17 = (((min(83, (((86 >> (var_3 - 152)))))) > (((((max(83, (arr_0 [i_0])))) ? ((~(arr_0 [1]))) : ((8898650572969345979 ? 53112 : -21498)))))));
        arr_2 [i_0] [i_0] = (((min((1 ^ 0), (arr_0 [i_0]))) / ((((max(var_1, (arr_0 [i_0])))) ? (~0) : (((arr_1 [17]) ? 53 : var_1))))));
        var_18 -= (((min(((max((arr_0 [i_0]), 83))), (min((arr_1 [i_0]), var_11)))) % (((1 ? 63 : 1)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 -= ((!((min((arr_0 [i_1 - 2]), 27710)))));
                                arr_15 [i_1] [1] [i_2] [i_3] [i_2] [i_2] [i_5] = (max((min((arr_11 [i_1 + 1] [i_2 + 1] [i_2] [i_1 - 3]), (arr_11 [i_3] [i_2 - 1] [i_2] [i_1 - 2]))), ((((arr_11 [i_1] [i_2 - 1] [i_2] [i_1 - 4]) > (arr_11 [i_1] [i_2 - 1] [i_2] [i_1 + 1]))))));
                            }
                        }
                    }

                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_20 [i_1] [i_1] [2] [i_1] &= (8021 >> (((!((8507470727016149081 > (arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] [i_6])))))));
                        var_20 = (((85 - (var_2 | 0))));
                    }
                }
            }
        }
    }
    var_21 = ((((((64 && var_0) - (min(-8021, var_6))))) ? ((0 ? 1 : 9338471057261555081)) : 147));
    #pragma endscop
}
