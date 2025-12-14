/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66002
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) arr_2 [8]);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (min((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0 - 1])))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(882861089)))), (2172021680U))))));
    }
    var_12 = ((/* implicit */unsigned short) ((3479651635506900803ULL) / (((/* implicit */unsigned long long int) 4294967295U))));
}
