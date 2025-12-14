/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70825
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned short)0);
                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))) / (4294967295U))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(max((4294967285U), (((/* implicit */unsigned int) (unsigned short)30)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21176))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6141)))))) & (var_2))) : (((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (short)0))))))));
}
