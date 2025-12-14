/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92778
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (-((+(3065503846434068293LL)))));
                arr_6 [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2277570917222933999LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (3065503846434068300LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_2 [i_0]))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (short)-527)) : (((/* implicit */int) (short)-6367)))))))));
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
}
