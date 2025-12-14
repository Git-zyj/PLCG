/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79812
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */int) var_7)) >= (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1])) != (((/* implicit */int) (unsigned short)1)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) (!((_Bool)1))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-85)) + (((/* implicit */int) arr_2 [(short)8] [i_2 + 4]))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0 + 1] [i_2] [i_2] [i_2 + 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423487LL)) ? (889178937) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) 8062669210829235371LL)) : (var_2))) : (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) : (15439015440693095711ULL))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (var_4)));
}
