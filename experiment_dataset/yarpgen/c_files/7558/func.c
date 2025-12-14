/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7558
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) >= ((~(var_7)))));
    var_13 &= ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_2 [i_2]);
                    arr_9 [i_0] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) & (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2164286633U)));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_6 [i_1 - 1]))));
                    arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2164286633U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5463)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1]))))) : (max((2164286636U), (2130680650U)))))) ? (((/* implicit */int) (unsigned short)25793)) : ((((!(((/* implicit */_Bool) 4294967295U)))) ? (((((/* implicit */int) (unsigned short)39744)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_2]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1] [(unsigned char)11] [i_2])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [(_Bool)1])))) : (((((/* implicit */_Bool) (unsigned short)25793)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)-8343)) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4])), (66846720U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5463)))))) : (var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
