/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75686
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((arr_1 [i_1]) > (arr_1 [0ULL]))) ? (((/* implicit */unsigned long long int) 862530531U)) : (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_3 [i_1])) : (((int) arr_3 [i_0])))) + (((((/* implicit */int) arr_3 [i_0])) << (((((/* implicit */int) arr_3 [i_1])) - (31562)))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [7ULL])) ? (var_10) : (((/* implicit */int) var_15))))) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_0 [i_0]))), (((((/* implicit */int) (signed char)24)) << (((((/* implicit */int) (signed char)127)) - (127))))))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((arr_2 [i_0]) == (((((/* implicit */_Bool) (unsigned char)47)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
            var_23 = ((/* implicit */unsigned int) arr_3 [i_0]);
        }
        var_24 = ((/* implicit */_Bool) arr_3 [i_0]);
    }
    var_25 = ((/* implicit */unsigned char) var_4);
    var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((((/* implicit */int) (unsigned char)78)) << (((((/* implicit */int) (unsigned char)75)) - (54))))))));
    /* LoopSeq 2 */
    for (int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        arr_9 [i_2 + 1] &= ((/* implicit */unsigned long long int) ((short) max((7197855933835102204LL), (((/* implicit */long long int) (unsigned char)79)))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 2216615441596416ULL))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_28 = min(((+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) arr_11 [i_3])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))))) % (((unsigned long long int) arr_12 [i_3])))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) 8522825728ULL);
    }
    var_29 = ((/* implicit */long long int) (unsigned char)82);
}
