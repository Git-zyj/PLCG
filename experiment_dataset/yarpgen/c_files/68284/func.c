/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68284
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
    var_17 -= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 1125895611875328ULL))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_3 [i_0 + 2]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-20093)), (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-11446))))))) : (((var_14) & (arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [(unsigned short)10])))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned char)247))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)25))))));
                }
            } 
        } 
    } 
}
