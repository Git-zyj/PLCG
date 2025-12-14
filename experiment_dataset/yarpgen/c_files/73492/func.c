/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73492
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_19 |= arr_2 [i_0];
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_1] [i_1])), (min((arr_6 [i_1]), (((/* implicit */long long int) arr_1 [i_1] [i_1])))))))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1])), (min((arr_6 [i_1]), (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (arr_4 [i_1])))), (arr_5 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */short) max((max((max((((/* implicit */int) arr_0 [i_1] [i_1])), (arr_2 [i_1]))), (((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) arr_1 [i_1] [i_1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
    }
    var_21 = ((/* implicit */signed char) var_16);
}
