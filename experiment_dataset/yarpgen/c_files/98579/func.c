/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98579
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
    var_19 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) (~(var_12))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)65519), (((/* implicit */unsigned short) (short)-5707))))) < (((/* implicit */int) var_13))))), ((-(var_6))));
        var_20 = ((/* implicit */long long int) (-((+(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (1U)))))));
        var_21 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_0 [i_0])), (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (1U))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) 1U))))) < (min((arr_5 [i_1]), (((/* implicit */int) ((_Bool) arr_5 [i_1])))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_8 [i_1] [i_1])))))));
            var_23 -= ((unsigned char) (!(arr_3 [i_2])));
            var_24 = ((/* implicit */unsigned char) var_4);
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2])) > (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) > (((/* implicit */int) arr_7 [i_2]))))))))));
        }
        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)18]))) > (((long long int) arr_4 [(unsigned char)16] [i_1]))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1694)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) ? (((/* implicit */int) ((short) (unsigned short)65519))) : ((+(((/* implicit */int) arr_8 [i_1] [i_1])))));
    }
    var_28 -= min((((((/* implicit */long long int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-7035504567207147406LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_5))))));
    var_29 = ((/* implicit */long long int) ((_Bool) ((_Bool) var_14)));
    var_30 = ((/* implicit */_Bool) (~(-7035504567207147406LL)));
}
