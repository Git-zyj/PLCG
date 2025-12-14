/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = ((arr_6 [i_1 - 1] [i_2 + 1]) ? 2121965724 : (arr_6 [i_1 - 1] [i_2 + 1]));
                                var_18 = arr_6 [i_2] [i_1 + 1];
                            }
                        }
                    }
                    var_19 ^= (((((1637239086 ? 1 : 1))) ? var_16 : (arr_14 [i_0] [i_1] [i_2] [i_0] [i_1 + 1] [i_0])));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_22 [i_0] [i_1] [i_0] = (1 ^ -2147483643);
                    var_20 = ((-((((max(1, 1))) | (max(1, var_17))))));
                    arr_23 [i_0] [i_1] = (((1 > 1) <= var_3));
                    arr_24 [i_0] [i_0] = (min((((var_2 || 1) && ((min(var_9, (arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5])))))), (arr_18 [i_0] [i_0] [i_5])));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_5] [i_6] = min(var_17, (var_14 != var_2));
                        arr_28 [i_0] [i_1] [i_5] [i_6] = (-1410341505 - 1);
                        var_21 = (536870400 ^ 1);
                    }
                }
                arr_29 [i_0] [i_0] [i_1] = arr_16 [i_1] [i_0] [i_1];
                arr_30 [i_0] = (max(0, (~1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_22 = (min((((min(var_7, 1)) ? var_11 : (arr_13 [i_8]))), -109979751));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_44 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] = (((max(1497659584, 1))) && (arr_11 [i_9]));
                                var_23 = 146405190;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 4; i_12 < 14;i_12 += 1)
    {
        var_24 = (max(var_24, ((((665180782 ? 415776531 : -268435456)) != var_6))));
        var_25 = (var_0 ? -1035558798 : (var_1 < -1));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_26 = (!1);
        arr_50 [i_13] = ((((var_4 - (~var_14))) / (arr_6 [i_13] [i_13])));

        for (int i_14 = 3; i_14 < 10;i_14 += 1)
        {
            arr_54 [i_13] [i_13] [i_14] = (((((arr_37 [i_13]) ? 1 : (arr_26 [i_13] [i_13] [i_13])))) | ((1 ? ((((arr_51 [i_13] [i_13] [i_13]) != -836664393))) : -var_6)));
            var_27 = 1;
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_28 = (max(var_28, ((((-1947336229 / -1123971408) ? var_15 : (arr_55 [i_15]))))));
        var_29 -= max((min(-2006716910, var_9)), (((arr_57 [i_15]) ? (arr_57 [i_15]) : 146405190)));
        arr_58 [i_15] [i_15] = 1512971493;
        arr_59 [i_15] = (min(1, 146405190));
        var_30 = (max(var_30, ((min((min(1, (min(var_8, (arr_56 [i_15]))))), ((max((arr_56 [i_15]), (arr_56 [i_15])))))))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        arr_64 [i_16] = min(1, 0);

        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            var_31 = (arr_9 [i_16] [i_17 - 1] [1] [i_17]);
            arr_67 [i_17] [i_16] = (1 ^ 1);
            var_32 = ((var_11 ^ var_4) < (arr_6 [i_17 - 1] [i_17 - 1]));
        }
        var_33 = max(-1123971392, 719748610);
        var_34 = (min((((arr_0 [8] [8]) ? (1 || 1) : ((var_15 / (arr_20 [8] [i_16] [i_16]))))), ((min(1, 1)))));
    }
    var_35 = (max(var_35, var_16));
    #pragma endscop
}
