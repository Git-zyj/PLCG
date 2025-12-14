/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84841
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
    var_18 = (unsigned char)109;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_2) : (var_4))) & (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (var_11))))) << ((((((!(((/* implicit */_Bool) var_2)))) ? ((+(-9223372036854775807LL))) : ((+(arr_1 [i_0] [i_0]))))) - (5285327389102333556LL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_4 [i_1] [i_2] [i_1]);
                        arr_13 [i_0] [i_2] [i_2] [i_3] = min((max((arr_9 [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 2]), (((/* implicit */long long int) ((unsigned char) arr_6 [i_2] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))));
                    }
                }
            } 
        } 
    } 
}
