/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9804
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_12 ^= ((/* implicit */unsigned long long int) ((_Bool) (signed char)-112));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((long long int) (signed char)124));
                    var_13 += ((/* implicit */unsigned long long int) (+((~(2993482307U)))));
                }
                var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) -5469988147363503334LL)) : (14080868365709719155ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -116530497)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (_Bool)1))))))) : ((~(4365875707999832461ULL)))));
}
