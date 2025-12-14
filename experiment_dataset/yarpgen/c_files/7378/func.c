/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7378
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
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) != (max((((/* implicit */int) arr_2 [i_1])), (2)))))));
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53)))))) : (max((((/* implicit */unsigned long long int) (-(32256)))), (arr_8 [i_2] [i_1] [i_1] [i_0])))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) 0U)), (4237573843605618781ULL))))));
                }
            } 
        } 
    } 
}
