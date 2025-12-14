/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79855
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), (var_4)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 2] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1])) ? (16434985555669953355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2])))))) ? ((+(var_0))) : (((/* implicit */int) max((arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]), (((/* implicit */unsigned short) var_2))))))) : (2013265920)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_1))), (((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_4 - 4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_4] [15] [i_1] [i_1]), ((unsigned short)4))))) : ((~(13U)))))));
                                var_19 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max(((unsigned short)42346), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_20 = ((/* implicit */unsigned char) arr_12 [i_4 - 4] [i_3 - 4] [i_2] [9U] [i_0 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) max((((unsigned short) var_8)), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_2)))))))) : (var_5)));
}
