/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97194
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [9U])) / (((/* implicit */int) arr_1 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) (unsigned char)243))))) : ((((-(var_11))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))))))));
                    var_17 = ((/* implicit */signed char) min((((unsigned long long int) 576460752303423487ULL)), (arr_4 [i_0 - 3])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned char)8))));
                                var_19 += (!(((/* implicit */_Bool) min((max((4294967295U), (((/* implicit */unsigned int) (unsigned char)18)))), (((/* implicit */unsigned int) arr_2 [i_0] [8ULL]))))));
                                var_20 = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [i_2] [i_2]), (var_1)))) & ((-(((/* implicit */int) arr_2 [i_0] [i_4])))))))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            {
                arr_20 [2ULL] &= ((/* implicit */short) max(((~(((/* implicit */int) arr_18 [8LL] [8LL])))), (min(((~(((/* implicit */int) arr_15 [i_5] [(signed char)4])))), (((/* implicit */int) arr_19 [(unsigned char)4] [i_6 + 2] [i_5]))))));
                var_22 = ((/* implicit */short) max((var_22), (arr_15 [i_5] [(unsigned short)7])));
                var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_18 [i_5] [14]), (((/* implicit */unsigned char) var_0))))), (min((((/* implicit */long long int) var_5)), (-4988334055658098464LL))))))));
            }
        } 
    } 
}
