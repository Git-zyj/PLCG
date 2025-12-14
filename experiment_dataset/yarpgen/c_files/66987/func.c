/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66987
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) 4567455150315372361LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) : (9999301008761844837ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0] [(unsigned char)3]) : (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                var_16 = ((/* implicit */int) var_0);
                var_17 = ((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_1 - 1]);
            }
        } 
    } 
}
