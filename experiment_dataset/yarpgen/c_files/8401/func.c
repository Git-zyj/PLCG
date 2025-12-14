/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8401
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 -= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (18446744073709551593ULL))));
        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))));
        arr_3 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) 3874939004U))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551612ULL)));
        arr_6 [i_1] |= ((/* implicit */short) min((((18446744073709551612ULL) / (((/* implicit */unsigned long long int) 2277095193494920261LL)))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_5 [i_1])))) + (2147483647))) << ((((+(((/* implicit */int) var_2)))) - (23378))))))));
        var_13 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_5 [i_1])))) >= ((~(((/* implicit */int) (short)17651))))));
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-91)), (362189383)));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) >> (((((((/* implicit */int) (signed char)-109)) / (((/* implicit */int) (unsigned char)72)))) + (5)))));
}
