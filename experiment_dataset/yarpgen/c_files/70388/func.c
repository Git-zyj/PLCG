/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70388
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8401335761657093635LL)))))));
                var_15 = ((/* implicit */short) ((((/* implicit */int) (short)18470)) * (((/* implicit */int) (short)-18484))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((((~(((/* implicit */int) ((_Bool) var_2))))) + (2147483647))) << ((((~(((((/* implicit */_Bool) (unsigned short)30961)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18502))))))) - (1406630677U))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) <= (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18476))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
