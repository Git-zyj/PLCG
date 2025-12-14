/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77538
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
    var_16 &= ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) min(((unsigned short)63021), ((unsigned short)63047)))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)15);
                var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */int) (unsigned short)61981))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 3] [i_0 + 1]))) : (((-9223372036854775805LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42927))))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((min((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) 9223372036854775799LL)))), (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned long long int) 3849662202U)) : (7ULL))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)16] [(signed char)16]))));
                arr_9 [i_1] [i_1] = ((/* implicit */short) min((min(((unsigned short)61981), (max(((unsigned short)2476), (((/* implicit */unsigned short) arr_3 [(short)0] [(short)0] [i_1])))))), ((unsigned short)33547)));
            }
        } 
    } 
}
