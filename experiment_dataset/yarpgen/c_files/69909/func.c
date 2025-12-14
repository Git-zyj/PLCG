/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69909
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (unsigned char)194)) - (178))))), ((~(((/* implicit */int) (unsigned char)194)))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_21 &= ((/* implicit */short) (unsigned char)39);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-380)))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_14)))))) >= (((/* implicit */int) var_18)))))));
        var_24 += min(((unsigned char)14), ((unsigned char)242));
    }
    var_25 *= ((/* implicit */short) -2389504248833297354LL);
}
