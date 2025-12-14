/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57654
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
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_8))))) ^ (((((/* implicit */_Bool) var_10)) ? (var_6) : (9230288697189411267ULL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1] [i_2]);
                    var_19 = ((/* implicit */unsigned int) (unsigned char)182);
                    var_20 += ((/* implicit */_Bool) ((short) max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (signed char)74)), (var_5))))));
                    var_21 = (((+(1992028509241421230ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
}
