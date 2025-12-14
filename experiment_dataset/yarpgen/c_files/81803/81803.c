/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~18014398509481983);
    var_13 = (min(var_13, ((((max((max(var_7, var_8)), (!65526))) >> ((((((max(1, 59974))) ? (max(63, var_2)) : ((192 ? 59969 : var_8)))) - 433443270)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                var_14 = (max(var_14, (((((max((max(var_7, var_9)), (~var_2)))) ? ((-(~527242696))) : (max(249, 38459)))))));
                                arr_15 [10] [i_3] [i_3] [i_1] [11] = (((max(var_10, (arr_13 [i_1 + 1] [i_1 + 1] [i_4 + 1])))));
                                var_15 = (max(var_15, (arr_10 [i_2] [i_2] [i_2])));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                var_16 = ((var_8 || ((max(-1759048008, 1)))));
                                var_17 = (min(var_17, (((var_11 ? var_9 : (arr_13 [i_1] [i_1 - 1] [i_1]))))));
                                var_18 = (max(var_18, ((((+-9798) ? (max(9785, (var_8 * 1))) : ((var_7 / ((var_3 ^ (arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5]))))))))));
                            }
                            for (int i_6 = 1; i_6 < 20;i_6 += 1)
                            {
                                var_19 = (var_0 == var_1);
                                arr_23 [i_3] = (-((max(var_10, (min(191, var_8))))));
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                var_20 += ((~(((!(arr_13 [i_1 - 1] [i_3 - 1] [i_7 - 1]))))));
                                var_21 = (+-2147483631);
                                arr_28 [i_0] [i_3] [10] [i_3 + 1] [i_7 - 1] = 1;
                                var_22 = (max(var_22, ((((arr_24 [i_7 - 1]) ? (arr_24 [i_7 - 1]) : 225)))));
                            }

                            for (int i_8 = 2; i_8 < 21;i_8 += 1)
                            {
                                arr_31 [19] [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_3] = (((max((((arr_17 [i_0] [i_0] [19] [i_0] [i_0] [i_0]) ? 36 : var_9)), 41024))) ? (((((255 != var_6) >= -5448111882109254609)))) : (var_5 - 59968));
                                arr_32 [i_8] [i_3] [i_2] [i_3] [i_0] = (((((-var_0 ? (max(var_7, var_7)) : (arr_7 [i_1 + 1] [i_1 - 1])))) + (min((arr_19 [i_3] [i_1] [i_2] [i_3] [11] [i_3 + 1] [i_3]), var_8))));
                            }
                            for (int i_9 = 2; i_9 < 21;i_9 += 1)
                            {
                                var_23 = (((((max(var_7, var_10)))) ? (min((min(131071, var_6)), (((var_3 ? var_0 : 67106816))))) : (!var_11)));
                                var_24 = (min(var_24, (max(1346807494, var_8))));
                                arr_35 [i_9 + 2] [i_3] [i_2] [i_3] [i_0] = (max(((max((((arr_27 [i_3] [i_9] [i_9] [i_3] [i_2] [7] [i_3]) != (arr_29 [i_0] [i_0] [i_2] [i_3]))), var_1))), (((((var_11 ? var_0 : -131072))) ? (!263685932) : -var_1))));
                                var_25 &= (!var_4);
                            }
                            arr_36 [i_3] [i_3] = (max((!var_10), (!var_11)));
                            var_26 ^= (((-var_10 ? ((min(var_10, 1))) : (arr_22 [i_2] [i_3 + 1] [i_2] [i_3] [i_1 + 1]))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_27 = ((max(var_7, 8192)));
                                var_28 = arr_5 [i_12] [i_11];
                                var_29 = ((-(((var_10 - var_2) ? ((max(var_2, 19))) : 5629904676985696487))));
                                arr_45 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((-(!var_1)));
    var_31 = var_3;
    #pragma endscop
}
