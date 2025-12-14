/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74894
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)113)))) ? ((((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65535)))) : (min((((/* implicit */int) (unsigned short)65535)), (arr_4 [i_0]))))) : (((/* implicit */int) (unsigned short)65535)))))));
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (((unsigned short) arr_0 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9166967615364720475LL)))))) == (((var_14) ^ (((/* implicit */unsigned int) var_11)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((var_11) + (((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */short) var_13);
}
