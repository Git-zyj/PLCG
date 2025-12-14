/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8473
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_2 [i_0]))))));
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-44))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)1))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)107)) % (((/* implicit */int) var_4))))), (min((var_3), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))))));
    }
    var_11 = min((var_0), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_5))))) == (max((var_3), (((/* implicit */long long int) (unsigned char)1))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (signed char)31))))) & (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_7)))))))));
}
