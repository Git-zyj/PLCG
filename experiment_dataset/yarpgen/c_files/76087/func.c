/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76087
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */short) var_8);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_16 -= ((/* implicit */int) ((arr_1 [i_2 + 2] [i_3 - 1]) / (arr_1 [i_2 - 1] [i_3 + 1])));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((arr_3 [i_2 - 1]) != (((unsigned int) arr_6 [i_0] [i_0] [i_2] [i_3 + 2])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (unsigned short)2047))));
    }
    var_19 += ((/* implicit */_Bool) var_8);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((min((min((var_7), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (0) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) (!(((_Bool) var_5)))))))));
}
