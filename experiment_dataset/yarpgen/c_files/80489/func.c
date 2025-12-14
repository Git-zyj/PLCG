/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80489
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [5U] [5U] [i_2] = ((/* implicit */short) (+(-8915113163492843132LL)));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) -5772669576186312070LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [10LL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8915113163492843132LL)) && (((/* implicit */_Bool) (unsigned char)255))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_11) : (4035770831U))), (((/* implicit */unsigned int) arr_2 [3ULL] [i_2]))))), (min((((unsigned long long int) -7962895761843271875LL)), (((/* implicit */unsigned long long int) var_12))))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_16 [2LL] [(_Bool)1] [(unsigned char)0] |= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-21766))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((var_7) / (var_6)))))));
                        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))));
                        arr_17 [i_0] [10LL] [i_1] [5U] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(-8915113163492843132LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 0ULL))) : (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)6] [i_1] [i_1] [i_1] [i_1])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            arr_21 [(_Bool)1] [i_1] [i_2] [i_5] [2LL] [i_6] [8U] &= min((((/* implicit */unsigned short) (signed char)49)), ((unsigned short)61440));
                            arr_22 [(signed char)3] [i_2] [i_0] [1LL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_5 [4ULL] [i_1] [(_Bool)1])))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_2] = ((/* implicit */long long int) ((short) max((-7962895761843271887LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)260)) || (((/* implicit */_Bool) -7962895761843271875LL))))))));
                            arr_26 [10LL] [(short)5] [i_2] [5LL] [i_2] [(signed char)1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max(((-(8915113163492843116LL))), (max((-7962895761843271887LL), (((/* implicit */long long int) arr_0 [i_5]))))))), (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)13)))))));
                        }
                        var_16 = ((long long int) min((var_8), (((/* implicit */long long int) 8U))));
                    }
                    for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        arr_29 [i_2] [i_1] [i_2] [i_8] = ((/* implicit */short) ((7962895761843271886LL) << (((((unsigned long long int) ((((/* implicit */int) (signed char)110)) | (((/* implicit */int) (unsigned char)144))))) - (254ULL)))));
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)111))) ? (-8915113163492843089LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [(short)3] [(signed char)4]))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) -7962895761843271879LL)) && (((/* implicit */_Bool) 14580155986529352713ULL)))))));
                        arr_30 [i_2] [i_1] [(unsigned char)5] [i_8] = ((/* implicit */_Bool) arr_12 [i_8] [i_8 + 2] [(unsigned char)7] [3LL] [0] [i_8] [(signed char)8]);
                    }
                    for (unsigned int i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_2] = (((-(((long long int) var_8)))) * (min((max((((/* implicit */long long int) arr_7 [i_2] [i_2])), (var_7))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 3658774256U)) : (-2107695069963613052LL))))));
                        var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (unsigned short)42826)))))), ((((_Bool)1) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_11)))) : (min((var_7), (((/* implicit */long long int) 4294967288U))))))));
                        arr_34 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_2)), (var_4))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_2])))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3658774260U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [4U] [(signed char)3] [i_2] [i_9 + 2] [i_9 - 2] [(_Bool)1]))) : (var_0)))) || (((_Bool) arr_18 [6ULL] [4U] [i_2] [i_9 + 2] [i_9 - 2] [i_9]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            {
                arr_40 [i_11] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (min((((2107695069963613030LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), ((+(arr_39 [7LL])))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_10]))))) ? ((-(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned short) var_9)), (var_3)))))));
}
