/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_11, var_5));
    var_21 = ((((min((18446744073709551615 & var_18), var_19))) ? var_3 : var_4));
    var_22 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((0 ? 18446744073709551615 : 4302893289275025455))) ? (472948456319824102 < 7974302217331270254) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = var_10;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 ^= (max((((!(((60003 ? 0 : -4890153342884090266)))))), (min(63018, 63018))));
        var_24 = 33;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_25 = ((((!((((-9223372036854775807 - 1) ? 20740 : 18446744073709551607))))) ? var_15 : var_12));
        var_26 = (min(0, 30993));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_13 [i_2 + 1] [18] [i_2 + 1] [i_2 + 1] = (!0);
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((((((arr_6 [i_4]) ? var_18 : var_12))) / (var_14 - 0)));
                }
            }
        }
        var_27 = (((11727153968195673037 | 0) < (((var_4 ? (255 >= 1) : var_3)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                {
                    var_28 = -1;
                    arr_21 [i_2 - 1] [i_2 - 1] [i_6] = 14206553709159671282;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_29 = ((116 - var_12) + 63018);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    var_30 = (178 - 60003);

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_31 = ((((18446744073709551614 ? var_8 : var_8)) | ((63 ? 15 : 1))));
                        arr_31 [i_7] [i_7] = var_3;
                    }
                }
            }
        }
        var_32 = ((-6294748486176912760 >> (0 == var_16)));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            {
                arr_38 [i_12] = ((1 ? -5014189904293729432 : 54410));
                var_33 = (((((((var_4 >> (var_4 - 1300770002669134160)))) ? var_5 : (8469628810956859692 && 11693764709424266445))) ^ (~var_16)));
            }
        }
    }
    #pragma endscop
}
