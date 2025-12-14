/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59605
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
    var_15 = max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (6383753479220402810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_13)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((-((+(((/* implicit */int) (short)-4586))))))));
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_0)))));
        var_17 = ((/* implicit */unsigned long long int) (signed char)102);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_7 [i_1])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_7 [i_1])))))))));
        var_19 ^= arr_7 [i_1];
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])), (((unsigned long long int) (signed char)118)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))))));
        var_21 = ((/* implicit */unsigned char) ((short) max((arr_0 [i_2]), (((/* implicit */long long int) arr_6 [i_2] [i_2])))));
    }
}
