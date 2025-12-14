/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84330
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) var_7))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) (unsigned char)77))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_3 [10LL] [10LL] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)6] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [(unsigned short)12]))))))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 234881024))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3])) ^ (((/* implicit */int) arr_14 [i_3]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)51))))) : (((unsigned int) arr_14 [i_3])));
                var_19 = ((/* implicit */signed char) (short)8446);
            }
        } 
    } 
}
