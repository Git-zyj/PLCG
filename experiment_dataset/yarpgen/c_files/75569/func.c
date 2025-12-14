/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75569
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) var_0)))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0]);
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_23 = ((/* implicit */_Bool) var_7);
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_24 *= var_11;
                        arr_17 [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) var_8);
            var_26 = ((/* implicit */short) (((_Bool)1) ? (8097220364623094500ULL) : (((/* implicit */unsigned long long int) 19U))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned char)24))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((arr_6 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
    }
}
