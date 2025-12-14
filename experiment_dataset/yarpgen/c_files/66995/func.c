/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66995
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) 8063801076590815438ULL)) ? (((/* implicit */unsigned long long int) 2630355622U)) : (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) - (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (arr_0 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */short) var_4);
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65534)) && ((_Bool)1)))) != (((/* implicit */int) ((arr_15 [i_6] [i_6] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) <= (arr_15 [i_6] [i_4 - 2] [i_6] [i_6] [i_4 - 2] [i_4 - 2]))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_6] [i_4 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)41888)) : (((/* implicit */int) (_Bool)1))));
                                var_15 = ((((((/* implicit */int) arr_6 [i_4] [i_6])) <= (((/* implicit */int) arr_17 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 1])) > (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_4 - 1] [i_3])) || (((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_4 - 1] [i_5]))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */signed char) arr_5 [i_4 - 2] [i_2]);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1])) - (((((/* implicit */int) arr_6 [i_4 + 1] [i_4])) >> (((((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1])) - (23836))))))))));
                }
            } 
        } 
    } 
}
