/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92454
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
    var_11 ^= ((/* implicit */_Bool) var_4);
    var_12 = ((/* implicit */unsigned long long int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)4096)))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-((+(var_2))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0 - 1] [12U] [12U] = arr_1 [i_1] [i_2];
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_14 *= ((/* implicit */signed char) var_0);
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_10 [i_1] [i_1] [i_3 + 1] [i_4]))), (18446744073709551615ULL))), (((((/* implicit */_Bool) var_9)) ? (8315435422500956541ULL) : (arr_10 [i_2 - 1] [i_4] [i_2 - 1] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned int) (short)2)), (var_5))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)35493)), (var_10)))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8315435422500956541ULL)) ? (560094672) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned long long int) arr_8 [i_0]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) >= (1338902441043985937ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((_Bool) var_9)))))));
}
