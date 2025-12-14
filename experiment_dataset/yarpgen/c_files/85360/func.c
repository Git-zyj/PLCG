/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85360
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = min((((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_4))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_17 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [(unsigned char)6] [(unsigned char)6] [i_2] [(unsigned char)6] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) || ((_Bool)1)));
                        var_19 = (!(((/* implicit */_Bool) (+(0ULL)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */signed char) ((var_9) >= (max((var_1), (((/* implicit */int) var_13))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_10))));
    var_23 = ((/* implicit */unsigned short) ((long long int) 2019053256U));
}
