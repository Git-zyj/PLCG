/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88163
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
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2173475329U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (18446744073709551615ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1358732041U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))))) ? (((((/* implicit */_Bool) var_2)) ? (5660002762757692668ULL) : (8188ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) var_6)))))))));
    var_20 = ((23U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [6ULL]))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (arr_2 [i_0]))))));
        var_21 = ((((((/* implicit */_Bool) 1358732041U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (4294967295U))) << (((((((/* implicit */_Bool) var_7)) ? (var_9) : (arr_2 [i_0]))) - (13783473025909664366ULL))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_11 [6U] [6U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_0 [i_2]) >> (((((/* implicit */int) var_0)) - (96)))))) == (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])) ? (var_11) : (arr_10 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_22 ^= ((((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) 23U)) ? (3052088005U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_18))));
                                arr_19 [3ULL] [12ULL] [(unsigned char)13] = ((((12786741310951858948ULL) / (arr_2 [i_1]))) ^ (((var_12) % (var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
