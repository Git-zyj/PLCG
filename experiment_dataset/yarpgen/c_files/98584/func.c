/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98584
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = ((/* implicit */short) max((min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (((arr_9 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3033))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 46617935U))))) ? (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) var_4))))) : (max((4248349347U), (((/* implicit */unsigned int) var_2)))))))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((((2147483628) >> (((var_12) + (1300022584290244260LL))))) * (((/* implicit */int) (_Bool)0)))) + (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_4 [i_0])) : (var_5)))));
                        arr_12 [i_3 + 1] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 8U))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((unsigned char) 86920175880056626LL)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 251658240U)) || ((_Bool)1))))))), (min((((/* implicit */long long int) ((unsigned int) 9223372036854775802LL))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)33030)) >= ((+(((/* implicit */int) (signed char)93))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2 + 2] [i_4 + 1] [i_5] [(unsigned short)8])) != (((/* implicit */int) var_4))));
                            arr_20 [i_5] [i_5] [i_5] [(short)2] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned short) -1881826345));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_23 [i_6] [i_2] [3U] [i_6] = ((/* implicit */_Bool) var_2);
                            var_15 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_1] [9LL] [i_4] [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2 + 2] [i_4] [i_1] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */int) arr_21 [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_7 + 3])) : (((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                            var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_11))))), (min((((long long int) var_11)), (((/* implicit */long long int) ((unsigned char) var_6)))))));
                            var_17 += ((/* implicit */unsigned char) ((((unsigned int) arr_16 [i_4 + 1] [(unsigned short)3] [(unsigned short)3] [i_4 + 1] [i_4] [i_2] [i_2])) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        for (int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_18 = (signed char)-5;
                                arr_32 [i_0] [i_1] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26633)))))) : (var_8))) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (~(((var_8) / (var_12)))));
}
