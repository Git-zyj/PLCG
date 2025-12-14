/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6858
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
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */_Bool) (+(((/* implicit */int) (((~(((/* implicit */int) (unsigned short)16301)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
                arr_5 [i_0] [i_1] [i_0 - 3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -439729099))))), (min((((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */signed char) var_14))))), (((unsigned int) var_0))))));
                var_21 = ((/* implicit */signed char) ((int) ((unsigned int) (-(arr_1 [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_4);
}
