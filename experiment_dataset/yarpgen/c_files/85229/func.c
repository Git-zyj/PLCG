/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85229
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_4))))))), ((~(547191652U)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (+(arr_1 [i_0 - 1])))) : (((547191664U) % (3747775663U))))) < (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2291468830U)) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (((unsigned int) arr_0 [i_0]))))));
        arr_4 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0]))) - (arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((arr_1 [i_0]) + (((/* implicit */int) var_1)))) : (((/* implicit */int) var_6)))) : (arr_1 [i_0])));
        arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)33316)) < (var_8)))))))));
        arr_6 [i_0] |= ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)12])) && (((/* implicit */_Bool) 3747775622U))))) == (((/* implicit */int) var_6))))) / (((/* implicit */int) arr_0 [17U])));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 1])))) ? (((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (max((((/* implicit */int) arr_0 [i_0 - 1])), (arr_1 [i_0 + 1])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)33318))))) ? (((((/* implicit */unsigned int) arr_1 [(unsigned char)10])) + (4U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [10] [10])))))));
        var_19 += ((/* implicit */unsigned int) ((var_0) == (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [8U])) || (((/* implicit */_Bool) 6U)))))) : (max((((/* implicit */unsigned int) arr_1 [i_1])), (4294967295U)))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_0 [i_1 + 1])) << (((/* implicit */int) arr_0 [i_1 + 1])))))))));
        var_21 ^= ((/* implicit */signed char) arr_0 [i_1]);
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)210))));
    var_23 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (5ULL))), (((/* implicit */unsigned long long int) var_1)))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11)))))));
}
