/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81772
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
    var_19 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 474724676622322108ULL)) ? (-7850726723834815449LL) : (7850726723834815446LL)))), (((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) & (((/* implicit */unsigned long long int) var_12))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) (~((~(((/* implicit */int) var_16))))))) >= (((max((-7850726723834815447LL), (((/* implicit */long long int) var_0)))) * (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7850726723834815449LL)) || (((/* implicit */_Bool) (short)-19643))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 += ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) -50374783)) || (((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1]))))), (min((arr_1 [i_1 - 2] [i_1 - 3]), (((/* implicit */int) (unsigned char)56))))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 899595580)))));
            }
        } 
    } 
}
