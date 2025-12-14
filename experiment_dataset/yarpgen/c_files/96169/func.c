/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96169
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12043338888654491326ULL)) ? (63U) : (4294967237U)))) ? (((arr_3 [i_0] [i_0] [i_2 + 2]) & (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])) >> (((arr_2 [i_2]) - (6847013045144467748ULL))))) - (((/* implicit */int) var_15)))))));
                    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_6 [i_0] [i_2 - 1] [i_2] [i_2 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 3] [i_0] [i_2]))) : (9U)))) >= ((+(arr_7 [i_0] [i_2 - 1] [i_2 + 2] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) ((unsigned int) ((min((((/* implicit */unsigned long long int) arr_11 [i_0] [(_Bool)1] [i_2] [i_4 + 2])), (6403405185055060290ULL))) < (((/* implicit */unsigned long long int) arr_12 [i_2 + 1])))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+((-(((arr_5 [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3 + 3] [i_3]))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_6] [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) (~((~(arr_2 [i_0])))));
                                var_23 = ((/* implicit */long long int) ((unsigned char) (+(6461099679152620301ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_7);
}
