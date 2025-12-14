/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87702
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 &= ((/* implicit */unsigned short) 2013265920ULL);
                            arr_9 [(unsigned char)9] [i_0] = ((/* implicit */signed char) var_3);
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_2 [i_0] [i_1 + 1]) >> (((((((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_0])))) - (94)))))) : (((/* implicit */unsigned short) ((arr_2 [i_0] [i_1 + 1]) >> (((((((((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_0])))) - (94))) + (98))))));
                            arr_11 [i_0] [(short)0] = ((((((/* implicit */_Bool) (unsigned char)231)) && ((_Bool)1))) ? (((/* implicit */int) (short)22134)) : ((~(((/* implicit */int) ((unsigned short) var_9))))));
                            var_11 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (short)15)), (((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) max(((-(522135669))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (arr_6 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) 522135687)) ? (-1LL) : (((/* implicit */long long int) 0U))));
    var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)63)) && (((/* implicit */_Bool) 522135691)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22113)) ? (((/* implicit */int) (unsigned short)28896)) : (((/* implicit */int) (short)15))))) : (var_7))) ^ (var_7)));
    var_15 *= ((/* implicit */unsigned long long int) ((unsigned int) var_2));
}
