/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7978
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216)))))) : (((/* implicit */int) var_1))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (~(max((arr_1 [i_1]), (((/* implicit */int) var_1))))))) ? ((-(((((/* implicit */_Bool) 4294967283U)) ? (var_6) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) != (arr_0 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (signed char)51)))), (((/* implicit */int) var_0))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (((~(arr_4 [i_1]))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 += 4294967295U;
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_6))), (max((((/* implicit */long long int) var_0)), (arr_12 [i_4] [i_4 - 1] [i_4] [i_4] [(unsigned char)21] [i_1]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned short) var_1);
}
