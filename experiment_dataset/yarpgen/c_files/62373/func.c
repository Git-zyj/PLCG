/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62373
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
    var_14 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-17107)) && (((/* implicit */_Bool) var_9))))) + (((/* implicit */int) ((unsigned short) var_7))))));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_9)))))));
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-17107);
                var_17 = ((/* implicit */unsigned short) ((((8464492047689949146ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10526))))) ? (-8092280525540651035LL) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)7987)) != (((/* implicit */int) (unsigned short)39785))))))))));
            }
        } 
    } 
}
