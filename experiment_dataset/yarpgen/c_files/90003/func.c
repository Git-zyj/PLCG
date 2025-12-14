/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90003
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
    var_13 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    var_14 -= ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) -100676551)) * (arr_4 [i_0])))));
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) var_1)) : (max((640247756), (((/* implicit */int) var_1)))))), (((int) -2147483647))));
                var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 100676566)) + (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) var_7)) : (-8834005971479966315LL))))) << ((((~(var_10))) - (6168963778327714354LL)))));
            }
        } 
    } 
}
