/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8445
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((-1283061979), (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 - 1])))))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) 979064907))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) >= (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) (unsigned char)55))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_9 [i_2] = ((((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1])))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) || (((/* implicit */_Bool) var_12))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */_Bool) min((((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) -979064904)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-23)))))), (((/* implicit */long long int) 979064907))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_0 [i_4] [i_4]))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */int) ((((/* implicit */long long int) ((var_13) & ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)117))))))) != (((long long int) (+(((/* implicit */int) var_7)))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((var_5) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))) : (max((((/* implicit */int) var_7)), ((+(((/* implicit */int) (unsigned char)63))))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((var_16), (((/* implicit */short) var_2)))))));
    var_24 = var_4;
}
