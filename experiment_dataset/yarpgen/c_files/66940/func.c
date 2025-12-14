/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66940
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((max((max((var_17), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-35)), (var_3)))))), (max((var_14), (((/* implicit */unsigned int) var_11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = (~(((((/* implicit */_Bool) ((arr_6 [i_3] [i_4] [i_2] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-21740)))))) ? (((/* implicit */int) ((signed char) arr_5 [i_4] [(unsigned char)19]))) : (((/* implicit */int) ((short) arr_2 [i_0] [i_1]))))));
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_9 [i_0] [i_2 + 1] [i_3])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_0] [i_2 + 2] [17ULL] [i_2])), (arr_6 [i_0] [i_2 + 2] [i_2 - 1] [i_2])))) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_2])))) : (((/* implicit */int) min((arr_8 [i_0] [i_2 + 1] [i_2 - 1]), (arr_8 [i_0] [i_2 - 1] [i_2]))))));
                }
            } 
        } 
    } 
}
