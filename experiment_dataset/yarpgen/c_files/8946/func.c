/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8946
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_5))));
    var_12 |= ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(short)14] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((5798048328183469170ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)59023)), (arr_3 [i_2]))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) min(((+(((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) (short)1792)) - (1792))))))), (var_5)));
                    arr_8 [9U] [i_0] [i_1] [(unsigned short)10] = ((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_3] [i_2] [(unsigned char)6] [i_0] [10] = (~(((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4680))))));
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)45))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */long long int) ((min((((/* implicit */int) (signed char)124)), (16383))) | (((((/* implicit */int) var_10)) + ((+(((/* implicit */int) (unsigned short)48781))))))));
}
