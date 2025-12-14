/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (((3507 ? -var_1 : ((var_15 ? var_13 : var_4)))));
                var_17 = ((5 - 3498) + (4294967268 + var_3));
            }
        }
    }
    var_18 = (var_16 & var_2);
    var_19 = ((((((-27643 + 2147483647) >> (-1 + 24)))) ? var_15 : (min((((-3498 ? var_7 : 32743))), -26639))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (var_9 | var_5);
        arr_8 [i_2] [i_2] = var_6;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_17 [i_3] = min(((var_11 ? var_15 : var_11)), ((var_16 ? -26635 : 4126006923)));
            var_20 = ((var_5 ? 23880 : 32765));
            var_21 = ((-2544 < ((3471399444 ? var_1 : ((23782 ? -23883 : var_8))))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            arr_22 [i_3] [i_3] = 3176937662;

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_26 [i_3] [i_3] = var_13;
                var_22 = (min(var_22, var_14));
                var_23 = (((((545360913 ? 14833 : var_10))) ? ((var_9 ? 23886 : 3749606397)) : var_7));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_24 = (((min((var_6 | 32740), var_16))) ? (((((var_9 ? -1 : var_8))) ? -32752 : var_1)) : (min(-3498, ((16201 ? 4294967281 : 14833)))));
                var_25 = (min(3749606414, 1937728185));
                arr_29 [i_3] [i_5] [i_7] [i_7] = -3498;
                arr_30 [i_3] [i_3] = ((((1232754091 ? 4033086384 : 3749606404)) != 96));
                arr_31 [i_3] [i_3] = (min((((var_16 ? -3037 : -14844))), var_0));
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_34 [i_3] [i_3] = (((((23860 ? 3111429224 : 2252916761))) && (var_15 == 25865)));
            arr_35 [i_3] [1] = var_11;
            var_26 = (min(var_26, (((22197 >> (3055522104 - 3055522097))))));
        }
        arr_36 [i_3] = (min(var_4, ((min(3966379509, 4173930902)))));
        arr_37 [i_3] = var_4;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_40 [i_9] [10] = (16384 / (14852 & var_10));
        arr_41 [i_9] [i_9] = var_7;
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_27 = (-3904 + var_13);
        arr_46 [2] &= var_13;
        arr_47 [i_10] = (((-21664 & 575031443) ^ 8));
        arr_48 [i_10] = (min(((var_2 * (-32767 - 1))), (-16405 & -16364)));
    }
    #pragma endscop
}
