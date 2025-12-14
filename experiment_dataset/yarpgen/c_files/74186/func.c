/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74186
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)52)), ((-(var_6))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) max(((short)17603), (((/* implicit */short) (unsigned char)3))))))))));
    }
    var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
}
