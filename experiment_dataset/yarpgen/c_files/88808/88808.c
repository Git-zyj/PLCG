/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_2 + 9223372036854775807) << ((((var_9 ? (353428491 ^ var_7) : ((max(var_8, 76))))) - 353420515))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (max(((max((min(3941538805, 1879048192)), var_8))), ((102 ? (!91) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_2 + 1] [i_1] [i_0] = ((!var_8) & (var_2 >= var_5));
                        var_13 = (arr_11 [15] [i_2] [i_2] [i_2] [i_2] [14]);
                    }
                }
            }
        }
        var_14 = ((((((arr_10 [i_0] [i_0]) ? (arr_10 [i_0] [i_0]) : 7373))) - (((arr_2 [i_0]) - (min(-7020617151636317647, var_11))))));
        arr_15 [i_0] [i_0] = ((((max((arr_10 [i_0] [i_0]), (arr_10 [i_0] [i_0])))) ? (((((var_1 ? 30 : 2415919104))) ? ((var_6 ? var_3 : 63)) : (((((arr_6 [i_0] [i_0] [i_0]) == var_10)))))) : ((max(((min((arr_9 [i_0] [i_0] [i_0] [i_0]), var_5))), (((arr_10 [3] [3]) << (((arr_6 [i_0] [i_0] [i_0]) - 135)))))))));
        var_15 = 1;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((arr_16 [2] [1]) % var_9)))));
        var_17 = (((arr_16 [i_4] [1]) << (32752 - 32750)));
        var_18 = (((arr_16 [i_4] [i_4 + 1]) ? -32764 : (arr_16 [i_4] [i_4 - 1])));
    }
    for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (((~(var_3 | 535822336))));
        arr_21 [i_5] &= var_8;
        var_19 = (min(var_19, (arr_17 [2] [2])));
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = (arr_12 [15] [i_6] [i_6] [i_6] [i_6] [i_6]);
        var_20 = (max(var_20, ((((-44 > -32764) ? 2109933165 : (((((arr_22 [i_6 + 2]) > (arr_22 [i_6 - 2]))))))))));
    }
    var_21 = var_9;
    #pragma endscop
}
