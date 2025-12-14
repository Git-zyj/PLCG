/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97372
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
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((unsigned long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [2])));
        var_18 = ((/* implicit */long long int) ((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_5 [i_0] [12ULL] = ((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0])));
    }
    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_11), (var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */long long int) ((int) var_7))), (var_16)))));
    var_20 ^= ((/* implicit */unsigned int) ((((var_9) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned long long int) ((_Bool) var_5))), (var_7))) - (11253583834325938622ULL)))));
}
