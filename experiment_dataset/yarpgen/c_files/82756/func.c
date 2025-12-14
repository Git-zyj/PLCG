/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82756
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
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))));
        var_14 = ((/* implicit */long long int) (+(max((((var_6) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (arr_0 [i_0 - 1])))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (arr_1 [i_1] [i_1]))))) & (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_0))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (((((/* implicit */int) arr_1 [i_1] [i_1])) % (((/* implicit */int) var_11))))))) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) (unsigned char)232);
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_7 [i_2])) + (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((10521672636279918259ULL) | (((/* implicit */unsigned long long int) 739919176U)))) : (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))))));
        var_17 |= ((/* implicit */unsigned long long int) arr_0 [i_2]);
    }
}
