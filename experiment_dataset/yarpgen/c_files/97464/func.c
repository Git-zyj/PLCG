/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97464
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
    var_14 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) ^ (var_12))), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (-(621240540U)));
                                var_16 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */long long int) 3673726781U)) : (((long long int) (-(var_5))))));
                                var_17 = ((/* implicit */long long int) var_9);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((max((((unsigned long long int) (unsigned char)255)), (((/* implicit */unsigned long long int) 621240566U)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 621240565U)))))) : (5239487872158161009LL)))))))));
                            }
                        } 
                    } 
                } 
                var_19 ^= ((((/* implicit */_Bool) ((621240514U) | (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [(short)13] [i_1] [i_1] [i_1] [(short)13] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (3673726773U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4263945773U)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (short)-31236))))) ? (((/* implicit */int) arr_6 [i_0])) : ((-(arr_4 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((7919620513616086068ULL), (((/* implicit */unsigned long long int) (unsigned char)24))));
}
