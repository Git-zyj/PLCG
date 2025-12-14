/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77609
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0 - 1] [i_1] [i_1] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                arr_18 [i_0] [i_1] [(signed char)10] [i_3] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(arr_3 [i_3])))) ? (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29314))) : (2077453837U))) : ((~(arr_9 [i_0])))))));
                                arr_19 [i_4] [i_1] [i_2] [i_1] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4 + 4] [i_4 + 2] [(signed char)10])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]))))) ? ((~(arr_1 [1LL] [i_3]))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [i_1 + 3] [i_0])) ? (arr_17 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                            }
                            arr_20 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_17 [i_0] [i_1]) : (arr_17 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)3] [i_0]))))) : (arr_0 [i_0 - 1])));
                        }
                    } 
                } 
                arr_21 [(short)18] [i_0] = ((/* implicit */short) arr_13 [19U] [i_1] [i_1 + 2] [i_1 + 1]);
                arr_22 [i_1] [i_0 - 1] = ((/* implicit */signed char) arr_10 [i_0] [i_1 + 3]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_1), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_5))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_9))))) : (max((((/* implicit */unsigned long long int) var_6)), (var_3))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -2147483632)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32762)))), (((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-19892))));
}
