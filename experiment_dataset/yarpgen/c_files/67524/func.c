/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67524
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
    var_12 = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) (-(var_5))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_13 -= ((/* implicit */signed char) var_4);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_0] [11ULL] [i_2] [i_2] = ((/* implicit */short) ((unsigned int) var_6));
                        var_15 = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                        arr_12 [i_3] [i_2] [i_2] [i_0] = ((arr_9 [i_1 - 2] [i_2] [i_3] [i_1]) / (arr_0 [i_0 - 1]));
                    }
                    var_16 = var_0;
                    arr_13 [i_0 - 3] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) arr_10 [i_1] [i_1] [9ULL] [i_1 - 1]));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 2ULL))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((min((18446744073709551610ULL), (((/* implicit */unsigned long long int) 1059983471U)))), (((/* implicit */unsigned long long int) ((unsigned int) 7ULL)))));
        arr_16 [i_4 - 1] |= (-(min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 2])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_10))))))));
        var_20 *= min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned long long int) 3234983850U)))))), ((-((~(1686065540U))))));
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 22; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((702400410U), (1059983474U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~(min((((/* implicit */unsigned long long int) arr_15 [i_6])), (18446744073709551601ULL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_5 - 2] [i_5 - 1] [i_4 + 1])) - (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 11ULL)))))));
                            arr_28 [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4 + 2] [i_4] [i_4])) ? (arr_19 [i_4 + 1] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))));
                            arr_29 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned int) arr_23 [i_4 + 1]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_32 [2LL] [i_5] [i_6] [i_7] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)32749))))) ? (((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned char)231)))) : (((/* implicit */int) (signed char)-23))));
                            var_23 = ((/* implicit */unsigned char) ((((var_6) & (max((arr_17 [i_6]), (((/* implicit */unsigned int) (unsigned char)255)))))) <= (((unsigned int) min((arr_21 [i_4] [i_6] [i_7]), (((/* implicit */unsigned long long int) var_7)))))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) + (var_9)))) ? (min((((/* implicit */unsigned long long int) arr_23 [i_6])), (8020025618618578292ULL))) : (max((13402647139045506761ULL), (((/* implicit */unsigned long long int) arr_22 [i_4 - 1] [i_5] [i_5] [i_6] [i_9])))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_10]))));
        var_25 = (-(arr_0 [i_10]));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3592566886U)) ? (((/* implicit */int) (short)-2048)) : (((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_10]))))) : (arr_21 [i_10] [i_10] [(signed char)13]))))));
        var_27 -= ((/* implicit */short) var_6);
    }
}
