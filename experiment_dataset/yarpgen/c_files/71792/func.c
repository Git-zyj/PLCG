/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71792
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1])) / (((/* implicit */int) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
                                var_17 ^= ((/* implicit */signed char) ((unsigned short) ((arr_10 [i_0] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_4] [i_2 - 1]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_4] [i_2 - 1])))));
                                var_18 = ((/* implicit */_Bool) (-(max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_0)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (var_6))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(unsigned char)8] [0ULL] [i_2] [i_1] [0ULL] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_3 [(signed char)1] [(signed char)1])), (var_14))))) : (((((/* implicit */_Bool) min((var_7), (var_8)))) ? (((unsigned long long int) arr_6 [(unsigned short)10])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)8])))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned long long int) min((max((arr_15 [i_6 + 1] [i_6 - 1] [i_5] [i_6 - 1] [i_5] [i_2 + 2] [i_0]), (arr_15 [i_6] [i_6 - 1] [i_5] [i_6 - 1] [i_5] [i_2 - 1] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_2 + 1] [i_6 - 1] [i_2 + 1] [i_2 + 1] [i_2])))))));
                                var_21 = ((signed char) max(((signed char)-1), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) != (1759609491U))))));
                            }
                        } 
                    } 
                }
                arr_17 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_9 [i_0] [i_1] [i_0] [i_1])))), (min((var_14), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
}
