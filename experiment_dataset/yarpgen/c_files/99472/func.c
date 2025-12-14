/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99472
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_1])))) ? (((/* implicit */int) ((2122948989868998188ULL) <= (70368744177663ULL)))) : ((-(((/* implicit */int) var_0))))))), ((-(((arr_0 [(signed char)11] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))))))));
                arr_6 [(unsigned short)5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2122948989868998188ULL))));
                var_17 = ((/* implicit */unsigned short) (signed char)-77);
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13678)) << (((4051821792661159800ULL) - (4051821792661159784ULL)))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51840)) / (((/* implicit */int) var_14))))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
}
