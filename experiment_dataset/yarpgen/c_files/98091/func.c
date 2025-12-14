/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98091
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (arr_0 [(signed char)13]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
        arr_2 [i_0] |= ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_12 = (+(arr_0 [i_0]));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
    }
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) ((_Bool) var_0)))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((var_5), (((/* implicit */short) ((unsigned char) 2680031439U)))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_1)))) ? (max((((/* implicit */long long int) var_8)), (var_4))) : (((/* implicit */long long int) min((var_3), (var_3))))))));
}
