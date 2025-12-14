/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [4] = var_6;
                    arr_10 [i_0] [i_0] [i_0] = ((356301250 ? 47 : 356301247));
                    arr_11 [i_1] [i_0] [i_0] [4] = var_5;
                    arr_12 [i_0] [i_1] [i_0] [i_0] = (((arr_6 [i_0] [i_1] [i_2]) == (max((arr_6 [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_0])))));
                    arr_13 [i_0] = (((max(var_14, (!var_13))) ? (arr_3 [i_0] [i_0]) : ((var_1 ? (arr_0 [i_0]) : ((max((arr_1 [i_0]), (arr_5 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
        arr_14 [i_0] [i_0] = ((((((!var_15) == var_9))) + ((max(1, 54142)))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_25 [i_3] = (arr_22 [i_4 + 3] [1] [i_4 + 2] [i_4 - 1]);
                        arr_26 [i_5] [i_3] [i_5] = var_8;
                        arr_27 [i_3] [i_4] [i_3] [i_3] = (((max(((var_10 ? 173 : 1)), (arr_24 [i_3] [i_3] [i_3] [i_3])))) ? ((+(((arr_4 [i_3] [i_3]) ? (arr_20 [i_6]) : var_3)))) : (max(((var_14 ? 1 : (arr_4 [9] [i_3]))), (arr_20 [i_5 + 1]))));
                    }
                }
            }
        }
        arr_28 [i_3] = ((((max(1, 4303))) ? (arr_5 [i_3] [i_3] [i_3]) : (((3938666048 < var_8) ? 33554432 : (arr_2 [1] [i_3])))));
    }
    var_16 = ((((max((((42952 >> (129 - 116)))), 4294967293))) ? var_0 : var_6));
    var_17 = var_11;

    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_18 = (max((arr_2 [i_7 - 1] [i_7]), -var_2));
        var_19 = ((768 ? 1 : (1562755449 % 11401)));
    }
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        var_20 *= ((7 ? 0 : 64777));
        arr_36 [i_8] = (arr_35 [i_8]);

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_21 = (min(var_21, (((!((!(arr_35 [i_9]))))))));
            var_22 += var_5;
            arr_41 [i_8] [i_8] [i_9] = 255;
            var_23 &= ((-((((arr_34 [i_9]) != 1562755449)))));
        }
    }
    for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((max((((arr_44 [i_10 - 2]) ? (arr_44 [i_10 - 2]) : (arr_44 [i_10 - 1]))), var_11)))));
        var_25 = (((!var_2) ? ((-2147483643 ? 3265506766 : -5893)) : ((var_5 ? var_1 : var_6))));
        var_26 &= ((((1 ? var_9 : (((var_13 ? 64777 : 1))))) < (arr_43 [i_10 - 2])));
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_27 = ((arr_33 [i_11 + 1] [i_11 - 2]) ? (((!64777) ? (max(4294967293, 1024)) : (var_15 > var_13))) : (arr_43 [i_11 - 2]));
        var_28 = ((((!(-9223372036854775807 - 1)))));
    }
    var_29 = (max(201, var_0));
    #pragma endscop
}
