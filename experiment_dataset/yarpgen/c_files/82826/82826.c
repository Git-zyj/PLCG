/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_8 [i_0] [i_3] [i_2] [i_3] = (min(1, ((var_0 >= (arr_3 [i_0] [i_1] [0])))));

                        for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, ((min(((~(arr_11 [i_2 - 1] [i_1] [i_2]))), ((((arr_3 [i_2] [i_2] [i_2 - 1]) | 1))))))));
                            var_16 = (((((((max((arr_2 [i_0] [i_0] [i_0]), (arr_10 [9] [i_2 - 1] [12] [i_3] [9])))) ? (arr_3 [i_0] [i_3] [i_4]) : ((min(182, (arr_1 [i_3]))))))) ? ((1 | (arr_3 [i_2] [i_2 - 1] [i_4]))) : 1));
                            var_17 = arr_7 [i_0] [i_1] [i_2] [i_3];
                            arr_12 [i_3] [i_2] [i_3] [i_4] = ((((!(arr_4 [i_2 - 1])))) >> (((min((arr_4 [i_2 - 1]), (arr_4 [i_2 - 1]))) - 413107438)));
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_2] [8] = (min(((1 ^ (max((arr_9 [i_0] [i_1] [4] [i_0] [i_4]), (arr_10 [13] [i_1] [i_1] [i_3] [i_1]))))), 1));
                        }
                        for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_18 = (((arr_14 [i_3]) * (((arr_14 [i_3]) ? ((min(1, 0))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [7] [i_3] [i_5])))));
                            arr_17 [i_5] [i_5] [i_3] [i_5] [i_5] = ((((((((arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_1]) ? 183 : 1)) * ((min(var_10, (arr_9 [i_0] [2] [2] [2] [i_5]))))))) ? (min(2074, (min((-32767 - 1), (arr_16 [6] [i_0] [i_0] [i_1] [i_2] [i_3] [6]))))) : ((min(((min(-65832087, 63462))), (arr_3 [i_0] [i_2 - 1] [i_5]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((((((arr_15 [i_0] [i_0] [i_2] [i_6 - 1] [i_6 - 1]) + (arr_11 [i_0] [i_1] [i_6])))) ? (arr_4 [i_6 - 1]) : ((29791 ? (arr_0 [i_1] [13]) : var_1)))))));
                        var_20 = (134209536 % 684600773);
                        arr_20 [i_0] [i_1] [9] [i_6 - 1] = arr_3 [i_6] [i_6 - 1] [i_6];
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_7] [i_1] [i_7] = (((((((!(arr_1 [i_7]))))) == (((arr_18 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_7 - 1]) ? (arr_5 [i_0]) : 2646698131)))) ? ((((arr_16 [12] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1]) == (min(-367609653, 6315197017457882289))))) : (min(((min((arr_7 [i_0] [3] [3] [i_0]), (arr_2 [4] [i_2] [11])))), (((arr_22 [i_0] [i_0] [i_1] [i_2] [i_7]) ? (arr_2 [4] [i_1] [4]) : (arr_7 [i_7 - 1] [i_0] [i_1] [i_0]))))));

                        for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_7] [i_8 - 1] [i_8] = (max((max((arr_27 [i_2] [i_2 - 1] [i_2]), -121)), ((((arr_11 [i_2] [i_2 - 1] [i_2 - 1]) < (arr_11 [i_2] [i_2 - 1] [i_2 - 1]))))));
                            var_21 = ((+((-367609658 ? (arr_27 [i_2] [i_2 - 1] [i_2]) : (arr_27 [i_2] [i_2 - 1] [13])))));
                        }
                        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_22 = 11;
                            var_23 = (arr_25 [i_0] [i_0] [i_0] [i_0] [5] [i_0]);
                            var_24 = (min(var_24, ((((((65535 ? 1 : 1))) ? (arr_28 [i_0] [i_1] [i_2] [i_9 + 2] [i_0]) : (((arr_6 [i_0] [i_7 - 1] [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_9]) : (18446744073709551615 > -55))))))));
                        }
                        var_25 = ((var_10 > ((((arr_5 [i_7 - 1]) != (min((arr_19 [i_7]), -398462679215965094)))))));
                    }
                    var_26 = ((((((~(arr_23 [i_0] [i_0] [i_0] [i_0])))) ? (~1) : (~0))));
                }
            }
        }
    }
    var_27 *= ((+((var_12 ? (~32767) : (-134209543 * 11262063553506278387)))));
    var_28 = var_7;
    var_29 = var_3;
    #pragma endscop
}
