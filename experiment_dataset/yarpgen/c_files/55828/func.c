/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55828
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
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)106)))))))));
        var_19 = ((unsigned int) (unsigned char)60);
        var_20 ^= ((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]);
        var_21 -= ((/* implicit */unsigned int) (-(min((((((/* implicit */int) (short)25931)) % (((/* implicit */int) (unsigned char)106)))), (((/* implicit */int) (unsigned char)94))))));
    }
}
