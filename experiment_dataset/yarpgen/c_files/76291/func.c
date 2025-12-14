/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76291
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2410)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 6ULL)) ? (375900079U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : ((~(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (22ULL)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((3381190721U), (3919067230U)));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) max((var_4), (((/* implicit */short) arr_1 [i_2 + 2] [i_2 - 3]))))))))));
                    var_22 *= ((/* implicit */short) (-(((/* implicit */int) (short)0))));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-12926)), ((unsigned short)47579)))) ? (((/* implicit */int) (unsigned short)60087)) : (((/* implicit */int) (_Bool)1))))) - (max((var_13), (((/* implicit */unsigned long long int) var_1))))));
}
