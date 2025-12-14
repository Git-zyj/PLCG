/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (max((arr_5 [i_0]), (min(var_3, (arr_4 [i_0] [i_1] [i_2] [i_3])))));
                            arr_10 [i_0] [6] [i_0] [i_0] = ((-(((arr_1 [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0])))));
                            var_20 |= ((~((((((arr_1 [i_1] [12]) ? -5923837442642821470 : (arr_6 [i_0] [i_0] [i_0])))) ? (!4426034229382121661) : (max(var_16, var_17))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_4] [i_5] = (((((+(((arr_6 [i_4] [i_0] [i_0]) ^ (arr_12 [i_0] [i_1] [i_4])))))) ? ((~(((!(arr_14 [i_0] [i_0] [i_0])))))) : var_7));
                            var_21 &= ((((((-(arr_17 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5])))) <= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 973342518)))) ? (((arr_5 [i_1]) ? (arr_13 [i_4] [i_5]) : (arr_18 [i_0] [i_1] [i_4] [i_1] [i_5] [i_5]))) : (arr_7 [i_1] [i_1]));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_16;
    var_23 = var_14;
    var_24 ^= (((!(!var_12))) ? (((!((min(var_4, var_8)))))) : (((((var_7 ? var_0 : var_14))) ? 16 : 1)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_7] = (arr_1 [i_7] [i_7]);
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = ((!(((~((var_3 ? (arr_27 [i_6] [i_7] [i_8] [i_9]) : (arr_0 [i_8] [i_9]))))))));
                                var_26 ^= -var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
