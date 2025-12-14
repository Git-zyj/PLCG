/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 = (min((((arr_6 [i_0] [i_0] [i_2] [i_3]) % (arr_6 [i_0] [i_0] [i_2] [i_3 - 3]))), ((((1 >> (var_16 - 2551939306))) ^ ((~(arr_5 [i_1] [i_1] [i_3])))))));
                        var_19 = ((arr_4 [i_0] [i_0] [i_0]) % (~1179301476));
                        var_20 = (!53393);
                        var_21 = (min(var_21, (arr_4 [i_0] [i_0] [i_1])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] |= var_2;
        var_22 = (((-32767 - 1) - (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_12 [i_0] = ((((((var_10 != var_11) ? 0 : (-115 - 7858121654624304402)))) ? (arr_3 [i_0]) : ((16554863709799245680 ? (arr_9 [i_0] [i_0] [2] [i_0] [i_0] [11]) : (arr_4 [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((~((((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) | (arr_14 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_23 = (min((((!(arr_18 [4])))), (min((arr_8 [i_4] [6]), ((min(var_11, -8975)))))));
                    var_24 = (max(var_24, (arr_5 [i_4] [i_4] [i_6])));
                }
            }
        }
        var_25 = 113;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_26 = (arr_0 [i_7]);
        var_27 |= (max(-1, 353026884));
        var_28 |= ((max((-93 & -1590668724), 1)));
        arr_22 [i_7] [i_7] = var_7;
    }
    var_29 = (((var_9 ^ -32754) >> ((((min(var_6, var_14))) - 11238))));
    #pragma endscop
}
