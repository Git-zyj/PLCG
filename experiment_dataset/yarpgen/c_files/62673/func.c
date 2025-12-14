/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62673
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
    var_18 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                var_19 = ((/* implicit */short) max((((arr_1 [i_1 - 2] [i_1]) / (((16140084911350419792ULL) * (7524724223397072376ULL))))), (((/* implicit */unsigned long long int) min((arr_0 [i_1 + 1] [i_1]), (arr_0 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) / (7524724223397072376ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-35)) : (var_3)))) ? (((var_4) | (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
