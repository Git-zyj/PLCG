/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96544
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) 56525362U))) : (var_4))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 4918712055225349506LL)) && (((/* implicit */_Bool) max((9223372036854775779LL), (4918712055225349501LL))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) arr_9 [i_4] [i_1 - 1]);
                                arr_11 [i_4] [i_4] [i_2] [(unsigned short)3] [(unsigned short)15] [i_1 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_4 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_1 [i_3])))) : (arr_8 [11U])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_0 [5LL])) ? (arr_4 [i_3] [i_2] [i_1]) : (arr_10 [i_0] [i_0] [i_2] [i_2] [i_4] [i_3] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 133693440)))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [1] [i_3] [1]), (arr_6 [12] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [(unsigned short)10] [(unsigned short)10] [14LL] [(unsigned short)10] = ((/* implicit */int) 0LL);
                                var_15 |= ((/* implicit */signed char) min(((~(min((((/* implicit */long long int) arr_7 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0])), (9223372036854775779LL))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (arr_17 [i_6] [i_5] [i_0] [i_0] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */long long int) var_5))))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))), ((-(min((((/* implicit */int) var_2)), (var_4))))))))));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1] [i_1] [i_0] [i_2] [i_2] [i_2])) ? (arr_15 [i_1]) : (((/* implicit */int) (_Bool)1)))))) ? ((+(min((((/* implicit */unsigned long long int) arr_6 [5U] [5U] [5U])), (arr_9 [i_2] [i_1]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_13 [i_0] [i_1] [(_Bool)1])) + (((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1] [i_0] [i_0] [i_0])))), (((int) (unsigned short)28672)))))));
                    var_18 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_7);
}
