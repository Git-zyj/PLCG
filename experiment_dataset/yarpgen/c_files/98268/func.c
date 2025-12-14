/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98268
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
    var_18 = ((/* implicit */short) (-((-(((/* implicit */int) ((unsigned char) var_3)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)3])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : (arr_1 [i_0 - 1])))) ? ((-(((arr_2 [i_0]) / (((/* implicit */int) var_8)))))) : (((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2])) / (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(unsigned short)10]))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1])))) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (arr_0 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_2] [i_4] [3ULL] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) | (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (arr_9 [i_0] [i_0] [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_4])))))));
                                arr_17 [11ULL] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) max((max((arr_12 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 2]), (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned char)14] [i_0 + 2]))), (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (1702147478U)))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((max((((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)(-127 - 1)))))), ((~(var_13))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)78)))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_1))))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_14))));
}
