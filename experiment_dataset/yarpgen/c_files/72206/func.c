/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72206
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
    var_11 -= ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) arr_5 [i_0] [i_3]);
                            var_13 = ((/* implicit */_Bool) arr_1 [i_1] [i_3]);
                            var_14 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_0] [i_1]) : (arr_1 [i_1] [i_3]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [(unsigned short)9])) >> (((((/* implicit */int) arr_12 [(short)16] [i_1] [i_2] [i_1] [i_1] [i_1])) - (6604))))))))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_0] [i_1]) : (arr_1 [i_1] [i_3]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [(unsigned short)9])) >> (((((((/* implicit */int) arr_12 [(short)16] [i_1] [i_2] [i_1] [i_1] [i_1])) - (6604))) - (30488)))))))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_1 [i_0] [i_1]))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) || (((((((/* implicit */_Bool) 16614079253468058312ULL)) ? (1559311258610206494LL) : (-5582484243736168146LL))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))) > (arr_6 [13ULL] [i_1] [11LL] [13ULL])))))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
}
