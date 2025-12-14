/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85063
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
    var_20 = ((/* implicit */unsigned short) var_6);
    var_21 = ((/* implicit */unsigned int) var_1);
    var_22 *= ((/* implicit */signed char) (unsigned short)65534);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_23 *= ((/* implicit */int) ((signed char) ((unsigned short) (unsigned char)255)));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) ? (((/* implicit */unsigned long long int) min((((int) var_12)), (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (unsigned char)7))))), (max((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
            }
        } 
    } 
}
