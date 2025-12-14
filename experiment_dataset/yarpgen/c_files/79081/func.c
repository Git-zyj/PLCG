/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79081
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [3U] &= (short)-27273;
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [6U]))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (signed char)34);
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)25))), (((unsigned char) ((((/* implicit */int) (unsigned short)54341)) / (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 *= ((/* implicit */_Bool) min((6960263733619958105ULL), (((/* implicit */unsigned long long int) (short)27274))));
            var_22 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (!(arr_4 [i_1] [(signed char)24])))), (arr_7 [i_2])))), (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_23 = (!(((/* implicit */_Bool) (unsigned short)11281)));
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)50951))));
            var_25 = ((/* implicit */unsigned short) ((unsigned int) (signed char)-94));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 3; i_4 < 24; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) arr_15 [i_1] [(signed char)9] [i_3] [i_4] [i_3] [i_6] [i_6]);
                            arr_17 [i_1] [i_3] [i_4] [i_5] [i_6] = var_0;
                            var_27 = ((/* implicit */_Bool) (signed char)127);
                            var_28 += ((/* implicit */short) (unsigned short)50951);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 67108848U)) ? (((/* implicit */int) (_Bool)1)) : (1689993646)));
                        }
                    } 
                } 
                arr_18 [i_4 - 3] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_4 - 3] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (1282254996U)));
            }
        }
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_7 [i_1]), (arr_7 [i_1])))) == (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_27 [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) var_16);
            var_30 -= ((/* implicit */signed char) var_12);
            var_31 = ((/* implicit */unsigned int) (signed char)93);
        }
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) arr_16 [i_10 - 1] [i_11 - 1] [i_11] [i_11] [i_11 + 1] [i_11] [i_11]);
                        arr_35 [(signed char)18] [i_11] [i_11] [i_10] [i_9] [i_7] = ((/* implicit */_Bool) min((arr_13 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 + 1]), (((/* implicit */int) min((arr_22 [i_9] [i_11 - 1]), (((/* implicit */unsigned char) var_18)))))));
                    }
                } 
            } 
            arr_36 [i_7] [i_9] [i_9] = (!((_Bool)1));
            var_33 |= ((/* implicit */long long int) (~(arr_13 [i_7] [i_7] [i_7] [i_9] [i_9])));
            var_34 = ((/* implicit */short) (_Bool)1);
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (long long int i_15 = 1; i_15 < 21; i_15 += 4) 
                        {
                            {
                                arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_15 + 2])) ? (((/* implicit */int) arr_7 [i_15 - 1])) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (signed char)109))));
                                var_35 = ((/* implicit */unsigned long long int) -2147483647);
                                arr_47 [i_7] [i_12] [i_13] [i_7] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_15 + 1] [i_15 + 2])) + (((/* implicit */int) min((arr_42 [i_13 + 1]), (arr_42 [i_13 + 1]))))));
                                var_36 = ((/* implicit */unsigned short) arr_26 [i_13 + 1] [i_14] [i_15 + 1]);
                                arr_48 [(unsigned char)7] [i_7] [(unsigned char)7] [i_13] [8U] [14ULL] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_10 [i_7])) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (_Bool)1)))), (((2147483647) - (((/* implicit */int) (unsigned char)0)))))) == (((/* implicit */int) (short)-27788))));
                    var_37 = ((/* implicit */int) ((unsigned int) ((unsigned int) 0U)));
                }
            } 
        } 
        var_38 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)238))));
        var_39 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(_Bool)1] [(_Bool)1] [i_7] [i_7] [i_7]))) | (((unsigned int) (unsigned char)0))))));
        var_40 = ((/* implicit */unsigned int) 98304);
    }
    var_41 = ((/* implicit */unsigned char) var_5);
}
