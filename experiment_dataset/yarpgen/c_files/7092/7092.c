/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = 0;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 ^= var_16;
            var_21 = ((~(var_12 * 0)));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_22 = var_8;
                arr_9 [i_0] [i_2] [i_2] = (((~-698482897) - (((arr_2 [1]) >> (20804 - 20798)))));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_23 = 7;
                arr_13 [i_0 + 2] [i_2] [i_4] = arr_2 [i_0];
            }
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    var_24 = var_11;
                    var_25 *= -1;
                    arr_19 [i_6] [i_2] = var_17;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_26 = (min(var_26, var_0));
                        var_27 = (arr_7 [i_0] [i_2] [i_2 - 2]);
                    }
                    var_28 = 9223372036854775807;
                }
                var_29 = (min(var_29, (((var_8 * (arr_7 [i_2] [i_0 + 1] [i_5]))))));
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                var_30 = (4 * 248);

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_31 = (arr_11 [i_9 + 1] [i_9 + 1] [i_2 + 1]);
                    arr_31 [i_9] [i_2] [i_9 + 4] [i_9] [i_10] = (~63050394783186944);
                    arr_32 [i_2] [i_0] [11] [i_2] = var_0;
                    arr_33 [i_2 + 2] [i_2] [i_0] [i_10] [i_2] [i_0] = -var_4;
                    var_32 |= (1 < 0);
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    var_33 = -var_10;
                    arr_36 [i_0 - 2] [i_2] [i_9] [i_2] [i_2] = (arr_8 [i_9 - 2]);
                    arr_37 [i_11] [i_11] [i_2] [i_2] [i_2] [1] = (3647310177 == 63050394783186944);

                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        arr_40 [i_2] [i_12 + 2] [i_0] [i_2] = -68719476735;
                        var_34 = (~2047450176);
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_35 = (2047450195 != 14);
                        var_36 = (min(var_36, ((((arr_35 [i_2 - 2] [i_11 - 2] [i_9 + 4] [i_2 - 2] [i_0 + 2] [i_0]) < 3012138813)))));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_37 = (max(var_37, (14 || -1331410421)));
                        arr_47 [i_2] [i_9 + 3] [i_9 + 3] [6] [i_2] = (((arr_38 [i_2]) || (arr_18 [i_0 + 1] [7] [i_9] [i_11] [i_14] [i_11])));
                        arr_48 [5] [i_2] [i_9] = (18058574367468289660 && 65535);
                        var_38 = ((1710279492 % ((-(arr_6 [i_0])))));
                    }
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        arr_51 [12] [i_11] [i_9] [i_2] [i_11] [i_0] |= (arr_17 [i_0] [i_2 - 2] [i_0] [i_15] [i_2 - 2]);
                        var_39 = (arr_18 [i_0] [i_15] [i_2] [i_15] [i_11] [i_11]);
                    }
                }
                for (int i_16 = 4; i_16 < 18;i_16 += 1)
                {

                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        var_40 = (arr_27 [i_0 + 1] [i_2] [i_17] [i_16 - 1]);
                        var_41 ^= (((arr_54 [i_17 + 2]) < ((~(arr_8 [i_0 - 1])))));
                        var_42 ^= (!49773);
                        var_43 = ((!(arr_43 [3] [i_16 + 1] [i_16] [i_16] [i_16])));
                        arr_56 [i_9] [i_9] [i_9] [i_2] = arr_35 [i_0 - 2] [i_2 + 2] [i_2 - 1] [i_16 + 1] [i_9 - 2] [i_2];
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        var_44 = (~-27405);
                        var_45 = (max(var_45, var_12));
                        arr_60 [i_2] [i_9] [i_0] [i_2] = (-124 % 1611767531591576220);
                        var_46 = (!-251970466);
                    }
                    var_47 = (224 & 2293450447);
                }
                arr_61 [i_9] [1] [i_2] [i_2] = (-var_10 * -124);
                arr_62 [i_2] = 248;
                arr_63 [i_0] [i_0] [i_2] [1] = (((arr_11 [i_9 + 1] [i_0 - 2] [i_9 + 1]) | var_6));
            }
            var_48 = 4246276939;
        }
    }
    #pragma endscop
}
