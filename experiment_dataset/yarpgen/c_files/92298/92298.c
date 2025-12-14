/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (max(-647799959, 4294967269));
            arr_7 [i_0] = (arr_0 [i_0] [i_1]);
            var_13 = (min((-1796591468 || 3970305894), (324661406 <= -13)));
            var_14 -= (((((max((arr_0 [i_0] [i_0]), (arr_2 [2] [14]))) == 324661384))) >> (((max((572912840 & 127), 98)) - 77)));
            var_15 = (arr_3 [i_0]);
        }
        var_16 ^= -647799970;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = (max(var_17, ((((arr_2 [i_2] [i_2]) <= (arr_1 [i_2]))))));

        for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_18 ^= arr_11 [i_2] [0] [i_3];

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_19 += (((arr_4 [i_3] [i_3 + 1] [i_3]) << (-29 - 4294967249)));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_20 = (min(var_20, (arr_1 [i_3 - 1])));
                    var_21 |= (-(((arr_14 [i_2] [i_3 - 1]) / 9)));
                    arr_17 [i_2] [i_3] [i_3] [i_3] [i_5] = ((arr_8 [i_3 - 1]) >= (arr_8 [i_3 - 2]));
                }
                var_22 = (max(var_22, (arr_0 [i_3 - 3] [i_3 - 1])));
                var_23 = 4294967295;
                var_24 = -13;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_25 &= ((4294967295 - 4294967295) * (arr_19 [4] [i_3 - 2] [i_6]));
                arr_20 [i_2] [i_3] [i_6] = -1;
                var_26 *= (162988198 + 572912820);
                var_27 += (((((((arr_15 [i_6]) < (arr_15 [i_2]))))) <= (1966845172 & 162988177)));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_28 = (min(var_28, (((-(arr_14 [i_3 + 1] [i_3]))))));
                var_29 -= 1409222581;
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_30 += ((19409 % (arr_25 [i_2] [i_2] [i_2])));
                var_31 = (max(var_31, (arr_9 [i_3])));
                arr_26 [i_2] [i_2] [i_3] [i_8] = (((-1399026575 >= (arr_11 [i_8] [i_3] [i_2]))));

                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_32 = (max(var_32, (arr_5 [8])));
                    arr_30 [i_2] [i_3] [i_8] [i_9] = (((arr_28 [i_2] [7] [1] [i_2]) ? (arr_0 [12] [12]) : ((162988176 ^ (arr_23 [10] [i_8] [1])))));
                    var_33 = ((arr_24 [i_3]) || ((-163681173 <= (arr_23 [i_2] [i_3] [i_2]))));
                    var_34 = (arr_1 [i_2]);
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_34 [i_2] |= 56;
                    var_35 ^= (((arr_2 [i_3 - 2] [i_2]) % (arr_2 [i_3 + 1] [i_2])));
                }
                var_36 = ((((-98 >= (arr_14 [i_8] [i_2])))) | (arr_31 [i_8] [i_3 + 1] [i_3 + 1] [i_3 - 1] [3] [i_2]));
            }
        }
        for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
        {
            var_37 += (arr_25 [i_2] [i_2] [i_11 - 1]);

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_38 += ((46125 < (arr_16 [i_12] [i_2] [i_2] [i_2])));
                var_39 = (min(var_39, (arr_9 [i_11 - 2])));
                var_40 = 162988190;
                var_41 = (((arr_24 [i_11]) ? (arr_24 [i_11]) : (arr_24 [i_11])));
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        arr_42 [i_13] = (arr_40 [i_13] [i_13]);
        arr_43 [i_13] = 1409222558;
        var_42 = (((arr_40 [i_13] [1]) & (arr_40 [i_13] [i_13])));
        var_43 = (min(var_43, ((((162988181 ^ 0) ? 2797669313 : (117 > -1))))));
    }
    var_44 = (var_7 + (var_5 || var_7));
    #pragma endscop
}
