/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = var_10;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_13 = (((((-(arr_3 [i_1 + 1] [i_1 - 3])))) ? (1556257221 > 2138547597) : ((1556257201 >> (((var_7 - 2138547603) + 601147926))))));
            var_14 = -3289160105;
            var_15 = 11856;
            var_16 ^= (min((((arr_4 [i_0] [i_1] [i_0]) % (arr_5 [i_0] [i_0] [i_0]))), (max(var_0, (arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 3])))));
            var_17 = (~17139483838268521230);
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_18 = ((-24986 && (15395454639703166668 & var_0)));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_19 = (1 / var_7);

                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_18 [i_2] [i_2] [22] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_2] &= 2138547614;
                        var_20 = (~var_11);
                        var_21 = ((1675285431 ? 0 : ((345689681 ? -7575167709138646442 : 345689681))));
                        var_22 = ((arr_15 [i_2] [i_3] [i_3] [i_5] [i_5]) > var_3);
                        arr_19 [i_2] [i_2] [i_4] [i_5] [i_3] = (arr_5 [i_2] [i_3] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_23 = (max(var_23, (((-var_7 % (var_2 > var_10))))));
                        var_24 = ((var_11 ? 1 : -683337688));
                    }
                    var_25 = var_9;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_26 ^= 4;
                    var_27 = (arr_24 [i_2] [0] [i_4 - 3] [14]);
                    var_28 = ((1 ? (1991154555 && 1991154553) : (arr_13 [i_4 - 2] [i_4 - 3] [i_4 + 1] [i_4])));
                }
                arr_26 [i_2] [i_3] [i_2] [i_4 + 1] = 1;
                arr_27 [i_3] = ((!(((-(arr_3 [i_2] [i_2]))))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 = var_0;
                var_30 = (2754823184 == -763482194);
                var_31 = ((-1209 ? 3319048487028866967 : (~-32746)));
            }
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                var_32 = (!1);
                var_33 += ((795586987 ? 161 : 22146));
            }
            var_34 = -2124661377;
            var_35 = ((((var_0 ? 2478705252364036646 : var_10)) != 1));
        }
        var_36 = var_10;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] [i_11] = (((arr_30 [i_11] [i_11] [i_11] [i_11]) ? var_4 : -79));
        var_37 = ((20 ? (arr_5 [i_11] [i_11] [i_11]) : 1540144103));
        var_38 = ((+((var_0 ? (arr_8 [i_11] [9] [i_11]) : (arr_1 [i_11])))));

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_39 = (min(var_39, var_4));
            var_40 = ((var_9 ^ (arr_31 [i_11] [i_11] [i_11])));
            var_41 = (min(var_41, (!33454)));
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_42 = (((arr_5 [i_11] [i_11] [i_11]) == var_4));
            var_43 = (arr_13 [i_11] [i_11] [i_11] [i_11]);
        }
    }
    var_44 = (((!-1884929065271291366) ? (((var_10 >> (var_7 <= var_5)))) : ((((var_1 ? 4377788678252034779 : 32081)) / ((min(394482032, 1991154567)))))));
    var_45 += (min(3735886730204673157, var_0));
    var_46 += 251;
    var_47 = (max(var_47, ((((min(1, (min(-36, var_6)))) / var_7)))));
    #pragma endscop
}
