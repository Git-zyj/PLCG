/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79657
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
    var_12 += ((/* implicit */unsigned short) var_11);
    var_13 |= ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */_Bool) min((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))));
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) -521534564)) / (((var_6) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((2) / (((/* implicit */int) arr_1 [i_0])))))))) != (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_11))))))));
                var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0] [i_0] [18LL]))))));
            }
        } 
    } 
}
