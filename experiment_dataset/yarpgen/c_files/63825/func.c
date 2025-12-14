/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63825
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
    var_14 += ((/* implicit */long long int) var_3);
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1415232678U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15720))) : (18446744073709551615ULL)));
    var_16 -= ((/* implicit */long long int) 1692956107);
    var_17 *= ((((/* implicit */_Bool) -82308131)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((~(1415232678U))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((short)3697), ((short)25642)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) ((arr_4 [i_0] [0LL] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))), (-1631564742)));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2834918148U)))))))) ? (((/* implicit */int) min((var_10), (((/* implicit */short) arr_1 [i_1] [i_0]))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) -1146023179))))), ((+(((/* implicit */int) (short)-6870))))))));
            }
        } 
    } 
}
