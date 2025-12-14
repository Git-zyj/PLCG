/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (((9223372036854775807 << (1 - 1))));
        arr_3 [i_0] = (((!(-9223372036854775807 - 1))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_13 = -89;
        arr_7 [i_1 - 1] = (~1);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_14 = (max(var_14, 6745199715157936388));
            var_15 *= 1;
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_2] = 9223372036854775807;
            var_16 ^= ((1 << (-18250 + 18268)));
        }
        arr_17 [i_2] [i_2] = 1;
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (min((((~(~1)))), -20916));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_17 -= max(((max(204, 55005))), (0 ^ -1));
            var_18 = -3394186328314435500;
            arr_24 [i_6] [i_6] [i_5] = ((~(((min(1, -8796093022208))))));
        }
        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_19 = (min(var_19, (((((min(148270048, 14962212985459265713))) && 0)))));
                    var_20 = (max(var_20, 19518));
                }
                arr_33 [i_5] [i_5 - 1] = (-2147483647 - 1);
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                var_21 = ((44874 & (!1)));
                var_22 *= 1;
            }
            arr_36 [i_5] [i_7] = (!(~65));
            var_23 += ((min(2776, 62752)));
        }
    }
    var_24 = (min(var_24, ((((min(-13, 1)) << (3037645280 - 3037645238))))));
    var_25 |= ((((!7474599163216636124) >= ((min(-37, 1))))));
    var_26 |= 1;
    var_27 = (min(var_27, var_11));
    #pragma endscop
}
