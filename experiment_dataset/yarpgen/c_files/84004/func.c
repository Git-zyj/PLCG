/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84004
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
    var_12 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)21659)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)21659))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_6)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)163))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1])) == (((/* implicit */int) var_9))))))) : (min(((~(((/* implicit */int) (unsigned char)3)))), (((((/* implicit */_Bool) 2254108U)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_7)))))))))));
            }
        } 
    } 
}
