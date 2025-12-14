/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92406
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
    var_11 = ((/* implicit */signed char) min((1361977994U), (max((((/* implicit */unsigned int) ((unsigned char) 2932989301U))), (4294967294U)))));
    var_12 ^= ((/* implicit */unsigned int) ((int) (unsigned char)41));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) arr_0 [9ULL])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) | (((((/* implicit */_Bool) 3575171035045224979LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [(unsigned char)3]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1361977987U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (max((arr_0 [i_0]), (((/* implicit */long long int) 1361977987U)))))), (((/* implicit */long long int) var_0))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_0 [i_0])))));
    }
}
