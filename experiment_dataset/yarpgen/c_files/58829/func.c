/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58829
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
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((((/* implicit */int) (short)13175)) * (((/* implicit */int) (short)32053)))) : (((((/* implicit */int) arr_5 [i_1 + 1] [i_0])) * (((/* implicit */int) (short)1446))))))));
                            var_15 = ((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))) >= (((((((/* implicit */int) (short)-1450)) | (((/* implicit */int) var_5)))) + (((/* implicit */int) max((((/* implicit */short) (signed char)56)), ((short)-1444)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                            arr_17 [i_0 + 2] [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4 - 2] [i_0 - 2] [i_1 + 1] [i_0 - 1] [i_4 - 2])) ^ (((/* implicit */int) arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 2] [i_5] [i_0 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), (arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 3] [i_5] [i_5])))) : (((((/* implicit */int) (short)-13189)) & (((/* implicit */int) arr_15 [i_4 - 2] [i_0 - 2] [i_0 - 2] [i_1] [(short)3]))))));
                            var_17 *= arr_1 [i_0 + 1];
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((max(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (short)32053)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (short)1446)))))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((int) (signed char)-97))) & (var_2))) - (17394213163482963099ULL)))));
}
