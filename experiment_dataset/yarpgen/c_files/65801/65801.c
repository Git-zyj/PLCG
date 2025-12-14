/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 37607;
        var_18 = (max(var_18, ((((50086 == var_12) == (min(-136383529, (arr_0 [2] [2]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_1;
                    arr_9 [i_2 - 2] [i_0] [i_0] [i_0] = 2127534662;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_19 = (min(var_19, (((~(arr_12 [i_3 + 2]))))));
        var_20 = (max(var_20, (arr_1 [i_3])));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_21 = (min(((((var_6 ? var_16 : -17559)) ^ 46449)), (((var_11 ^ var_16) ? ((var_5 ? -136383517 : (arr_13 [i_4] [i_4]))) : var_9))));
        arr_15 [i_4] [i_4] = (min((arr_14 [i_4] [i_4]), ((min((((var_13 == (arr_14 [i_4] [i_4])))), ((var_12 >> (var_5 - 7746))))))));
    }
    var_22 = (min((((((4095 ? var_7 : -17559))) ? 1479513367 : -120)), (((var_1 == var_8) >> (((136 ^ 127) - 218))))));
    var_23 = (((((!((min(-17, -136383534)))))) >> (((((var_12 == var_15) ? ((var_6 ? var_1 : var_5)) : (((max(var_17, var_6)))))) - 656))));
    var_24 = (((((((136383525 ? 6772 : 0))) ? (!16384) : var_6)) >> (2415933678 - 2415933661)));
    var_25 ^= ((~(((var_16 >> (3107868655 - 3107868642))))));
    #pragma endscop
}
