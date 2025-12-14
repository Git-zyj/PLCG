/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67585
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 -= ((/* implicit */short) (-((+(((((/* implicit */_Bool) var_4)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60790)))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */long long int) arr_1 [i_0])) : (min(((~(arr_7 [i_0] [i_1] [i_0]))), (max((var_5), (((/* implicit */long long int) arr_6 [i_0] [i_1]))))))));
                    var_21 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((-2LL), (((/* implicit */long long int) (unsigned short)2220))))) ? (max((arr_1 [i_0]), (arr_1 [i_1]))) : (((/* implicit */unsigned int) (-(arr_0 [i_0])))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_6 [i_1] [i_1])))) < ((-(((/* implicit */int) (unsigned short)0)))))))));
                    var_22 = ((/* implicit */int) var_16);
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) arr_19 [i_0] [i_1] [i_3] [i_4] [i_5 - 2]);
                                var_24 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)40045)));
                                var_25 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)154)) ? (((((/* implicit */_Bool) -6400493014803036967LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1070468214595607153ULL))) : (((((/* implicit */_Bool) (short)1208)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27565))) : (arr_12 [i_0] [i_0])))));
                    var_26 -= ((/* implicit */int) min(((~(var_0))), (((/* implicit */long long int) var_9))));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) (~((-(arr_13 [i_0] [i_1])))));
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (+(arr_1 [i_6])))))), ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    var_28 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_6] [i_6])))));
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    var_29 -= ((/* implicit */long long int) var_9);
                    arr_27 [i_1] [i_1] [i_0] [i_7] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]);
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_0] [i_7] [i_7] [i_7] [i_0])))))));
                    arr_28 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_7]))) : (arr_7 [i_0] [i_1] [i_7]))));
                }
                var_31 &= ((/* implicit */int) arr_9 [i_0] [i_0] [i_1]);
                arr_29 [i_0] [i_0] [i_1] = var_1;
            }
        } 
    } 
    var_32 = min(((+(((/* implicit */int) (signed char)-9)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (var_5)))) ? ((-(((/* implicit */int) (unsigned short)2205)))) : (((/* implicit */int) var_15)))));
}
