/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80436
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
    var_18 *= ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 &= ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2])) >= (-844233375768705826LL)))), ((~(((/* implicit */int) (unsigned char)255)))))));
                    var_20 *= (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) var_2)))) % (arr_3 [i_0] [(signed char)0] [i_2])))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) var_17);
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)75)))) ^ (((/* implicit */unsigned long long int) var_13))))));
}
