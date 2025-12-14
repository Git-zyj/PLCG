/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95615
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
    var_16 = ((/* implicit */long long int) min((var_16), (((long long int) ((((((/* implicit */int) var_7)) % (((/* implicit */int) var_13)))) ^ (var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]));
        var_18 = ((/* implicit */short) (~(-2850661953644651484LL)));
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (short)27557))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [(short)17] [i_0])))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (unsigned char)160);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (unsigned short)65535))));
        arr_6 [(unsigned short)11] = ((/* implicit */short) var_13);
        var_22 = ((/* implicit */int) (unsigned short)0);
    }
}
