/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61996
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
    var_12 *= ((((/* implicit */_Bool) ((unsigned char) var_8))) || (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65534)))) << (((17983081579618869002ULL) - (17983081579618869000ULL)))))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 3427316986U))) ? (max((((/* implicit */unsigned int) ((6943314708273955731ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))), (arr_4 [i_0] [i_0]))) : (max((max((867650307U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) arr_1 [i_0 + 1]))))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (867650320U)))) : (((unsigned long long int) arr_2 [i_1 + 1]))));
            }
        } 
    } 
}
