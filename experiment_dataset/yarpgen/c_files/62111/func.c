/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62111
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */short) var_6))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))))) : ((+(((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)68))))), (min((((/* implicit */unsigned int) (short)31362)), (((arr_4 [i_0] [i_1] [(signed char)11]) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-750))))) ? (max((9252649400735401361ULL), (((/* implicit */unsigned long long int) ((unsigned short) 4294967292U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                arr_14 [i_4] [(signed char)14] [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [i_0]))))) : (((/* implicit */int) min((var_17), (arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-99)), (arr_11 [i_4] [i_1] [i_4] [i_3] [i_4 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (arr_7 [i_2 + 2] [i_2 + 2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3U), (13U)))) ? (((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                                arr_15 [i_0] [(unsigned char)1] [i_2] [i_2] [6ULL] [i_3] [i_4] = ((/* implicit */short) (-((-(((/* implicit */int) (short)-32767))))));
                            }
                        } 
                    } 
                    var_20 = var_5;
                    arr_16 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) arr_0 [i_0]);
                }
            } 
        } 
    } 
}
