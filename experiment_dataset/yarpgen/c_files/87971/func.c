/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87971
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
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max(((unsigned char)49), (((/* implicit */unsigned char) (_Bool)0))))) ? (((((/* implicit */int) var_17)) * (((/* implicit */int) var_18)))) : (((int) var_11))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) var_12);
        var_22 += ((/* implicit */long long int) ((1973765144) & (1342416464)));
        arr_2 [i_0] = ((/* implicit */unsigned char) (((((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_16)))))) + (2147483647))) >> (((/* implicit */int) ((min((1342416464), (-1342416457))) != ((+(((/* implicit */int) (_Bool)0)))))))));
    }
}
