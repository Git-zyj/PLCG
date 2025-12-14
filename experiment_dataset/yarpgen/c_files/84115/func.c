/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84115
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
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) var_1))) ? (max((var_4), (((/* implicit */unsigned long long int) -637996941)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_7))))))) ^ (((/* implicit */unsigned long long int) min((var_6), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16066))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_1)) & (var_3))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_6) : (arr_0 [i_0 + 1]))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))) / (var_6))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1442932126)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-62)))), (((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3])) || (((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 1]))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1 - 1]) == (arr_5 [i_1 - 2])));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_2 + 1]));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) arr_11 [i_2 + 1])) & (var_3)))));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1442932146))));
    }
}
