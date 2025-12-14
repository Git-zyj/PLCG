/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57266
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((2944258620902823883LL), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_4 [i_1] [i_0])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (352222541))))));
                    var_17 = ((/* implicit */_Bool) (signed char)-26);
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) arr_6 [i_0] [i_1])))))))));
                    var_19 = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)26))));
    var_21 = ((/* implicit */unsigned short) (signed char)54);
    var_22 = ((/* implicit */signed char) (~(max((((((/* implicit */int) (unsigned short)11231)) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (signed char)18))))))));
}
