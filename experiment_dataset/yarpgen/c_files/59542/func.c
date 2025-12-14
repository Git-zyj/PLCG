/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59542
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
    var_20 = ((/* implicit */unsigned int) (~(max((max((((/* implicit */unsigned long long int) var_16)), (var_15))), (((/* implicit */unsigned long long int) var_14))))));
    var_21 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)5829))))))), ((~(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0] [i_1])))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_3 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_2])) ? (arr_3 [10U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_4] [i_3]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_4])), (max(((unsigned short)46369), (((/* implicit */unsigned short) (short)-5829)))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_11 [i_3] [i_3 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_11 [i_4] [i_3 + 1] [i_1 + 3] [i_1 + 1] [i_1 + 1])))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) (-(min((min((arr_9 [i_1] [i_1 + 1] [i_1] [i_2]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [8ULL] [i_0] [i_2])) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1])) : (arr_5 [i_0] [i_1] [i_2] [i_1 + 1]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1] [i_1 + 2]))))), ((+(arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1])))));
                        arr_16 [13LL] [i_1] [i_1] [i_5] [i_2] [i_5] = ((/* implicit */short) arr_10 [i_1] [i_2] [i_1]);
                        arr_17 [i_0] [i_1 + 2] [i_1] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1])), (min((((/* implicit */long long int) arr_8 [i_5] [i_5] [i_5] [i_1 - 1])), (arr_15 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3])))));
                    }
                }
            } 
        } 
    } 
}
