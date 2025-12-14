/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72432
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)5])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (var_3)))) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_1 [12]))))) ? (((/* implicit */int) var_5)) : (arr_1 [(signed char)11]))) : ((~(((/* implicit */int) var_4))))));
                    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) var_8))))) ? ((+(var_3))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_5 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1)))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_1 [i_2])))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_1))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 |= ((/* implicit */short) var_0);
                                var_16 &= ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) arr_7 [i_0] [i_1]);
                    arr_14 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_10))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) arr_7 [i_2 - 3] [(unsigned short)12]))))))) : ((-(arr_8 [i_2] [i_2] [(signed char)14] [i_2] [(short)9])))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) var_2);
    }
    var_19 += ((((/* implicit */_Bool) min((((/* implicit */int) max((var_9), (var_0)))), ((-(((/* implicit */int) var_0))))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (var_3) : (var_3))))) : (((/* implicit */unsigned int) var_11)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_3)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> ((((~(((/* implicit */int) var_0)))) + (24100)))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_7)) : (var_1)))))));
}
