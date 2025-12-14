/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62486
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
    var_10 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((max((var_6), (((/* implicit */long long int) var_7)))) << (((((/* implicit */int) ((signed char) var_8))) + (97))))));
    var_11 = ((/* implicit */short) 4288426296U);
    var_12 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) -1290831850897710909LL)))) - ((+(var_5))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_5 [11U] [i_0 + 1] [i_0 - 3] [i_0 - 3])) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        arr_9 [(short)23] [i_0] = ((/* implicit */unsigned long long int) (short)23157);
                    }
                }
            } 
        } 
    } 
}
