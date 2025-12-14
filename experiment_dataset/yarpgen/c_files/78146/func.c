/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78146
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(9357141912471584988ULL)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) var_3))))), (min((var_4), (((/* implicit */unsigned long long int) 1619632632U)))))) : (((((unsigned long long int) var_7)) + (((17972178751385015811ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0 + 2] [i_0] = arr_4 [i_2] [i_1];
                    arr_7 [i_1] = ((/* implicit */_Bool) max((((609896740) % (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) (unsigned short)36752)) ^ (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    var_12 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64707))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))))));
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned short) var_9)), (var_5)));
}
