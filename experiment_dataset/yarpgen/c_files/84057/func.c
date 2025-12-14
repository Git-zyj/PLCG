/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84057
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
    var_11 = ((/* implicit */unsigned int) ((min((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_7))), (((/* implicit */long long int) var_4)))) < (((/* implicit */long long int) var_5))));
    var_12 = ((/* implicit */short) var_7);
    var_13 = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) var_9)) << (((((/* implicit */int) var_8)) - (61))))))), (min((((/* implicit */int) ((unsigned char) var_8))), (var_2)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */int) arr_3 [i_0]);
        arr_4 [i_0] = ((min((var_6), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_1 [i_0])), (var_7))), (((/* implicit */long long int) (+(-11))))))));
        var_15 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        var_16 = ((/* implicit */unsigned long long int) max((var_9), (var_8)));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((((((/* implicit */_Bool) -44940525)) ? (-1) : (((/* implicit */int) (unsigned char)0)))) < (((((/* implicit */int) var_1)) + (((var_5) - (((/* implicit */int) var_4))))))))));
}
