/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85597
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_15)))) <= (((/* implicit */long long int) ((((/* implicit */int) (short)18696)) | (((/* implicit */int) (unsigned char)33)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-6188)) | (((((/* implicit */int) ((unsigned char) 0ULL))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_10))) - (815654442ULL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-((-(arr_3 [i_3] [i_3]))))))));
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_2])), (var_1)))) ? (((/* implicit */int) ((short) arr_4 [i_2]))) : (((arr_4 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (var_15)))));
                    }
                } 
            } 
        }
    }
    var_21 = ((/* implicit */unsigned int) var_3);
    var_22 ^= ((/* implicit */signed char) var_4);
}
