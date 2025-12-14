/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87719
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
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1] [i_0])) / (((/* implicit */int) ((6005206227808927877ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22518))))))))) < (((((((/* implicit */_Bool) 5735743797012115070LL)) ? (((/* implicit */unsigned long long int) 1099507433472LL)) : (4261795107927269952ULL))) >> ((((~(3047412732U))) - (1247554504U)))))));
                            var_16 = ((/* implicit */unsigned char) ((var_13) & (((((/* implicit */_Bool) 10988934702388467455ULL)) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) : (8178636439220942880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))))));
                            var_17 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)22518)) > (((/* implicit */int) arr_2 [i_0])))))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (signed char)-52)), (((1099507433449LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)43018)))))));
}
