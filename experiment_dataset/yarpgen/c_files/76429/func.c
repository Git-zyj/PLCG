/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76429
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -812114872992849845LL)) && (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_0))))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-41)) * (((/* implicit */int) var_8))))) : (var_11)))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14940))) : ((+(max((10304865983469707836ULL), (((/* implicit */unsigned long long int) var_7))))))));
    var_15 = ((/* implicit */unsigned int) (short)-14932);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned char) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14941)))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3 - 1]))));
                                arr_14 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) ((unsigned short) (short)14943))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]))), (var_11)));
                var_19 = ((((/* implicit */_Bool) arr_11 [i_1 + 1] [17ULL] [i_1] [i_1 - 1] [i_1 + 1])) ? (arr_11 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((long long int) var_3))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (-((~(((/* implicit */int) (short)-8812))))));
}
