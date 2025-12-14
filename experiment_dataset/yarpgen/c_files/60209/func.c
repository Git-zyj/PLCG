/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60209
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((3440954748U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-31692))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((arr_0 [(unsigned short)14]) - (2834176579U))))))))) | ((~(var_14))))))));
        var_16 = var_10;
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))))));
            var_18 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((unsigned long long int) var_1)))));
            var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (signed char)-27)) + (2147483647))) << (((264491134U) - (264491134U)))))))) & (((unsigned long long int) (signed char)-42))));
            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
        }
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_1] [i_3 + 3]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)0))))) % (((((/* implicit */_Bool) var_6)) ? (198239396U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_3))));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_24 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4096727899U)) ? (((/* implicit */unsigned long long int) var_6)) : (5547573752388450677ULL)))) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_8))))) : (arr_3 [(short)5] [(_Bool)1])))));
                                var_25 += ((/* implicit */unsigned long long int) var_5);
                                var_26 = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) max((9U), (((/* implicit */unsigned int) (short)-1666))))) || (((/* implicit */_Bool) arr_15 [i_1] [i_5] [21]))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_6))));
}
