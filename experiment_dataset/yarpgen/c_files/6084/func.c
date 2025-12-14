/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6084
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
    var_16 = ((/* implicit */unsigned short) ((var_13) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_1))), (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)224))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (var_0) : (var_0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_0] = min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))) : (((arr_8 [i_1] [i_1] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 7372120958194354073LL)))), (((((/* implicit */_Bool) 3865636860403496974LL)) && (((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])))))))) ^ (((((-7471999190174538392LL) + (9223372036854775807LL))) >> ((((-(arr_1 [i_1] [i_1]))) - (2468759147U)))))));
                    }
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [1] [i_4 + 1] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(arr_1 [i_0] [i_4]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [0ULL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_4] [(unsigned char)0])))))))) ? (((int) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_11 [i_0] [i_0] [i_4 + 1] [i_4])))) : (((arr_9 [i_2]) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_14 [i_2 - 1]))))));
                        var_18 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_4] [i_4 - 1])) > (((/* implicit */int) arr_10 [i_2 - 1] [i_4 - 1] [8U] [i_4])))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(11741517060425240600ULL)))) && (((/* implicit */_Bool) (short)20807))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            arr_21 [i_1] [i_2] = ((/* implicit */signed char) arr_0 [i_1] [i_5]);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1])) / (((/* implicit */int) arr_19 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1])) ? (-5862706056777683425LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 - 1] [i_2] [i_2 - 1] [(short)5] [i_2 + 1]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [1U] [i_2 + 1])))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_25 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1581)) ? (((/* implicit */unsigned int) 1078795739)) : (arr_24 [i_2] [i_7] [i_5] [i_2 - 1] [i_2 - 1] [i_1] [i_2])))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [10U]))) & (15989908506320080238ULL)))))) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2]))));
                            arr_26 [i_7] [i_7] [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) 4496026841101344322LL);
                            arr_27 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((-703728090670166802LL) + (((/* implicit */long long int) arr_2 [i_5])))), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_2] [i_2] [i_7])))))));
                            var_21 = ((/* implicit */short) var_5);
                            arr_28 [i_2] [i_7] [i_5] [i_5] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned long long int) (+(129230471U))));
                        }
                        arr_29 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_5]))) ? (max((((unsigned int) (short)-811)), (arr_3 [i_5] [9ULL] [9ULL]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned char)31)))) & (((/* implicit */int) (signed char)89)))))));
                        arr_30 [i_5] [i_2] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) 4165736824U);
                        var_22 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [i_2]);
                    }
                    arr_31 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 1] [i_2] [i_2 + 1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) & (arr_1 [i_0] [i_0]))))))));
                    arr_32 [i_2] = ((/* implicit */long long int) (+(arr_17 [i_1] [i_1] [i_2 + 1] [(short)9])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) -153058730)) + (-5179313953983985129LL)));
    var_24 = ((/* implicit */unsigned int) var_9);
}
