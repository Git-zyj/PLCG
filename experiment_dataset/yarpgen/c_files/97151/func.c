/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97151
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
    var_11 |= ((((/* implicit */int) var_8)) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(939524096LL)))) ? (((/* implicit */int) ((unsigned short) ((_Bool) var_7)))) : (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_12 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (unsigned char)254)))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2664964778U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)234)))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) var_9);
                    var_15 = ((/* implicit */unsigned char) arr_4 [(unsigned char)13]);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_13 [i_0 + 2] [(unsigned short)21] [i_2] [i_3] = ((/* implicit */short) ((_Bool) (_Bool)1));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_17 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])))));
                            var_16 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (arr_8 [i_0] [1ULL] [i_0 + 1] [i_3]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_17 |= ((/* implicit */unsigned long long int) ((((unsigned int) var_5)) << (((min((((/* implicit */unsigned long long int) (unsigned char)159)), (var_3))) - (133ULL)))));
                            var_18 |= ((/* implicit */signed char) ((min((arr_2 [i_0 + 2]), (((/* implicit */unsigned long long int) var_8)))) != (max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_1] [i_2] [i_2] = ((/* implicit */short) (-(((int) var_10))));
                            var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1686774258)) ? (var_5) : (((/* implicit */int) (_Bool)1)))) <= (((485895756) << (((/* implicit */int) (_Bool)1))))));
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_1] |= ((/* implicit */unsigned char) arr_1 [i_1]);
                            var_20 = (!(((/* implicit */_Bool) 4294967295U)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9U)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])))) ? (max((arr_0 [i_3] [i_0 + 2]), (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) || (((/* implicit */_Bool) var_10)))))));
                            arr_27 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)31226)), (min((((((/* implicit */unsigned int) 1686774257)) | (var_9))), (arr_8 [10] [i_1] [10] [i_3])))));
                        }
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_10)))) ? (max((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) (short)-1)), (arr_7 [i_3] [i_1] [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_6);
                        arr_30 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) (-(15461083229013823475ULL))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((min((((((/* implicit */_Bool) (unsigned char)6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (unsigned char)6)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        var_25 |= ((/* implicit */short) ((((/* implicit */int) (short)32)) / (((/* implicit */int) min((((unsigned short) var_0)), (((/* implicit */unsigned short) max((var_2), (((/* implicit */signed char) (_Bool)1))))))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0 - 1] [(signed char)5] [i_2] [i_1] [i_9])) << (((var_5) - (403913664)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(_Bool)1]))) : (min((var_7), (((/* implicit */unsigned int) var_0))))));
                        arr_34 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */short) (!((((~(var_7))) == (((var_9) & (var_7)))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-28714)), (((((/* implicit */_Bool) (unsigned short)34310)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [14U] [i_0] [i_0] [7]))))))))))));
    }
}
