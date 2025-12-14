/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60474
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) -588399268))))))) ? (((((((/* implicit */_Bool) -588399255)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((var_0) / (((/* implicit */int) (short)28899))))) : ((~(18014398509465600LL))))) : (((/* implicit */long long int) var_0)))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 4])) - (((/* implicit */int) arr_0 [i_0 - 3] [i_0])))) <= (((/* implicit */int) ((unsigned short) 63))))))));
        var_12 = ((/* implicit */short) var_2);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) (-(18014398509465600LL)));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((-(((/* implicit */int) min(((signed char)-13), (var_7)))))) & (min((var_0), (((/* implicit */int) (unsigned char)32)))))))));
    }
    for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [14U] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [(short)18])))) : (18014398509465607LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((/* implicit */int) (_Bool)1))))) ? (arr_5 [i_2 - 3] [i_2]) : (((((-1315089372) + (2147483647))) >> (((((/* implicit */int) var_4)) - (59211))))))))));
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 1])) >= (max((arr_3 [(short)6] [(short)6]), (((/* implicit */unsigned int) var_4))))))) << (((17552890375464788628ULL) - (17552890375464788626ULL)))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (unsigned short)36331))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) var_9)) / (((/* implicit */int) ((unsigned short) (signed char)8)))))));
}
