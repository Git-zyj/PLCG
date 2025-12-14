/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64600
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)10199))));
    var_11 = var_6;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [11] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10))));
                            var_13 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_6 [i_2] [i_2 + 1] [i_2 - 2])), ((unsigned short)40666)))), (((unsigned int) (unsigned char)37))));
                            arr_12 [i_0] [i_3] = ((/* implicit */short) min((2961946324U), (((/* implicit */unsigned int) max(((unsigned short)9), (((/* implicit */unsigned short) (unsigned char)37)))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned short)65526))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((unsigned int) 4294967291U));
}
