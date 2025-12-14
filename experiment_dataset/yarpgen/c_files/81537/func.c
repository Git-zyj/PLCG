/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81537
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)))) * (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [(short)2]))))) * (min((var_6), (arr_3 [i_0] [i_0])))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_2 [(unsigned char)18] [(unsigned char)18]))));
        arr_4 [i_0] = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_0 [6] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) : (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) 0ULL))))) << (((((/* implicit */int) var_12)) - (49130)))));
    }
    var_21 = ((/* implicit */unsigned char) min((((long long int) min((((/* implicit */unsigned long long int) var_13)), (var_11)))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
}
