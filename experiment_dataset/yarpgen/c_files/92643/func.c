/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92643
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) (unsigned char)255))))) ? (2126382228U) : (((/* implicit */unsigned int) arr_6 [i_1 + 2] [(signed char)0] [i_0]))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5057553354285786397LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1 + 1])), (arr_2 [i_1 - 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) -1574545200);
}
