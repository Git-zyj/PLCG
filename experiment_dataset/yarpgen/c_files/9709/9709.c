/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_8);
    var_14 = ((3400382641945773293 ? 1984683204 : (((var_6 ? var_4 : var_9)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = 73;
        var_16 = (min((arr_0 [i_0] [i_0]), (((!((min(174, 1))))))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_17 = (((((((max((arr_0 [i_0] [i_1]), (arr_1 [i_1])))) ? 0 : ((153 ? 23 : (arr_1 [i_1 - 2])))))) ? ((((max(var_12, 26))) ? ((max(65535, var_9))) : 2898)) : ((-((var_8 ? 15348745282098744398 : var_7))))));
            var_18 = (((arr_3 [i_0] [i_0] [i_0]) && (((-(min((arr_4 [i_1 + 1]), var_1)))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_19 = ((18782 || (arr_1 [i_2 + 4])));

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            var_20 = (((arr_1 [i_2]) + (arr_2 [14] [i_3 - 3] [i_3 - 3])));
            var_21 = ((((arr_3 [12] [i_3] [i_2]) ? var_11 : -125)) ^ 4294901739);
            var_22 = (39102 != 39);

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (((arr_13 [i_3] [i_3] [i_3] [i_3 - 2]) ? ((((arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 2]) >= 73))) : (arr_14 [i_2 + 4] [i_2 + 4] [i_4] [i_3 - 1])));
                    var_24 = (18446744073709551596 + 6102033164146865482);
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_25 -= (-1 <= 1);

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_26 |= -0;
                        var_27 = -var_8;
                        var_28 = (((~(arr_5 [i_4]))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, ((((((-1194844332 ? var_1 : var_12))) ? 18352 : (~18356))))));
                        var_30 = (min(var_30, (arr_22 [i_8] [i_2 + 1] [i_8] [i_2] [i_8] [i_6 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_31 = ((arr_22 [i_2] [i_2 + 3] [i_4] [i_2] [i_9] [i_2]) ? 14036403 : var_9);
                        var_32 = ((((((arr_12 [i_2] [i_2] [i_2] [i_2]) ? 244 : 6963))) && (arr_8 [i_2])));
                        var_33 = (max(var_33, (arr_9 [i_9])));
                        var_34 = (arr_7 [i_6]);
                    }
                }
                for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_35 = ((19300 ? 7077485774241457159 : (arr_22 [i_2] [i_2 + 4] [i_2 - 1] [i_2] [i_3 - 1] [i_10 + 1])));
                    var_36 += (-(((arr_25 [i_3 + 1] [i_3 + 1] [i_4] [3] [i_4]) ? 15522961565490879111 : var_4)));
                }
                var_37 ^= (((arr_15 [i_3 - 3] [i_2 + 1]) ? (~var_2) : (arr_12 [i_2] [i_2 + 1] [i_4] [i_3 - 3])));
                var_38 = ((((((arr_8 [i_2]) % var_3))) ? (arr_24 [6] [i_3] [i_4] [i_4] [i_4]) : (arr_25 [i_4] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 + 2])));
                var_39 |= (arr_20 [11] [i_3] [i_4] [i_3] [i_2] [i_3 - 1] [i_3 - 3]);
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_40 = (max(var_40, ((((arr_7 [i_2]) < ((26443 ? 3072 : 37735)))))));
                var_41 = (max(var_41, (((var_4 < (arr_6 [i_2 - 1]))))));
                var_42 = var_8;
                var_43 = ((-(~18351)));
            }
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_44 = ((-(arr_13 [i_2 + 2] [i_12 + 1] [i_12 + 1] [i_12 - 2])));
            var_45 = (arr_13 [i_2] [i_2] [i_2] [i_12 + 1]);
            var_46 &= (((-(arr_32 [i_2 + 1] [12] [i_12 - 1]))) <= (((1656111517 ? 143788756 : 0))));
            var_47 = (max(var_47, ((((arr_0 [i_12 - 2] [i_2 - 1]) ? (arr_6 [2]) : (arr_6 [i_12 + 1]))))));
        }
    }
    var_48 = (max((((((max(65528, 127))) >= (var_0 && var_2)))), (min(var_10, var_1))));
    #pragma endscop
}
