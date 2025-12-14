/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95892
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
    var_17 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_18 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (unsigned char)31)), (((unsigned int) 288230376151707648ULL)))), (((unsigned int) arr_0 [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) max((((/* implicit */int) (signed char)-43)), ((~(((/* implicit */int) (signed char)42)))))))));
}
