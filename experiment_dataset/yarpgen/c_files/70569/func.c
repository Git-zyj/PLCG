/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70569
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] |= arr_5 [i_0] [i_1] [i_0];
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (((unsigned long long int) max((((/* implicit */unsigned long long int) var_5)), (18446744073709551609ULL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_13))))) ^ (min((18446744073709551609ULL), (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37846))) : (max((var_6), (min((var_9), (((/* implicit */unsigned long long int) var_10))))))));
    var_16 = ((/* implicit */unsigned char) var_1);
    var_17 += ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_13)) : ((~(((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) 2350470598U)) : (0ULL)))))));
}
