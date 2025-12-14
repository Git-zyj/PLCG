/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94098
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
    var_15 = ((/* implicit */unsigned char) min(((+(((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((((((/* implicit */_Bool) var_2)) ? (5141501218650104713LL) : (((/* implicit */long long int) 4192420234U)))) + (((/* implicit */long long int) -1016260425))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_17 = var_3;
                        var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)188)));
                    }
                }
            } 
        } 
    } 
}
