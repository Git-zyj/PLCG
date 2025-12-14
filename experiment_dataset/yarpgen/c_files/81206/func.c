/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81206
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        arr_9 [18U] [i_1] [6ULL] [i_3] = ((/* implicit */long long int) -86731732);
                        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)36))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */int) arr_7 [i_2] [i_4 + 2]);
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (6ULL)));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((signed char) (_Bool)0)))));
                            arr_16 [i_0 + 4] [0] [i_2] [i_2] [i_5] [i_5] [(signed char)13] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3 + 2] [i_5])) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-21780))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) arr_4 [i_1]))))), (max((84137317U), (((/* implicit */unsigned int) (unsigned char)174))))))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_3 - 3] [i_3 - 3])))))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_6] [i_2] [i_2] = ((/* implicit */_Bool) (short)-21780);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)77)))) && (((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (((/* implicit */short) arr_11 [i_0] [i_6 - 1] [i_2] [(signed char)16] [(_Bool)1]))))) * (((((/* implicit */int) var_6)) | (((/* implicit */int) var_9)))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((max((((unsigned int) (unsigned char)146)), (min((4210829984U), (((/* implicit */unsigned int) (short)21778)))))), (arr_19 [i_7] [i_7 - 1] [(_Bool)0] [i_7 - 1])));
                        var_22 = ((/* implicit */_Bool) max(((+((~(((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_2])))))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_22 [19ULL] [i_1] [17ULL] [i_2] [17ULL] [7]))))));
                        var_23 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (min((4494714218332426898LL), (36028659580010496LL))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */int) var_11);
                            var_25 *= ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_8 + 2] [i_0 - 1] [i_0 - 1]))));
                            arr_29 [i_8] [i_8 + 2] [i_1] [i_1] [i_8] = ((arr_7 [i_0] [i_0]) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9U] [i_2]))));
                        }
                        arr_30 [i_0 + 2] [i_1] [i_8] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_0 [(short)19])))));
                    }
                    arr_31 [8] [i_1] = ((/* implicit */int) ((((arr_12 [i_0] [i_1]) ? ((~(arr_25 [0ULL] [11U] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) arr_23 [i_0] [17U] [i_0] [(short)0] [i_0] [i_0 + 4])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)3] [i_2])) | (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_34 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_19 [i_0 - 1] [i_0 + 4] [14] [(unsigned short)0]), (arr_19 [i_0 - 2] [i_0 + 1] [(short)2] [i_0 + 1])))), (max((arr_25 [i_0 + 4] [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 4] [i_0 + 4]), (((/* implicit */long long int) var_6))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) 5916337653141884973LL)) ? (36028659580010500LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8628))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 -= ((/* implicit */_Bool) (+(((/* implicit */int) (short)5725))));
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 3] [17U] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_11] [15U])) : (((/* implicit */int) arr_1 [i_0]))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)47)) ? (4259240333117829807ULL) : (((/* implicit */unsigned long long int) -2147483637))));
                        var_29 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_0 - 2] [(signed char)6] [i_2] [i_12]))));
                        arr_43 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_33 [i_2] [i_0] [i_0 + 3] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_0] [i_0] [i_0 - 2] [i_0 + 2]))));
                        var_30 = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                        arr_44 [(unsigned char)11] [i_2] [i_1] [0U] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1710639387))));
                    }
                    arr_45 [(_Bool)0] [(_Bool)0] [(short)9] = ((/* implicit */long long int) ((((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) | (arr_23 [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0]))) + (min((arr_23 [i_2] [i_1] [i_2] [i_0] [i_1] [(short)11]), (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_14)))) > (((/* implicit */int) max(((signed char)-120), ((signed char)-108))))));
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (short i_14 = 4; i_14 < 9; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) var_5);
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_14 - 3] [i_14 + 1] [i_14 - 3] [i_14 - 2]))))) ? (7251665641874176844LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)30222)), (4294967295U))))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_11))));
}
