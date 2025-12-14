/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= (((95 == 9389779561253880181) > (var_1 == 1290751705478442319)));
        var_19 = (+-91);
    }
    var_20 = (min(var_17, var_11));
    var_21 = ((~(((max(var_12, 1290751705478442319))))));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (((min(var_16, (((arr_4 [i_1] [i_2]) ? var_6 : var_9)))) | var_13));
            var_23 = var_10;
            arr_8 [i_1] [i_2] = ((-((((var_8 > (arr_7 [i_2]))) ? 1 : 32767))));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (min(var_24, (((max(var_7, ((~(arr_6 [i_1] [i_3] [i_3])))))))));
            arr_11 [i_1] &= 15836175575637792489;
            var_25 = ((33 == ((var_8 * (!var_4)))));
            arr_12 [i_1] [i_3] = ((((((38 ? var_4 : var_10))) != ((3038566789 ? var_10 : var_2)))) ? (min(1290751705478442319, -10)) : -1290751705478442345);
            arr_13 [i_1] = (arr_6 [i_1] [i_1] [i_3]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = ((-(arr_0 [i_4] [i_4])));
        var_26 = (!0);
        var_27 = (max(var_27, 1));
        var_28 += ((~(1 & 1)));
        arr_17 [i_4] [i_4] = var_6;
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_21 [i_5] [i_5] |= (23 ? 1290751705478442329 : 17155992368231109287);
        var_29 = (5 == 1);

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_30 = var_11;
            var_31 = (max(var_31, (1 + 1)));
            var_32 *= (((max((arr_22 [i_5] [i_6]), (max(1102880690256685006, var_0)))) * (((13486583891699067175 ? (-31 > 1) : (arr_15 [i_5]))))));
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_33 = var_11;
        var_34 = (min(var_34, (((max(20779, (max(var_5, 1)))) != ((((((-32746 * (arr_25 [i_7] [i_7]))) > var_6))))))));
    }
    var_35 = ((min(var_1, var_13)));
    #pragma endscop
}
