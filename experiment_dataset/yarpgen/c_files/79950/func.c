/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79950
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
    var_16 |= ((/* implicit */short) var_2);
    var_17 = ((/* implicit */long long int) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) >= ((-(18446744073709551615ULL)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) min((var_4), (((/* implicit */short) arr_3 [i_0])))))));
        var_20 = ((/* implicit */unsigned long long int) var_1);
        var_21 = ((/* implicit */short) 18446744073709551598ULL);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((signed char) var_13));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))) - (25799)))));
        arr_8 [i_1 + 2] = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) 0ULL))), (6294507767777253561ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_2 - 3] [i_2 - 2]))) : (2ULL)));
        var_24 = ((/* implicit */unsigned long long int) ((unsigned char) 6294507767777253561ULL));
    }
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned short) var_1)))));
}
