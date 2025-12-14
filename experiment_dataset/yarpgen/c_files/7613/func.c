/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7613
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_8))));
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 307614918))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (+(307614918)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [(unsigned short)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(short)10]))) : (arr_0 [8LL] [i_1]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(short)2]))));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)10] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (-2917688013213241094LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [10LL])) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) -307614918)) : (((((/* implicit */_Bool) -8573190282623997626LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 4]))) : ((+(arr_0 [(signed char)3] [i_1])))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) var_1);
}
