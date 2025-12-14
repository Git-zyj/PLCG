/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57475
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53482)))))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) var_3)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37280)) << (((((/* implicit */int) (unsigned short)53469)) - (53463)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (2187875562U))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (3369714344U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53482))))))), (((/* implicit */unsigned int) ((unsigned char) min(((unsigned short)28250), ((unsigned short)53458)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12053), (((/* implicit */unsigned short) arr_0 [i_0])))))) > (9223372036854775799LL))) && (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((var_12), (((/* implicit */short) arr_0 [i_0])))))));
    }
}
