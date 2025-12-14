/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69215
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (short)-2840))))) : (((var_12) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))), (min((var_17), (((/* implicit */unsigned int) var_9))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (short)-2840))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), (var_1)))) >= (((/* implicit */int) var_13))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)14] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) (_Bool)1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_1 [i_1] [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((var_10), (((/* implicit */long long int) ((signed char) (unsigned short)6256))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49891)))));
    }
    var_23 = ((/* implicit */signed char) (short)-2840);
}
