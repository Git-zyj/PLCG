/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63472
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((max((min((var_7), (0U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2406018019U))))))), ((~(((((/* implicit */_Bool) var_4)) ? (2406018017U) : (2406018017U))))))))));
    var_14 = max((((/* implicit */long long int) (unsigned char)49)), (min((((/* implicit */long long int) 2406018044U)), (min((var_9), (((/* implicit */long long int) var_0)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2]);
                    var_16 -= ((/* implicit */unsigned long long int) (short)-26955);
                    arr_7 [i_1] [17U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (var_9)))) && (((/* implicit */_Bool) arr_2 [i_0]))));
                    var_17 = ((long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1]))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) 15985515979283132299ULL);
    }
}
