/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76691
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6752607637060197415LL)) ? ((-(var_5))) : (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */short) max((((/* implicit */long long int) (!(arr_5 [i_0] [i_0] [i_0])))), (-6752607637060197403LL)));
                var_22 = ((/* implicit */unsigned int) max((var_22), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_4 [i_0]))))), (var_10)))));
                arr_6 [i_0] [i_0] [5ULL] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)115))))), (3757101912387568621ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_3);
}
