/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98707
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((-(7U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
        var_16 &= ((/* implicit */unsigned char) ((-518210438) <= (((/* implicit */int) arr_3 [i_0]))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 12675054719630770582ULL))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned short)65472)) % (((/* implicit */int) (signed char)-36))))))));
        var_19 = ((/* implicit */short) min((var_19), (var_7)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) arr_7 [i_2 + 1] [i_2] [i_2 - 2]);
            arr_9 [i_2] = ((/* implicit */_Bool) var_3);
        }
        for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(1403338153983253058ULL)))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_3 + 1])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(12675054719630770576ULL)))))))));
        }
        var_23 = ((/* implicit */unsigned char) (+(17043405919726298554ULL)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)91))));
        var_25 |= ((/* implicit */unsigned char) ((arr_12 [i_4 + 1] [i_4 + 1]) < (((/* implicit */long long int) -30140139))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((long long int) var_5)))));
    }
    var_27 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1216951467U)) ? (((((/* implicit */_Bool) var_12)) ? (4202116677U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (3730820958U)))))) / (((max((((/* implicit */unsigned long long int) (unsigned char)244)), (12675054719630770576ULL))) | (((/* implicit */unsigned long long int) var_13)))));
}
