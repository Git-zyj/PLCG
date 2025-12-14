/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98961
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)205)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 134217728U)))), (((/* implicit */unsigned long long int) ((arr_3 [i_1 - 4] [i_1 - 4] [i_1 - 4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 4] [i_1 - 3]))))))));
                arr_5 [i_0] [3ULL] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (1255677864U)))) != (min((1846937136626553977ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3877750810984383857ULL)))))));
}
