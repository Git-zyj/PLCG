/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67715
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) arr_2 [i_1] [i_1]);
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (0ULL) : (0ULL))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (_Bool)0);
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) var_7)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) (!((_Bool)0)));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(14892436406769931947ULL))))));
    }
}
