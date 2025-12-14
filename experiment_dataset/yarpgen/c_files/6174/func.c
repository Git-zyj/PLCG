/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6174
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_4))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (short)7008)) : (((/* implicit */int) (unsigned char)2))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) arr_8 [i_0]);
                                var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_4] [i_4]), (arr_6 [i_3] [i_4])))) ? (((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_1])))))) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_1] [i_3])), ((short)-6999))))));
                                var_14 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))))))));
                                var_15 = ((/* implicit */unsigned int) arr_7 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 3]);
                                var_16 *= ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7008)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26860))) : (2873007954U))))))) != (((/* implicit */int) (short)7008)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-7008)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (65535U))) == (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)221)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */unsigned long long int) (~(var_2)))), ((~(var_8))))))))));
}
