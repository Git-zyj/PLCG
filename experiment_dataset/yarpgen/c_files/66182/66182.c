/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = 293221347727004250;
        var_17 += 2407154132;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 |= var_2;
        arr_5 [15] = (3166407541769323190 != 1);
        var_19 = ((~(3166407541769323191 >= 3166407541769323190)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((((!var_12) ? var_6 : 2305843009213693951)))));
        arr_8 [i_2] [16] = 15280336531940228402;
        var_21 = ((3166407541769323180 ? (var_6 * 3166407541769323213) : 3166407541769323190));
        var_22 = (max(var_22, ((15280336531940228436 ? 4294967292 : 188))));
        var_23 = -0;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_24 = ((248 ? var_9 : 16483429860374993161));
                        arr_18 [i_6] [i_5] [i_5] [i_5] [i_3 + 1] = 0;
                    }
                }
            }
        }
        arr_19 [i_3 - 1] = ((var_12 > (156956979 ^ var_2)));
    }
    var_25 += ((((((((230 ? 7305757777346207973 : -25794))) ? (11140986296363343638 && 0) : 156956979))) ? 97 : 18));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] = ((((min(1073741824, (max(0, 105))))) ? ((((!(((9223372036854775807 ? var_13 : 18446744073709551615))))))) : ((var_10 | (max(1125899906842623, -28836))))));
                arr_28 [i_7] = ((((!11140986296363343638) & (11 + var_2))));
                arr_29 [i_7] [i_8 - 1] [i_7] = (max(66, 6176));
                arr_30 [i_7 + 3] [i_8] [i_7] = ((((min((min(var_2, 62)), var_8))) != (((8011411686618043304 != 16795) ? (4 >= var_7) : (10405590693516110818 || 18446181123756130304)))));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_26 ^= (!1026633271);
                    var_27 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
