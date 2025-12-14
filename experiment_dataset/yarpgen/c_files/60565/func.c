/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60565
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
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 133955584U)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2]))))) ? (((2960851898092305336LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))))) : (((long long int) 2147483639)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned char)0] [i_2] [i_3] = ((/* implicit */signed char) (unsigned char)0);
                                var_18 = arr_0 [i_1];
                                arr_14 [(short)14] [(unsigned char)2] [i_2] [(unsigned char)3] [i_3] = ((/* implicit */signed char) var_8);
                                var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_11 [i_3] [i_3])))))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_3 - 2] [i_3 - 4])) ? (140737487831040LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_3 - 2] [i_3 - 4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) : (var_2))), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned int) (short)0)))))));
}
