/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66836
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
    var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_10))))) && ((!(((/* implicit */_Bool) var_12)))))) ? (((/* implicit */unsigned int) max((max((var_13), (var_3))), (((/* implicit */int) var_8))))) : (var_14)));
    var_16 &= ((/* implicit */unsigned char) max((var_13), (((/* implicit */int) var_10))));
    var_17 |= ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) min(((~(((((/* implicit */unsigned int) -2092047003)) | (var_5))))), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))));
                    var_18 = min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_14))))))), (min((arr_5 [i_2 - 1] [(unsigned char)10] [i_2 - 1]), (arr_5 [i_2 + 1] [i_1] [i_2]))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_1] [i_2 - 1])), (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_2 + 1]) : ((+(((/* implicit */int) arr_2 [i_2] [i_0])))))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */int) arr_1 [i_0])), (var_3))))));
                }
            } 
        } 
    } 
}
