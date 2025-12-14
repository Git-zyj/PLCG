/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87194
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_8 [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) var_11);
                        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_2 - 1]))))));
                        arr_9 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) (((_Bool)0) ? (arr_5 [6LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_2])))));
                        arr_10 [i_3] [(short)3] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42195))) : (var_2))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) max(((~(3927659398U))), (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)39)), ((short)3021)))))))));
    }
    var_16 = ((/* implicit */int) var_11);
}
