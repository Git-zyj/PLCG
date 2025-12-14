/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5750
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9151)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)255), (((unsigned char) 0ULL)))))) : (1640810446230332037LL)));
    var_14 *= ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(signed char)6] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_0] [i_0 - 2])), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_15 = max((((/* implicit */int) min((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0 - 4] [i_0 - 4])))), (((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))));
    }
}
