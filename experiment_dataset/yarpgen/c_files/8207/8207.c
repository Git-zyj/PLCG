/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((((((-14817 ? var_7 : var_17))) ? var_2 : (-14817 + var_3)))) ? ((((!-1086024105) + -28885))) : ((1062439158 ? 3232528144 : -695908736))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((-2587400010468309701 ? (((!(arr_2 [i_0] [i_0]))) : 2534723173))));
        arr_5 [i_0] = (((!2534723179) >= (((-1 ^ 4) ? ((((arr_3 [8]) - (arr_0 [i_0 + 1] [i_0])))) : (((arr_0 [i_0] [i_0]) ? -13 : 14896))))));
        var_19 -= ((-19283 ? ((~(((!(arr_1 [i_0 - 1])))))) : ((-(((arr_1 [9]) ? (arr_3 [3]) : (arr_2 [0] [i_0])))))));
        arr_6 [i_0] = (((((!var_6) ? (!var_10) : (-1086024099 | var_1))) / ((~((951661677 ? 6460 : var_15))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = (+-2587400010468309707);
        arr_11 [8] = ((-522953352220522631 + (2147483647 - 31)));
        arr_12 [i_1] = -21499;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = var_14;
        var_21 = 2200965031;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_19 [i_4] [i_2] [i_2] = ((!((((~-1) ? ((var_15 ? var_13 : var_0)) : var_9)))));
                    var_22 = 951661700;
                    arr_20 [i_2] [i_3] [i_3] = ((((((((~(arr_13 [11])))) ? 3949863247661809631 : -var_4))) || (arr_18 [i_2])));
                    var_23 += 951661677;
                    arr_21 [i_2] [i_2] [i_2] = ((-((-((-(arr_18 [i_2])))))));
                }
            }
        }
        arr_22 [i_2] [i_2] = ((-522953352220522631 ? -13209 : 2587400010468309700));
    }
    #pragma endscop
}
