/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70089
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
    var_20 *= ((/* implicit */_Bool) 150582654);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 |= ((/* implicit */short) max((((long long int) var_15)), (((/* implicit */long long int) var_19))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) ((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) arr_1 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max(((+(arr_2 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))))));
        var_24 = ((/* implicit */unsigned long long int) (unsigned char)133);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))) < (((/* implicit */long long int) (-(((/* implicit */int) (short)2757)))))))) << (min((((unsigned int) (unsigned short)6920)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        var_26 ^= ((/* implicit */short) arr_1 [i_1]);
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)112)) : (min((-680295968), (arr_1 [(short)23])))));
    }
}
