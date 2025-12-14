/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87529
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 *= (_Bool)1;
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) ((747606660U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 6; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_4] [i_3 + 4] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51516))) + (962946044U)))));
                        arr_20 [i_2] [i_2] [2] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) | (((/* implicit */int) max((var_8), (arr_16 [i_2 - 1] [i_4] [i_4]))))));
                    }
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((unsigned int) (+(((/* implicit */int) var_2))))), (max((((/* implicit */unsigned int) (unsigned char)93)), (962946044U))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-(min((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_8)) - (51011))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-48)) > (1156664596))))))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        arr_32 [i_8] = ((/* implicit */short) ((var_12) + (((/* implicit */long long int) arr_27 [i_6] [i_8] [i_6]))));
                        arr_33 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */short) ((var_13) > (((/* implicit */long long int) arr_31 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_9]))));
                        arr_34 [i_6] [i_8] [i_8 + 2] [i_6] [i_9 - 1] = ((((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_9 - 3] [i_9] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)));
                    }
                    arr_35 [i_6] [7U] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (arr_26 [i_6] [i_6] [i_8] [6LL]))))) <= (((arr_26 [4LL] [(short)11] [i_7] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                    arr_36 [i_8] [(_Bool)1] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_6] [i_6]))))) < (arr_31 [i_7] [i_7] [i_7] [i_8 - 1] [i_7]))))));
                }
                for (short i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (int i_12 = 2; i_12 < 15; i_12 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((arr_28 [i_12] [i_11] [i_10] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_41 [i_6] [i_7] [i_10] [i_10] [i_12 - 2])) - (46))))))), (((/* implicit */long long int) 3332021251U))));
                                var_18 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)100))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_6] [i_6])) + (((/* implicit */int) arr_39 [i_6] [i_7])))))))) : (((/* implicit */int) ((_Bool) (unsigned short)40720)))));
                                arr_48 [i_6] [i_12] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 3332021252U)) && (((/* implicit */_Bool) -18273110))))))));
                                var_19 *= ((/* implicit */unsigned char) ((min((arr_40 [i_10 - 1] [i_12] [12] [i_11]), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -1327181688))))));
                            }
                        } 
                    } 
                    arr_49 [i_6] [i_7] [i_10] = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_30 [i_6] [i_10 - 1])), (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) arr_23 [1] [(_Bool)1]))))))));
                }
                arr_50 [i_7] [(unsigned short)11] = ((/* implicit */int) max((7U), (((/* implicit */unsigned int) arr_24 [i_6] [i_7]))));
            }
        } 
    } 
}
