/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74494
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) & (-983716765670010919LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) == (13644343823883527426ULL))))))))))));
        var_11 -= var_2;
    }
    var_12 = ((/* implicit */int) var_2);
}
