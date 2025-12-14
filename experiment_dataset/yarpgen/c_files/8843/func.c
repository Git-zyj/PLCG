/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8843
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
    var_14 |= ((/* implicit */unsigned short) var_7);
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_4)))))) : (max((((/* implicit */long long int) arr_0 [(unsigned short)3])), (var_3)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */_Bool) -6954670916701218078LL)) ? (6552390687681957141LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [8U] [i_0])) ? (((/* implicit */int) arr_4 [(signed char)16] [i_1] [i_1])) : (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) : (((long long int) min((1382496566), (((/* implicit */int) arr_1 [i_1] [(_Bool)1])))))));
            }
        } 
    } 
}
