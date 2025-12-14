/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95418
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 + 1])))))));
                    var_18 -= ((/* implicit */unsigned int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_5), (-1568359790))) - (((int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (var_10)))))))) : (var_2))))));
}
