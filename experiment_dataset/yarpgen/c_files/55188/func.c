/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55188
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
    var_20 = min((var_15), (((/* implicit */unsigned int) var_7)));
    var_21 = ((/* implicit */unsigned int) max((var_21), (var_15)));
    var_22 = ((/* implicit */unsigned long long int) var_11);
    var_23 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) | (var_15)));
            var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
        }
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_2] [i_2] [(_Bool)1] &= ((/* implicit */unsigned short) arr_3 [0ULL]);
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)25894)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1]))) : (var_15)))));
            arr_15 [i_2 + 1] [i_3] = ((/* implicit */unsigned char) (+(arr_8 [i_2 + 1] [i_3])));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_11))))) && (((/* implicit */_Bool) min((var_5), (((/* implicit */short) arr_9 [i_2 + 1] [i_2]))))))))) : (((((-6934281321332987187LL) + (9223372036854775807LL))) >> (((-559039623) + (559039650)))))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_12 [i_4 + 1])))), (((((/* implicit */int) arr_12 [i_4 + 1])) - (((/* implicit */int) arr_12 [i_4 + 1]))))));
        var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 1] [i_4]))) : (min((var_15), (((/* implicit */unsigned int) arr_9 [i_4] [i_4]))))))));
    }
}
