/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91720
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) -2126942587)), (var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)42551)) >= (((/* implicit */int) (unsigned char)165)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17205))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])) ? (arr_1 [i_0 + 2] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49757)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((3819265311U), (1017059003U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)15779)) : (((/* implicit */int) var_4))))) ? (((var_13) % (var_12))) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */int) (short)16475)) : (((/* implicit */int) (signed char)-12)))))));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15779))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) 2137224282)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-1422768755) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 182257940)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_10)))) ? (((((/* implicit */_Bool) 2716613263U)) ? (var_9) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17205)) ? (2453804440U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))))))))));
                    var_23 -= ((/* implicit */int) (unsigned short)48345);
                    var_24 = ((/* implicit */unsigned int) min((var_24), (max((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_3 [i_0] [i_1] [i_1 + 1]))), (((((3277908281U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15779))))) * (3277908303U)))))));
                }
            } 
        } 
    }
}
