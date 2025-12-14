/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75174
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
    var_12 = ((/* implicit */signed char) (+((~(((/* implicit */int) min(((short)-4466), ((short)-4448))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)4153)))), (((/* implicit */int) (unsigned char)190))))) != (((unsigned int) (unsigned char)190))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) + (((int) (short)-4466))));
                var_15 = ((/* implicit */int) min((((long long int) (unsigned short)65525)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-17)) / (((/* implicit */int) arr_1 [i_0])))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((signed char) ((_Bool) ((arr_6 [i_0] [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                var_17 += ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (-1277167410) : (((/* implicit */int) (short)0))))) % (min((-7487664642124144318LL), (((/* implicit */long long int) (short)-16655)))))));
}
