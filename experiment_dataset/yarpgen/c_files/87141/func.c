/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87141
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
    var_11 = ((int) ((unsigned char) (signed char)-116));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (((long long int) arr_7 [i_0 - 1])))))));
                /* LoopSeq 4 */
                for (short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) arr_6 [(signed char)8] [i_1]);
                        arr_14 [i_1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                        arr_15 [i_3] [i_1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_4] [i_5])) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? ((+(var_6))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_0 + 1]))));
                                var_15 = ((unsigned char) (signed char)-100);
                            }
                        } 
                    } 
                }
                for (int i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_23 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_1] [i_1] [i_7 - 1]))))) > (((((/* implicit */unsigned long long int) var_6)) / (min((arr_16 [i_0] [i_1] [(_Bool)1] [i_7]), (var_9)))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((min((arr_23 [(unsigned short)4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 0U))))), (var_5)))))))));
                        var_17 = ((/* implicit */unsigned char) var_9);
                    }
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) max((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_17 [i_0] [15ULL] [i_1] [15ULL])))))), (max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned short) arr_13 [i_0 - 2] [i_1 + 1] [i_6 + 3]))))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 1) 
                {
                    arr_32 [i_0] [(signed char)12] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!((_Bool)1)))), (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : ((~(max((var_2), (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_8]))))))));
                    arr_33 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)15))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_8])) : (((/* implicit */int) var_0)))), ((~(arr_3 [i_0] [i_1 - 3])))))) : ((+(arr_9 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_39 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_0] [i_1] [i_8 - 4] [i_9] [i_0] [i_10])))))));
                                arr_40 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_9] [i_1] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_22 [i_0] [i_1] [i_8 - 1] [i_9])))));
                                arr_41 [i_1] [i_1] [i_8] [i_8] [i_9] [i_10] [11] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1])) / (((/* implicit */int) arr_8 [(unsigned char)9] [i_1]))))), (5880842426044836202LL))), (((/* implicit */long long int) min((arr_21 [i_1 - 2] [i_1] [i_9] [5U]), (arr_21 [i_1 - 2] [i_1] [i_1] [5U]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    var_19 = ((/* implicit */short) max((arr_18 [i_1] [i_1]), (((/* implicit */long long int) max(((unsigned short)65520), ((unsigned short)0))))));
                    var_20 = ((/* implicit */signed char) ((max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)77))))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1 - 1] [i_1])))));
                    var_21 = ((/* implicit */short) min(((_Bool)1), (((((/* implicit */_Bool) min((arr_24 [i_11] [(unsigned char)12] [i_1] [i_0]), (((/* implicit */unsigned int) arr_38 [i_0] [i_0] [i_1] [i_11] [i_11] [7ULL]))))) && (((/* implicit */_Bool) var_9))))));
                    var_22 -= ((/* implicit */unsigned char) arr_24 [i_11] [i_1] [i_1] [(short)14]);
                }
                var_23 = ((/* implicit */signed char) max((((/* implicit */int) arr_37 [i_0 - 1] [i_0 - 1] [i_1])), (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_36 [i_1] [i_1] [i_1 - 1])), (arr_28 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [10U] [i_1] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
            }
        } 
    } 
}
