/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80241
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned int) var_10)), (var_0))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(unsigned short)11] = (unsigned char)225;
        var_15 = ((/* implicit */int) var_1);
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (((~(((arr_0 [i_0] [3ULL]) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) - (((/* implicit */long long int) (((!((_Bool)0))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -739112562)) : (587655173U))) : (max((var_0), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))))))));
    }
}
