/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79983
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_8 [i_3]))))))));
                            var_18 = ((/* implicit */unsigned int) var_13);
                            var_19 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 3] [i_2] [i_2 + 3] [i_3])) ? (arr_9 [i_0] [i_0] [i_0] [i_2 + 3]) : (((/* implicit */int) var_13))))));
                            arr_10 [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_1)), (var_14))) < (((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? (((arr_7 [i_0] [i_0] [i_2 + 3] [i_0] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))) : (((var_14) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [19ULL])))))))));
                            var_20 |= ((/* implicit */unsigned char) arr_6 [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (var_15) : (arr_9 [i_0] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_5 [i_1])))) : (((int) min(((unsigned char)255), ((unsigned char)57))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (var_12)))), (((var_2) - (((/* implicit */unsigned int) var_12)))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)209))))), ((unsigned char)57)))))));
    var_23 ^= ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 10; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    var_24 &= ((short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) (unsigned char)47)))));
                    var_25 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_15 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4])), (min((arr_2 [i_4 - 2] [i_4 - 2]), (((/* implicit */unsigned long long int) var_12)))))) < (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)51)))))))));
                    var_26 += ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)24)), (((((/* implicit */_Bool) arr_8 [i_4 + 2])) ? (((/* implicit */int) min((arr_13 [(short)7] [(short)7] [(short)7]), (((/* implicit */short) var_1))))) : (((/* implicit */int) var_0))))));
                }
                var_27 &= ((/* implicit */unsigned short) (~(arr_2 [i_4] [i_5])));
            }
        } 
    } 
}
