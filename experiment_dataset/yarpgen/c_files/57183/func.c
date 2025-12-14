/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57183
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (((((long long int) 7798377909249687375LL)) & (var_10))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (unsigned short)65532));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) var_1)))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((signed char) arr_3 [i_1 - 1]));
        var_20 = ((/* implicit */long long int) ((unsigned int) var_14));
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
        var_22 = ((/* implicit */_Bool) max((var_22), ((((_Bool)1) && (((/* implicit */_Bool) 309292524238526043ULL))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) ((unsigned long long int) 17367898058552765282ULL))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) && (((/* implicit */_Bool) var_8))))))));
}
