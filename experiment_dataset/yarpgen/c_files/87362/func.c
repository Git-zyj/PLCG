/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87362
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
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_8 [i_0] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) 1766797616156504010LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (0U))) >> (((/* implicit */int) ((6U) <= (4294967295U)))))));
                        arr_9 [6ULL] [i_1] [6ULL] [i_0] = ((/* implicit */unsigned short) (+(4294967284U)));
                        var_19 = ((/* implicit */unsigned int) var_2);
                        arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) (-(var_12)));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)10544)) - (10535)))));
                            var_21 = min((((((/* implicit */int) (_Bool)1)) - (2147483647))), (((/* implicit */int) var_1)));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_0 - 1])) <= (((/* implicit */int) arr_12 [i_0 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1])) || (((/* implicit */_Bool) arr_12 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) <= (((/* implicit */int) arr_12 [i_0 - 1])))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_22 = var_8;
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [(_Bool)1])), (((((/* implicit */_Bool) var_16)) ? (arr_16 [i_0]) : (((/* implicit */unsigned int) 2147483647))))))) : (((unsigned long long int) arr_12 [i_0 + 3]))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 12U))));
                            arr_17 [i_0] [i_0] [i_0 + 1] [2U] [(short)10] = ((/* implicit */unsigned char) (~(var_10)));
                            var_25 = ((/* implicit */signed char) ((min((max((((/* implicit */long long int) 4294967295U)), (var_3))), (((/* implicit */long long int) var_9)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_0)))))))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (unsigned char)61);
                            var_27 |= ((/* implicit */unsigned char) arr_16 [i_1]);
                            var_28 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2899595857U))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_24 [(short)5] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((281474976710654LL) <= (((/* implicit */long long int) -1))))) < (((/* implicit */int) (unsigned short)65535)))))));
                        var_29 = (short)-7275;
                        arr_25 [i_2] [i_0] = ((/* implicit */unsigned char) min((((short) arr_2 [i_0 + 3])), (((short) 4294967295U))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) || (((/* implicit */_Bool) (+(arr_7 [i_2] [i_1] [i_2 + 1] [i_7] [(unsigned short)9] [i_1]))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) -2147483625))))) / (((((/* implicit */_Bool) min((arr_21 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))))) : ((((_Bool)0) ? (((/* implicit */int) (short)-10442)) : (((/* implicit */int) (short)-24160)))))))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((7405700602483307297LL) - (((/* implicit */long long int) 2147483624))));
                }
            } 
        } 
    } 
}
