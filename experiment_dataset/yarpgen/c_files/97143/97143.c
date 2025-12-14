/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_10, (((((var_5 ? var_2 : var_7)) >= 66060288)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [i_2] [i_1] = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((((min(-2147483626, (arr_3 [i_1] [i_2 - 2] [i_1])))) >= (max(var_11, 4294967295)))));
                                var_15 = (min(((((var_5 ? 4294967288 : (arr_14 [i_0] [i_0] [i_0]))) ^ ((164 ? 4294967293 : 18)))), (4294967283 ^ 1253679075)));
                                var_16 += ((((((-(arr_7 [i_0]))) >= -17297)) ? (((~((var_11 ? var_8 : var_9))))) : 4294967295));
                            }
                        }
                    }
                    var_17 = var_7;
                    arr_15 [8] [i_1] = (arr_7 [i_1 - 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            {
                var_18 = (min(var_18, ((min(((~(arr_20 [i_6 + 2] [i_6 + 1]))), (min(var_9, (arr_18 [i_6 - 2] [i_6 + 2]))))))));
                var_19 += ((~((((~(arr_18 [i_5] [i_6 - 1])))))));
            }
        }
    }

    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_20 |= 4294967291;
        arr_24 [i_7] = ((((arr_21 [i_7 - 1]) ? (arr_21 [i_7 + 1]) : (arr_21 [i_7 - 1]))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_21 = ((~(arr_6 [i_8] [i_8] [i_8] [i_8])));
        var_22 = (max(1, (max(((((arr_16 [i_8]) >= var_9))), 15))));
        var_23 += (18446744073709551610 >= -3041288217);
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_24 = (arr_25 [i_9]);
        var_25 = var_1;
    }
    #pragma endscop
}
