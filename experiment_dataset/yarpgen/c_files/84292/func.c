/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84292
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) % (-7824972396218094197LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned char) var_0);
                    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_8))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) - (var_10))))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -7824972396218094197LL))))))));
                    var_23 = (+((+(var_6))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_17);
}
