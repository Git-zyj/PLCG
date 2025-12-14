/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71815
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
    var_18 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 6; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_14))))) ? (arr_7 [i_1 - 1] [(unsigned short)4]) : (((/* implicit */unsigned int) arr_4 [i_0 - 2])))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min(((short)255), (((/* implicit */short) (signed char)52)))))))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_0]);
                var_19 += 4294967295U;
            }
        } 
    } 
}
