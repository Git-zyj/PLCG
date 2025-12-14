/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7406
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    var_12 = ((/* implicit */short) (signed char)-127);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (short)32767)), (max((((/* implicit */unsigned short) (short)32530)), (var_6)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-13175)) : (((/* implicit */int) (signed char)122))))), (((long long int) var_6))))));
                    arr_9 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    arr_10 [(short)1] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (~(max((max((3372091641618200065ULL), (((/* implicit */unsigned long long int) (short)7970)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
                }
            } 
        } 
    } 
}
