/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73386
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
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (signed char)37)) : ((+(((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_0 + 2]))))))));
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) max(((signed char)-120), ((signed char)-38)))), (max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))))), (((min((arr_0 [i_1]), (((/* implicit */unsigned int) (signed char)98)))) << (((((long long int) arr_0 [i_0])) - (460843155LL)))))));
                arr_7 [i_0] [i_1] = (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_1])), (-9223372036854775785LL)))));
            }
        } 
    } 
}
