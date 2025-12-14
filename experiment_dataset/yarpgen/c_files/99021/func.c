/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99021
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_7);
                arr_7 [12ULL] |= ((/* implicit */unsigned char) max((min((arr_2 [i_0] [i_0 + 2]), ((((_Bool)0) ? (2287828610704211968ULL) : (arr_2 [i_0] [(unsigned char)10]))))), (16158915463005339648ULL)));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((arr_2 [i_0] [i_1]) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)21331)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) / (16158915463005339656ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
    var_21 = ((/* implicit */long long int) max((max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) var_17)))), (((/* implicit */int) var_11))));
    var_22 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1)))))))));
}
