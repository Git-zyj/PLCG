/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74165
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
    var_18 = ((/* implicit */signed char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))), (var_6)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (-(908084644U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_7 [i_0] [10ULL] [i_2] [i_0] = ((/* implicit */_Bool) (-(var_7)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0]))));
                                arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [1] [i_0] [i_2] [i_0] [i_4 + 1] [(unsigned char)8])) ? (arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4 + 1] [i_2]) : (((/* implicit */unsigned long long int) -492283122))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_15))));
                                var_22 = ((/* implicit */short) ((arr_9 [i_3] [i_4 + 1] [i_4] [i_3] [8] [(signed char)12]) != (((((/* implicit */_Bool) -492283123)) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -492283106))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)37))));
                }
                var_23 *= ((/* implicit */unsigned int) -492283123);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [(_Bool)0] [(unsigned char)2] [(unsigned char)5] = ((/* implicit */unsigned long long int) max(((unsigned char)3), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) >= (arr_0 [i_6 - 1] [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)8)) && (((/* implicit */_Bool) arr_11 [i_5 - 1] [i_6 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5 + 1] [i_6 - 1] [i_7] [i_5 + 1] [i_5 + 1] [i_7]))))) : (((((((/* implicit */int) arr_11 [17LL] [i_9])) * (((/* implicit */int) (signed char)0)))) << (((((arr_27 [i_5] [i_6 - 1] [i_6] [i_6 - 1]) ? (492283110) : (((/* implicit */int) var_1)))) - (14)))))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_5 - 1] [i_6] [i_9] [i_7])) && (((/* implicit */_Bool) arr_26 [(_Bool)1] [(_Bool)1] [i_5 - 1] [(_Bool)1] [(_Bool)1] [i_9]))))) | (((/* implicit */int) max((arr_2 [i_5] [i_8] [i_5 - 1]), (arr_2 [i_5] [i_6] [i_5 - 1]))))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_11 [i_5] [i_5]);
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        arr_34 [i_5] [i_7] [i_5] = ((((/* implicit */_Bool) min((arr_1 [i_7]), (((/* implicit */unsigned long long int) arr_32 [i_5 - 1] [i_6 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_32 [i_5 - 1] [i_5])))) : (((((/* implicit */int) (signed char)0)) % (((/* implicit */int) arr_13 [i_10 + 2] [i_7] [i_6] [12U] [i_6] [i_5 - 1] [i_5])))));
                        arr_35 [i_7] [i_5] = ((/* implicit */signed char) min((arr_20 [i_5] [i_6] [i_7] [(signed char)2]), (((/* implicit */unsigned long long int) (signed char)0))));
                        var_26 += ((/* implicit */signed char) max(((+(((/* implicit */int) arr_19 [i_5 - 1] [i_6 - 1])))), (((((/* implicit */int) arr_19 [i_5 + 1] [i_6 - 1])) + (((/* implicit */int) (_Bool)1))))));
                        arr_36 [i_5 + 1] [i_5] = ((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_5] [i_5] [i_7] [i_10])) && (((/* implicit */_Bool) 908084644U)));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            arr_44 [i_11] [(short)22] [i_12 + 2] &= ((/* implicit */long long int) (unsigned char)3);
            arr_45 [i_11] [i_12] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_42 [i_12 - 1] [i_12 + 2]), (arr_42 [i_12 + 3] [i_12 + 3])))), (((long long int) arr_42 [i_12 + 2] [i_12 + 3]))));
        }
        arr_46 [i_11] = ((/* implicit */unsigned long long int) (+(((arr_43 [i_11]) ? (((/* implicit */int) arr_43 [i_11])) : (((/* implicit */int) arr_43 [i_11]))))));
    }
}
