/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62469
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
    var_12 ^= ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_3 [(short)9] [i_1])) / (min((0), (((/* implicit */int) arr_1 [i_0] [i_1])))))), ((+(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                var_14 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -4271383426075042804LL)))) || (((/* implicit */_Bool) var_6))))), (max((4372410343771898906ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) 7060337716998413407ULL)))))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */short) var_11);
}
