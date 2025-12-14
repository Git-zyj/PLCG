/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79623
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
    var_14 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) -1435565209))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */signed char) min((min((arr_2 [i_0] [i_0 + 1] [i_1]), (((/* implicit */unsigned int) (unsigned short)12)))), (((((/* implicit */_Bool) ((arr_2 [i_1] [(unsigned char)17] [i_0]) ^ (((/* implicit */unsigned int) arr_3 [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((arr_3 [i_1]) + (((/* implicit */int) (unsigned short)24))))) : (2708842274U)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (unsigned short)58011))));
                                var_17 = ((/* implicit */long long int) arr_0 [i_4]);
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) var_8)))))));
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32)) & (((/* implicit */int) (unsigned char)11))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58011)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 1])) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 2]))))));
                                arr_10 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_3 [19LL]));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) min(((short)6), (((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 1] [11ULL] [i_0 + 1])))))));
                arr_11 [i_0 - 1] [(short)1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) (unsigned short)58011)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0 + 2])) : ((~(((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [19ULL] [i_1] [15ULL] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])), (var_6)))) > (arr_5 [i_0]))))));
                arr_12 [i_0] = ((/* implicit */unsigned int) (unsigned short)58005);
            }
        } 
    } 
}
