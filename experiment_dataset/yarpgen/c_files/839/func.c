/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/839
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
    var_15 += ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned long long int) (short)2543)), (var_6))))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) 2146121665);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (var_12) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3243))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
}
