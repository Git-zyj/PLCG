/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80870
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
    var_14 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))) : (251658240U)))))) ? (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (min((var_10), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24490)) ? (2) : (((/* implicit */int) (short)-24597))))))) : (((/* implicit */unsigned long long int) (+(4294967295U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (signed char)-17);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3])) & (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 1]))))) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_4 [i_0] [i_1])))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 2383133854U)) ? (var_1) : (((/* implicit */long long int) var_4)))) : ((+(var_1)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)65))))) : (arr_2 [7ULL] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) ((max((arr_0 [i_1 + 2] [18U]), (-215997463))) / (((((/* implicit */int) ((signed char) var_10))) - (((/* implicit */int) arr_3 [i_2] [i_2]))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1])) && ((!(((/* implicit */_Bool) arr_9 [18ULL] [i_1])))))))) % ((~((+(4294967280U)))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (unsigned short)24491))));
                    var_19 = var_13;
                }
            }
        } 
    } 
}
