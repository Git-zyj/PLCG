/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57479
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) var_0))) : ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_9)) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */signed char) ((unsigned char) var_10));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))));
                        arr_12 [i_0] [8U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_9 [i_2 + 4] [i_2] [i_2 + 3] [i_3])))) ? (((/* implicit */unsigned int) max((arr_9 [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 2] [i_2] [i_2 + 2] [i_2])))) : (((unsigned int) arr_2 [i_2 + 2] [i_0]))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        var_15 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_4])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_0])))))) : ((+(arr_7 [i_2 - 3] [i_2 + 1] [i_0] [(signed char)4]))));
                        arr_17 [i_0] [i_0] [i_2 - 3] [i_0] = ((/* implicit */unsigned int) (+((~((~(((/* implicit */int) arr_14 [i_0] [i_2 - 1] [(unsigned char)1] [(unsigned char)1]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [5U] [i_1] [5U] [i_0] [5U])) : (((/* implicit */int) var_6))))));
                        var_17 = ((/* implicit */signed char) (!(arr_13 [i_0] [i_0] [i_2] [(short)7])));
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_2 + 2])) : (((/* implicit */int) var_0))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((arr_13 [i_0] [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [(signed char)13]))))) ? (((/* implicit */int) (!(arr_8 [i_0] [i_1])))) : ((-(((/* implicit */int) var_0))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_18 *= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_13 [(unsigned char)8] [i_6] [i_0] [i_2 + 2]))))));
                        var_19 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? ((+(((/* implicit */int) arr_3 [i_1] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [15LL] [i_1])))))));
                        arr_24 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_20 [i_2 + 4] [(signed char)3] [i_2] [(signed char)3] [(unsigned short)7] [(unsigned short)7]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                        arr_27 [i_0] = (!(((_Bool) arr_26 [i_0] [i_0] [i_2 - 1] [i_0])));
                    }
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                        arr_30 [i_0] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_10 [7] [i_0] [i_0] [i_0] [i_0])))) || (((_Bool) arr_26 [i_0] [i_0] [i_2] [i_0]))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_7 [i_2 - 3] [i_1] [i_1] [i_2 - 3]))) ? ((+(arr_23 [i_2] [i_2 - 2] [(unsigned char)4] [i_2 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_1] [i_8] [8U] [i_1])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_2 - 1])) : (((/* implicit */int) arr_22 [i_1] [i_8] [i_8] [i_1]))))))))));
                        arr_31 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_2 - 2] [i_8]))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0])), (var_11))))) : (((arr_13 [i_2 - 2] [i_0] [i_0] [(signed char)6]) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_8)))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((unsigned char) arr_18 [(unsigned char)3] [i_2 + 1] [(unsigned char)3])), (arr_18 [i_0] [i_0] [i_2 - 3]))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max(((+((+(var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))));
    var_25 = ((signed char) (-(((/* implicit */int) ((_Bool) var_8)))));
}
