/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88490
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_14))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
        arr_3 [i_0] = (-(((/* implicit */int) arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = arr_0 [i_0] [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 469762048U))));
            arr_10 [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) var_1)))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (!(arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        var_19 = ((/* implicit */unsigned int) (+(var_6)));
                        var_20 += arr_0 [i_2 - 4] [i_2 - 4];
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_2)) ? (arr_12 [i_1] [i_5] [2U]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 2]) / (arr_12 [i_4 - 1] [14U] [i_4 + 2]))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4] [i_2 + 1] [i_2 + 1] [i_1])))))));
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            arr_22 [i_6] [(unsigned short)12] [i_4] [(unsigned short)12] [i_6] = ((/* implicit */long long int) var_14);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_6] [i_1]))))))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_1 [i_1] [i_2]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [(signed char)10] [(signed char)10] [i_2 - 1] [i_1] [i_1] [i_2 + 4]))))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_2 + 2] [i_1])) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) arr_11 [i_1] [i_1]))));
        }
        for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
        {
            var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)9))));
            arr_26 [i_1] [(signed char)2] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 - 1]))) - (max((((/* implicit */unsigned long long int) var_11)), (arr_8 [i_1])))))) ? ((-(arr_17 [i_1] [i_7] [i_7 + 2] [(_Bool)1] [i_1] [i_7] [i_7]))) : (((/* implicit */long long int) (-(var_1))))));
            var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)132))))));
            var_29 = ((/* implicit */unsigned long long int) var_3);
            arr_27 [i_7] [i_7] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(var_1)))), (arr_6 [i_1] [i_7 - 2])));
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) var_3))))));
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
            var_31 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_11 [i_8] [i_1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_32 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_10 + 3] [i_10 + 2])) ? (((/* implicit */int) arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) arr_30 [i_11 + 2] [i_11 + 4] [i_11 - 1]))))), (arr_8 [i_1])));
                            var_33 = ((/* implicit */signed char) var_4);
                            arr_43 [15U] [13ULL] [i_9] [i_8] [i_9] [13ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_7))))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_17 [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [i_11] [i_9])))))) && ((!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_9] [i_10] [i_9] [i_11] [i_10]))))));
                            var_34 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)5712))))))) ? (min((((((/* implicit */_Bool) var_8)) ? (var_2) : (var_2))), (((/* implicit */long long int) ((arr_7 [i_11]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))))) : (((/* implicit */long long int) var_13))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            arr_47 [i_1] [i_12] [i_1] = ((/* implicit */unsigned char) (-(var_13)));
            /* LoopSeq 1 */
            for (short i_13 = 4; i_13 < 13; i_13 += 2) 
            {
                arr_50 [i_13] [i_13 + 3] [i_13 + 3] [8U] = ((/* implicit */signed char) var_1);
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(arr_34 [i_1] [i_13] [i_1]))))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((((/* implicit */_Bool) arr_13 [i_1] [i_13 - 4] [i_13] [i_13 - 4] [i_14] [i_13 + 2])) ? (var_1) : (arr_39 [i_1] [i_1]));
                    arr_54 [i_1] [i_1] [14] = ((/* implicit */unsigned int) var_12);
                    var_37 = ((/* implicit */long long int) (unsigned char)255);
                    arr_55 [i_1] [i_12] [i_13] [i_1] [i_1] = ((/* implicit */short) var_12);
                }
            }
            var_38 = ((((/* implicit */int) arr_31 [i_12] [i_1] [i_1])) >> (((arr_48 [i_12] [i_1] [i_1] [i_1]) + (6803075309235018325LL))));
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned int) var_7);
                    var_40 = ((/* implicit */int) max((var_40), (var_9)));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_15] [i_15] [i_15] [i_16])) ? (((arr_14 [(_Bool)1] [i_15] [i_15] [i_15] [2] [i_16]) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_15] [i_1] [i_16])) : (((/* implicit */int) arr_14 [i_1] [i_16] [i_1] [i_15] [i_1] [i_15])))) : (((/* implicit */int) (signed char)122))));
                }
            } 
        } 
    }
    var_42 &= ((/* implicit */unsigned char) var_6);
}
