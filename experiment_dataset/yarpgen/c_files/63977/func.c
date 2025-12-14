/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63977
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 2]))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 307962985U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_0 [i_0])))))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_0 [(unsigned char)1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [12LL]))) : (arr_1 [i_0 + 1])))) ? (var_2) : (arr_1 [i_0 - 2]))) : (((/* implicit */unsigned long long int) var_10))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19323)) ? (((/* implicit */long long int) ((3811725959U) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (-4605978510207341406LL)));
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-120))))), ((~(var_4)))))));
}
