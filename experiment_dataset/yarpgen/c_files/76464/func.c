/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76464
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
    var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) -6157660473124941246LL))))));
    var_19 = ((/* implicit */long long int) (unsigned char)189);
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-7)), (-6157660473124941246LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-48))))), (((/* implicit */unsigned long long int) (+(4110959211U)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_22 ^= (+(((/* implicit */int) var_15)));
                    var_23 *= ((/* implicit */unsigned short) max((((int) ((unsigned char) -6157660473124941246LL))), (((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_24 |= ((/* implicit */long long int) min(((~(2147483647))), (((/* implicit */int) arr_9 [i_1 - 1] [12U] [i_0] [i_1] [12U] [i_0]))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) -6157660473124941269LL))));
                        var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_1 - 1]))))));
                        var_27 *= ((/* implicit */unsigned char) max((((unsigned int) max(((unsigned char)15), (((/* implicit */unsigned char) (signed char)-16))))), (((unsigned int) arr_5 [(short)4]))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)-21))))))));
                        arr_13 [i_0] [i_1 + 2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (short)-21328)), (-6157660473124941246LL)))));
                    }
                    var_29 = ((/* implicit */unsigned short) max(((unsigned char)11), ((unsigned char)249)));
                }
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_30 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5]))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (6157660473124941248LL)))))))) : ((-(((((/* implicit */_Bool) arr_19 [i_0] [i_6])) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                                var_31 = ((/* implicit */long long int) arr_2 [i_5] [i_0] [i_7 + 2]);
                                var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)44184)) && (((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_5]))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6))))))))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_0])) ? ((-((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) min((min((var_9), (((/* implicit */unsigned short) (unsigned char)236)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12501)) <= (2147483647)))))))));
                            }
                        } 
                    } 
                    var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7870082018068627179ULL)))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)24713))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 2] [i_5] [i_5] [i_0]))) : ((-(arr_2 [i_5] [i_5] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        } 
    } 
}
