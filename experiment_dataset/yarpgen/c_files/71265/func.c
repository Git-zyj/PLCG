/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71265
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
    var_12 ^= ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_11))))) ^ (var_0))))));
    var_14 -= ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((int) min((arr_0 [i_0 + 1]), (max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-1)))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & ((-(((arr_7 [i_0] [i_1] [i_2] [5LL]) ? (3271928900978290216LL) : (((/* implicit */long long int) arr_1 [i_2] [1LL]))))))));
                }
            } 
        } 
    } 
}
