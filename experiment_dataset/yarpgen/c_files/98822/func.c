/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98822
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)151)), (3962142642802051400ULL)))) ? (((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (1848923039)))) >= (((/* implicit */int) arr_1 [(unsigned char)16])))) ? (min((((/* implicit */long long int) min(((short)-22442), (((/* implicit */short) var_6))))), (arr_2 [(unsigned char)18]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(signed char)22])) * (((/* implicit */int) arr_1 [(signed char)2]))))))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((3962142642802051400ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_12))));
}
