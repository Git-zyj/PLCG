/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85281
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (var_8))), (((/* implicit */int) var_5))))) : (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = max((((/* implicit */unsigned char) arr_2 [i_1])), (((unsigned char) arr_2 [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [(unsigned char)2] [i_2] [7LL] = ((/* implicit */unsigned short) ((unsigned char) (+(max((var_9), (((/* implicit */unsigned int) arr_2 [i_0])))))));
                            var_23 = ((/* implicit */unsigned char) 1071645100311527227ULL);
                            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1071645100311527227ULL))))) : (((/* implicit */int) var_13)))));
                            arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_19))))) ? (((((/* implicit */_Bool) (unsigned short)7125)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (((int) max((((/* implicit */unsigned long long int) (_Bool)1)), (1636071628255794466ULL)))) : (((/* implicit */int) ((unsigned short) var_3)))));
            }
        } 
    } 
}
