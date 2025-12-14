/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72342
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (4391929788481770916ULL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_8)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)601)))))) : (max((((/* implicit */unsigned long long int) var_4)), (var_1))))) : (((/* implicit */unsigned long long int) var_10))));
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((var_9), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_8)))))) : (((((((/* implicit */int) (short)-9845)) <= (((/* implicit */int) (short)17572)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48410))) : (var_8)))) : (((unsigned long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) ^ ((~(4075128842U))))) | (((((/* implicit */_Bool) 1589706349U)) ? (1793463811U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)8] [i_1])))))));
                                var_16 -= ((/* implicit */unsigned char) 15344244828477862020ULL);
                                var_17 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((arr_13 [i_4] [i_3] [i_3] [i_3 + 1] [i_0 + 1] [i_0 + 1] [i_4]) & (arr_13 [i_2] [i_3 - 1] [i_2] [i_3 - 1] [i_3] [i_0 + 1] [i_2]))));
                                arr_15 [i_0] [i_0] [(unsigned char)0] [i_3 - 1] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 3557768571U))) ? (((/* implicit */unsigned long long int) 1386694295892337754LL)) : (arr_0 [16ULL])));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
