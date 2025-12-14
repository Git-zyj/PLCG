/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/821
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
    var_14 = ((/* implicit */int) min((min((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) 102559621U))))))), (((/* implicit */long long int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (9223372036854775804ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((unsigned int) var_10))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(unsigned short)3])) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) 4398046494720ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))))));
    }
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) - (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (min((var_0), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_10)))))))));
}
