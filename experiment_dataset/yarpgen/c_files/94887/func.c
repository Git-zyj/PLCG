/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94887
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(2814088733U)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) ((2814088746U) == (((/* implicit */unsigned int) -942388724))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [20] [i_0] [i_1 + 2]))) <= (arr_0 [i_1 - 1]))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)18] [i_1] [i_1])))))) ? (((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) arr_4 [i_1 + 1] [16LL] [i_1 + 2])))))));
            arr_7 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) (((((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_4 [i_1] [i_0] [i_0]))) - (64)))))) : (((/* implicit */short) (((((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))) + (2147483647))) << (((((((((/* implicit */int) ((signed char) arr_4 [i_1] [i_0] [i_0]))) - (64))) + (176))) - (16))))));
        }
        for (int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_9 [i_0] [i_2] [i_2 + 1])));
            var_21 = ((/* implicit */short) ((unsigned int) arr_9 [i_0] [i_0] [i_2]));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0]))) / (arr_5 [i_2 - 1])));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))))));
        }
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_3 - 1] [i_0]));
            var_24 = ((/* implicit */short) var_1);
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
    {
        arr_18 [i_4] = var_2;
        var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 - 2] [i_4 + 1])) != (((/* implicit */int) var_15))));
        arr_19 [i_4] |= ((/* implicit */unsigned int) arr_14 [i_4] [i_4]);
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_17 [i_4 - 1] [i_4 + 2]))));
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 10; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)26083)) || (((/* implicit */_Bool) (signed char)91)))))) / (2814088733U))));
                        arr_31 [i_5] [i_7] [i_6] [i_5] = ((((/* implicit */_Bool) min((arr_20 [i_7 - 3] [i_6 + 2]), (arr_20 [i_7 - 1] [i_6 + 1])))) ? (((((/* implicit */int) arr_20 [i_7] [i_6 - 2])) | (arr_9 [i_7 + 1] [i_7] [i_6 - 2]))) : (((/* implicit */int) var_13)));
                    }
                } 
            } 
            var_28 = ((/* implicit */int) ((unsigned int) ((short) ((((/* implicit */int) var_12)) >= (var_1)))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 3; i_9 < 9; i_9 += 2) /* same iter space */
        {
            var_29 |= ((((/* implicit */int) ((arr_16 [i_9]) != (((/* implicit */int) (short)112))))) != (((((/* implicit */_Bool) arr_15 [i_5] [i_9])) ? (arr_21 [2U]) : (((/* implicit */int) (signed char)-17)))));
            var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)24045)) : (var_8))) % (arr_33 [i_5] [i_5] [i_5])));
        }
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_33 [i_5] [(short)6] [i_5])), (arr_22 [i_5] [i_5])))), (((unsigned long long int) arr_22 [i_5] [i_5])))))))));
    }
    var_32 = ((/* implicit */short) ((((/* implicit */int) var_13)) >= (((((/* implicit */int) var_15)) >> ((((+(((/* implicit */int) (short)-16744)))) + (16744)))))));
}
