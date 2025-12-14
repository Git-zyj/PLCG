/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76917
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
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-((+(((/* implicit */int) ((signed char) arr_0 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2] [i_1])), (arr_3 [i_0] [i_2])))))))))));
                    var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-32281)), (-171522902))))));
                }
            } 
        } 
    }
}
