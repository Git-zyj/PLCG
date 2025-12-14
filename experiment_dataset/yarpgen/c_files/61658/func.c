/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61658
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 += ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)41200)) ? (((-7159321043207118746LL) ^ (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))), (((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_15))))))));
        arr_2 [i_0] = min((min((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41200))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)24332)) : (((/* implicit */int) (unsigned short)19180))))))), (((/* implicit */unsigned long long int) var_14)));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)41212))))) ^ ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */short) var_0);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) max((var_8), (var_3)))) - (9910))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551592ULL))))))))));
        var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */short) ((((-241975063) + (2147483647))) << (((((/* implicit */int) (unsigned short)24323)) - (24323)))));
        var_23 = ((/* implicit */signed char) var_3);
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24338)) ? (((/* implicit */unsigned long long int) var_18)) : (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((~(((var_17) ^ (((/* implicit */long long int) var_18))))))));
}
