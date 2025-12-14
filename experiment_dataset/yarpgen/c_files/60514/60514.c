/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (min(var_14, (((var_12 / ((-(-678975358 ^ 8847545018732879259))))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((((!(arr_5 [i_0 - 1] [i_1 - 1])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = ((~(var_8 <= 2328668851164804097)));
                        arr_11 [i_0] [i_1] [i_2 - 2] [i_1] = (arr_3 [i_0] [i_1]);
                    }
                    arr_12 [i_0 - 3] [i_1] [i_2 - 1] = (arr_4 [i_0 + 2] [i_1 + 1] [i_2 + 2]);
                }
            }
        }

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_17 = ((+((var_12 ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 1] [i_0 + 2])))));
            var_18 = (min(((var_3 << (((((arr_4 [i_0 + 1] [i_0 + 1] [i_4]) ? 1033607799994501518 : 9599199054976672360)) - 1033607799994501465)))), (!var_6)));
            var_19 = (arr_16 [i_4] [i_4]);
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = ((9599199054976672360 > ((9599199054976672369 << (((arr_8 [i_5 + 3] [i_5 - 2] [i_5] [i_4 + 2] [i_0 - 2] [i_0 + 1]) + 117))))));
                            var_21 = (max(var_21, ((max((min((arr_21 [i_0 - 1] [i_5 + 3] [1]), (arr_7 [i_0 - 2] [i_0 - 2] [i_6]))), (arr_5 [i_4 + 4] [18]))))));
                            var_22 = (max(var_22, (((((!(22994 && 18))) ? ((((min(9599199054976672351, 4050318042)) <= 328))) : ((((((arr_16 [i_5] [i_5]) ? (arr_20 [i_0 + 3]) : (arr_20 [i_0]))) < (arr_15 [i_0])))))))));
                            arr_26 [i_5] [i_5 - 1] [i_6] [i_5] = (((arr_24 [i_0 + 3] [i_5] [i_5] [i_6] [15]) % (max(((5725497881665137214 ? var_7 : (arr_1 [i_0] [i_0 + 2]))), (arr_14 [i_0 + 1] [i_5 + 2])))));
                        }
                    }
                }
            }
        }
        arr_27 [i_0] [i_0 - 3] = (((arr_13 [i_0]) * (((arr_3 [i_0] [i_0]) / (((arr_4 [i_0 - 1] [i_0] [i_0]) / var_8))))));
        arr_28 [i_0] = (max(((-((-(arr_15 [6]))))), ((max((((!(arr_16 [i_0 - 2] [i_0])))), (arr_10 [7] [i_0] [i_0] [7]))))));
    }
    for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_31 [1] [i_8] = 2173237636347657611;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_36 [i_9] [i_10] [12] [i_9] = (max(18446744073709551615, (((arr_21 [i_8 + 3] [i_8 - 1] [i_8 - 2]) ^ (arr_21 [i_8 - 2] [i_8 + 3] [i_8])))));

                    for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_23 = (1543784879 && 328);
                        var_24 = (arr_33 [4] [i_9]);
                    }
                    for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_25 = ((!((max((arr_38 [i_8 - 1] [i_9 + 1]), (arr_41 [i_9] [i_9 - 1] [i_9 + 1] [i_8 - 2] [i_9]))))));
                        arr_42 [i_9] [i_9] [i_9] [i_12 - 1] [i_10] = ((~((-(arr_13 [i_9 + 1])))));
                    }
                    var_26 = -2173237636347657611;
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_47 [i_13] = -2173237636347657612;
        arr_48 [i_13] = ((~(((!(arr_29 [i_13 + 2] [i_13]))))));
    }
    var_27 = (min((max(var_3, var_3)), var_4));
    #pragma endscop
}
