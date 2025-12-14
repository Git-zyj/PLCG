/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94056
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
    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */unsigned int) ((short) (short)0));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])) : (var_10)))) ? (((/* implicit */long long int) (~(-1725836461)))) : (((((11956679303326563257ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((4442788553321419621ULL) == (((/* implicit */unsigned long long int) arr_3 [24LL]))))))))));
                                var_19 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((unsigned short) arr_4 [i_0] [i_1]))), (arr_1 [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8815927616354806059LL))))))));
                                var_20 = ((/* implicit */int) ((-3355249929159345472LL) ^ (((/* implicit */long long int) 1273801187U))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) max(((-((+(var_15))))), (((/* implicit */long long int) (-(arr_5 [i_1] [i_1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_22 = ((/* implicit */int) ((((((unsigned int) 16193813532175759752ULL)) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_6 [i_1] [i_0] [8U] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) (signed char)30)))))))));
                    var_23 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))), ((~(arr_8 [i_1] [i_1] [i_5] [i_5])))));
                    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)60)) ? (max((((/* implicit */long long int) ((3021166102U) << (((var_10) - (12214193106473539109ULL)))))), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3021166108U)) ? (arr_14 [8ULL] [i_1]) : (1024205370U)))) > (var_5)))))));
                    var_25 = ((/* implicit */signed char) 18446744073709551610ULL);
                }
                arr_15 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((3021166109U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))))))));
                arr_16 [21] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_1]))));
            }
        } 
    } 
}
