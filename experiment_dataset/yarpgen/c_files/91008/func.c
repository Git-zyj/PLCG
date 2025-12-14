/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91008
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_10), (((unsigned int) (signed char)-41))))) ? ((-(0U))) : (((((/* implicit */_Bool) (~(4294967280U)))) ? (((((/* implicit */_Bool) var_2)) ? (16U) : (1U))) : (var_10))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [15U] [15U])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (9214642263356193788ULL)))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        var_16 = ((/* implicit */unsigned int) ((unsigned short) var_7));
        arr_2 [i_0 - 1] = 5U;
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) 4294967288U));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) || (((/* implicit */_Bool) arr_8 [i_2 + 1]))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((438993934U) - (438993881U)))))) ? (((/* implicit */int) ((signed char) arr_3 [1LL] [i_2 - 2]))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)16)))))))));
    }
    var_22 += ((/* implicit */signed char) (~((+(((/* implicit */int) var_1))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(5U))))));
}
