/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98377
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_4 [i_0 + 2]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), ((~(((((/* implicit */_Bool) min((33554432U), (((/* implicit */unsigned int) (short)32758))))) ? (((arr_3 [i_0 - 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))))) : (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_2 + 2]) - ((-9223372036854775807LL - 1LL)))))))))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_1 [i_0 - 1]))) - (((/* implicit */int) (!(((/* implicit */_Bool) 33554424U)))))));
                    var_19 &= min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_2] [i_1]))) : (var_13)))) ? (arr_5 [(_Bool)1] [12LL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) >= (arr_0 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32768)) / (((((/* implicit */int) arr_2 [i_2] [i_1] [17LL])) * (((/* implicit */int) (unsigned char)128))))))))))));
                }
                var_21 &= ((/* implicit */unsigned char) arr_0 [i_0]);
                var_22 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 2] [i_1 - 3])) : (((/* implicit */int) (signed char)-32))))) / (1099511625728LL));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) var_11);
}
