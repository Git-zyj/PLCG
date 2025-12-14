/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76113
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
    var_13 = ((/* implicit */signed char) var_11);
    var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)-30470)), (arr_2 [i_0] [(_Bool)1]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (8927116U))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            var_16 += ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_1]) : (arr_0 [i_1]));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */int) var_2);
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (max((((/* implicit */unsigned int) var_5)), (arr_7 [13LL] [i_2] [i_2]))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 += ((/* implicit */unsigned short) ((((unsigned int) (unsigned char)1)) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (unsigned char)29)) - (28))))))))))));
            arr_14 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_3] [i_3]);
            var_20 = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) var_12)))) + (((/* implicit */int) arr_1 [i_3]))))));
            arr_16 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)28))))) ? (((unsigned long long int) (unsigned char)227)) : (8796093022176ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */int) min(((unsigned char)227), ((unsigned char)223)))) : (((/* implicit */int) var_6))))));
        }
    }
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        var_21 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))), (((/* implicit */long long int) arr_18 [i_4 - 1]))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                {
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [(short)8] [i_5 + 2] [i_4 - 1])) ? (max((((/* implicit */int) ((signed char) 33554431))), ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [(unsigned short)5]))))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((int) (+(((/* implicit */int) arr_22 [i_6 - 1] [i_5] [i_5 + 1] [i_4 - 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) -786646197531159687LL);
                                var_25 *= ((/* implicit */unsigned int) ((_Bool) (+(arr_30 [i_5] [i_5] [15U] [i_5] [i_5 + 2]))));
                                var_26 = ((/* implicit */_Bool) arr_20 [i_4] [i_4]);
                                var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-((~(arr_23 [i_4] [i_4 + 1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned short) (((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_33 [i_6] [(short)8] [i_6] [i_6]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_37 [i_5] [(short)6] [i_10] [i_5 + 1] [i_5 + 1]))))));
                                var_29 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)22))))), ((unsigned short)29109)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
