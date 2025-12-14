/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = 0;
        arr_4 [i_0] = (max((arr_3 [i_0] [i_0]), (((min((arr_1 [3]), 4294967295))))));
        var_13 = -1331505401130589451;
        arr_5 [i_0] = 8268734727078581928;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = -100;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_15 [i_1] [i_2] [i_2] [i_2] = (arr_10 [i_1] [i_1] [i_1]);
                var_14 = var_10;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_15 = var_1;
                var_16 = (arr_2 [i_2]);
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((arr_22 [i_6] [i_5 - 2] [i_6] [i_5 - 2] [i_5 + 2]) ^ (arr_14 [i_6] [i_5] [12]))))));
                            var_18 = (((arr_21 [i_1] [i_2] [6] [i_6 + 1] [i_6] [6]) ? (arr_22 [i_1] [i_6 + 2] [i_4] [i_5 - 3] [i_6 + 2]) : (arr_6 [i_1])));
                        }
                    }
                }
                var_19 = (min(var_19, ((((arr_2 [i_1]) & var_0)))));
                arr_25 [i_4] [i_2] [i_2] = (arr_12 [i_1] [i_2] [i_4]);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_20 = -1331505401130589464;
                var_21 |= var_1;
                var_22 = min((((arr_2 [12]) / 29379)), (arr_18 [4] [i_1] [i_2] [i_2] [i_1] [4]));
            }
            var_23 |= ((max((arr_1 [i_2]), var_1)));
            var_24 = (arr_20 [12]);
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_25 = (((arr_28 [i_8]) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [9]) : 1331505401130589451));
            var_26 = (max(var_26, ((var_10 > (arr_11 [i_1])))));
            var_27 = 2147483635;
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            var_28 = (min(var_28, ((((((arr_10 [i_9] [i_9 + 2] [i_9]) >> (((arr_10 [1] [i_9 + 1] [i_9]) - 19008))))) || ((((arr_0 [i_9 + 2] [i_9 + 1]) % (arr_0 [i_9 + 2] [i_9 - 1]))))))));
            arr_34 [i_9] = 917504;
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_29 = (max((max((~2344650838448217706), var_3)), ((-(arr_30 [6] [6])))));
            var_30 = ((((16377232974284286361 > -100) - ((max(1669, 1))))));

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_46 [i_13] [i_12 + 1] [i_11] [i_10 + 2] [i_1] = (arr_21 [i_1] [i_1] [1] [i_12] [i_13] [i_11]);
                            var_31 |= (min((max(var_3, ((max((arr_6 [i_1]), 107035776))))), ((((((min((arr_32 [i_1] [0]), var_6)))) > 9223372036854775807)))));
                        }
                    }
                }
                var_32 = (29380 / 16377232974284286361);
                var_33 *= ((arr_36 [i_1] [i_1]) >= var_6);
            }
            var_34 = 2007174337;
        }
        var_35 ^= ((((((-1331505401130589464 + 9223372036854775807) << (14 - 14)))) ? ((((-13 != (arr_6 [i_1]))))) : var_8));
    }
    var_36 |= var_6;
    #pragma endscop
}
