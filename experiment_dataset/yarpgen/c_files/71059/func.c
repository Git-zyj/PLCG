/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71059
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_7 [12] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_1] [i_1]))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_6 [i_3] [i_1] [i_0] [i_0]);
                    arr_10 [i_3] [i_1] = ((/* implicit */unsigned long long int) var_7);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((arr_2 [i_4]), (((/* implicit */unsigned char) var_1)))))))), (arr_6 [i_4] [i_0] [i_1] [i_0])));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max(((!(((((/* implicit */_Bool) (signed char)119)) || (((/* implicit */_Bool) (unsigned char)154)))))), (((var_0) < (arr_3 [i_1]))))))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_5 [(unsigned char)12] [(unsigned char)12]) : (((/* implicit */int) var_5))))) != (min((((/* implicit */long long int) var_16)), (var_9)))))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_6))));
                var_27 = ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)98)) << (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) : (arr_8 [i_0] [i_1] [i_1]))) + (max((((/* implicit */unsigned long long int) arr_12 [i_0])), (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_28 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_6 + 1] [i_7 - 1])) && (((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_6 + 1] [i_7 - 1])))) ? (((/* implicit */int) arr_6 [i_7] [(signed char)18] [i_6 - 2] [i_7 - 1])) : (((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_6 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_6 [i_5] [i_7 - 1] [i_6 + 1] [i_7 - 1])) : (((/* implicit */int) arr_6 [i_5] [i_7] [i_6 - 2] [i_7 - 1]))))));
                    var_29 = ((/* implicit */_Bool) var_0);
                    arr_21 [i_5] = ((/* implicit */_Bool) max((min((arr_19 [i_7 - 1] [1U] [i_6 + 1]), (arr_19 [i_7 - 1] [i_6] [i_6 - 2]))), (((/* implicit */unsigned int) ((_Bool) var_18)))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_6 - 1] [i_5])))), ((+(arr_8 [i_6] [i_6] [i_6 + 1]))))))));
                }
            } 
        } 
    } 
}
