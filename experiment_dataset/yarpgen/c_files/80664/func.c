/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80664
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
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) min((var_16), (5U)))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) arr_1 [i_0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_0)))))) ? (arr_0 [i_0] [1ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */int) var_9);
        arr_4 [i_0] = (+(((/* implicit */int) arr_1 [i_0])));
    }
}
