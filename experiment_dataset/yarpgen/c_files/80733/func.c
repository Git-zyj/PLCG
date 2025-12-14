/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80733
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)65535)))) == (3878943034397770660ULL)))), (((unsigned short) max(((signed char)-119), (var_2))))));
    var_14 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_1)))) ? ((-(var_1))) : (min((((/* implicit */unsigned int) (unsigned short)32640)), (4031165824U)))))) - (((unsigned long long int) (-(((/* implicit */int) var_0)))))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((short) ((var_3) == (max((((/* implicit */unsigned long long int) (unsigned short)32890)), (arr_4 [i_0] [i_1 - 4] [i_1]))))));
            }
        } 
    } 
}
