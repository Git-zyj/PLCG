/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94035
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (unsigned short)23358)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42177)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned char) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)2))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_17 *= (-(0U));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_0] [i_1 + 1] [i_2 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-93)) ? (3791749762U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))))) << (((((int) arr_1 [i_0])) - (31712)))));
            }
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((unsigned long long int) (unsigned short)8414)))))));
        }
    }
}
