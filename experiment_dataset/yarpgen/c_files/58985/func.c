/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58985
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65280))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_0)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_17 = (~(((((0ULL) != (((/* implicit */unsigned long long int) 51542678U)))) ? (((/* implicit */int) (_Bool)1)) : (1051472350))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_4 [i_1])), (-3216941035429043580LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(short)12] [(unsigned short)14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))))))) + (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))), (((/* implicit */unsigned long long int) (-(51542677U)))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) 3216941035429043579LL);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3216941035429043580LL));
                    var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (min((((((/* implicit */_Bool) (unsigned short)11969)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13071))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3099992139012141377LL)) || ((_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? ((-(((((/* implicit */_Bool) 3216941035429043580LL)) ? (12711090576115538634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2])))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (var_4) : (((/* implicit */unsigned long long int) var_12))))) && (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
}
