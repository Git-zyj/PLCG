/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66114
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_11)))), (min((((((/* implicit */int) (short)24169)) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((var_14), (((/* implicit */short) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27743)))), (((/* implicit */int) (signed char)-1))))), ((-(((((/* implicit */unsigned long long int) var_4)) % (arr_5 [i_2] [i_2] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_2] = ((/* implicit */unsigned long long int) (-((+(arr_1 [i_3 - 2])))));
                                arr_12 [i_0 + 3] [i_2] [i_2] [7] [i_3 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1685201724)))))) & (var_7))) == (((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_11)))) - ((-((-(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
