/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96013
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
    var_13 = ((/* implicit */signed char) ((unsigned int) var_9));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((((unsigned short) max((var_1), ((unsigned short)65535)))), (((unsigned short) (!(arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14680))) : (8739931563391888528LL)))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_8)))) ? ((((!(((/* implicit */_Bool) var_8)))) ? ((+(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5))))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_2])))));
                    arr_15 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0])), (min((((((/* implicit */_Bool) (short)-30882)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (1666304620))), (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2] [i_0])) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
}
