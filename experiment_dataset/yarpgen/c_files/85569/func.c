/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85569
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
    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_17))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) (+(((-8126078556570409816LL) | (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1532248763221198666LL)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [6LL] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)245))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (470919980266332327ULL)))));
            }
        } 
    } 
}
