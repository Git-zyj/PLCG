/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57018
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
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)-5))) ? (((/* implicit */int) ((17557826306048ULL) != (((/* implicit */unsigned long long int) 1245705314U))))) : (((/* implicit */int) (unsigned char)60))));
                var_13 = ((/* implicit */long long int) min((var_13), (-6626078616996137163LL)));
                var_14 = ((/* implicit */unsigned long long int) max((-9223372036854775789LL), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((((long long int) var_3)), (((/* implicit */long long int) max((1245705340U), (((/* implicit */unsigned int) ((int) 1245705314U))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((var_11) ^ (545377094))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1563602278267146353LL)));
}
