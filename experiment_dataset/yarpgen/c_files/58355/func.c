/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58355
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) max((var_14), (var_15))))), (arr_3 [i_0])));
                    var_19 = ((/* implicit */int) (signed char)-94);
                    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9999559859918957665ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)))) ? (((long long int) max((((/* implicit */int) (short)771)), (var_6)))) : (((/* implicit */long long int) ((((int) (short)-771)) / (((((/* implicit */int) (unsigned char)68)) - (var_16))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */short) 323854642U);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 3])))) ? (2618408602U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_4] [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0]))));
                    var_24 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [i_0 - 2]))));
                }
                var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_8 [i_0 - 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) arr_8 [i_0 - 2])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) var_10)) / (var_7))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_6)) : (3971112634U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
