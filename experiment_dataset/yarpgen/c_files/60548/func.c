/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60548
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-109)))))))) ? (((/* implicit */long long int) min((var_17), (max((var_15), (((/* implicit */int) var_13))))))) : (var_9)));
    var_20 &= ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */short) max((((((/* implicit */_Bool) min((var_7), (arr_0 [i_0 - 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)61))))) : (arr_2 [(_Bool)1] [i_1 + 2]))), (((/* implicit */long long int) var_5))));
                var_22 = ((/* implicit */signed char) min((var_22), (((signed char) (signed char)-89))));
                var_23 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_13))))) : (arr_4 [i_0 - 1])))));
                var_24 ^= ((/* implicit */unsigned long long int) max((min((max((var_8), (((/* implicit */long long int) arr_5 [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((9044848964675429601LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
}
