/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92397
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */short) (+((~(((long long int) 18446744073709551615ULL))))));
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])), (min((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), ((~(arr_4 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */short) (((+(((281474976710656ULL) + (arr_7 [i_0] [i_1] [i_1] [i_0] [i_4] [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1819539649U)))))))));
                            var_16 *= min((1072285881), (((/* implicit */int) (_Bool)1)));
                            var_17 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) var_12))), (max(((~(var_13))), (((/* implicit */unsigned long long int) ((unsigned int) -1927580704)))))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(3623050476U)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]))) : ((-(0ULL)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_3] [i_5])) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])) & (((/* implicit */int) (_Bool)0)))) : (1927580703));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_4))) == (((/* implicit */int) var_7))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (arr_4 [i_1])))) > ((+(18446744073709551597ULL))))))));
                            var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) & (((-1072285882) / (((/* implicit */int) (short)-28759))))));
                        }
                        var_22 = ((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((1927580703) - (1927580702)))))))))));
                        var_23 = ((/* implicit */short) (unsigned char)112);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_5);
}
