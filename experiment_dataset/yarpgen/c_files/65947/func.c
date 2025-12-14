/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65947
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
    var_20 -= var_5;
    var_21 = var_10;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 &= ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_5 [i_0 + 1] [i_1] [i_2])), (-9212862709748608809LL))) & (((/* implicit */long long int) min((arr_7 [i_1 + 1]), (((((/* implicit */int) (unsigned short)41168)) / (arr_3 [i_0] [i_0] [i_0]))))))));
                        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) -915122918)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_2 [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (18187713345547736510ULL)))));
                        arr_10 [i_3] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(signed char)17]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (short)25501)), (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                arr_15 [i_5] [i_5] [(_Bool)0] [i_0] = ((signed char) ((unsigned int) var_4));
            }
            var_25 = ((/* implicit */short) arr_6 [3] [i_4] [i_0] [9ULL]);
            var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_4] [i_4])))))) : (var_9)));
        }
        var_27 += ((/* implicit */_Bool) arr_1 [(short)5] [i_0]);
        arr_16 [4U] [i_0] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
        {
            var_28 ^= ((/* implicit */unsigned short) arr_0 [i_7 + 4]);
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                arr_25 [i_6] [i_6] [i_8] [i_8] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_7 - 3]))));
                arr_26 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_7 - 4] [i_7 - 1] [i_7 - 3] [i_7 + 4])) <= (((/* implicit */int) arr_13 [i_7 + 2] [i_7 - 1] [i_7 - 4] [i_7 + 2]))));
                arr_27 [4ULL] [(unsigned char)8] [i_6] |= (((!(((/* implicit */_Bool) (signed char)119)))) && (((/* implicit */_Bool) var_14)));
            }
            var_29 = ((/* implicit */_Bool) (short)25501);
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            arr_32 [i_6] [i_9] = ((/* implicit */unsigned short) ((long long int) arr_0 [i_9 - 2]));
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
            {
                arr_37 [i_6] [i_6] &= ((/* implicit */int) ((_Bool) arr_6 [i_6] [i_6] [i_6] [i_6]));
                /* LoopSeq 2 */
                for (int i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 12; i_12 += 3) 
                    {
                        arr_43 [i_10] [i_9 - 1] [i_9 - 1] [i_10] [(_Bool)1] [(unsigned short)11] = ((/* implicit */_Bool) arr_8 [i_6] [i_6]);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_11 - 1] [i_11 + 1] [i_11 + 2])) + (((/* implicit */int) (short)25471))));
                        var_31 = ((/* implicit */_Bool) arr_20 [i_6] [i_12 + 1]);
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        var_32 ^= ((/* implicit */short) (~(arr_38 [i_11 + 1] [(unsigned short)1])));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_6])) * (((/* implicit */int) (short)0))))) ? (arr_20 [i_9 + 1] [i_11 - 2]) : (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_13]))));
                        arr_47 [i_6] [i_10] [i_10] [i_11] [i_13] = ((/* implicit */short) ((((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) -915122918))))) > (67108863)));
                        var_34 = ((/* implicit */_Bool) arr_36 [i_6] [i_10] [i_10] [i_6]);
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_19 [i_6])) ^ (arr_21 [i_10])));
                    }
                    var_36 = ((((/* implicit */_Bool) 11LL)) && (((/* implicit */_Bool) ((unsigned int) arr_11 [i_10] [i_9] [i_10]))));
                    var_37 = 8;
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_40 [i_6] [i_14 + 1] [i_11 - 2] [i_10] [i_14 + 1] [i_9 - 1]))));
                        var_39 *= (!(((/* implicit */_Bool) var_15)));
                    }
                    for (unsigned int i_15 = 1; i_15 < 12; i_15 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) (+(((var_9) | (((/* implicit */long long int) -2147483638))))));
                        var_41 = ((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_6] [i_6] [i_9] [i_10] [i_9] [(short)4]))));
                        var_42 &= ((/* implicit */short) (-(arr_6 [i_6] [i_9 - 2] [i_10] [(short)8])));
                    }
                    arr_53 [i_10] = ((/* implicit */unsigned int) ((arr_12 [i_6] [(signed char)12]) >= (((/* implicit */unsigned long long int) ((arr_29 [(unsigned short)4] [(unsigned short)4]) ? (((/* implicit */int) arr_51 [i_10] [i_10])) : (((/* implicit */int) var_14)))))));
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    arr_56 [i_6] [i_10] = var_7;
                    var_43 = ((((/* implicit */_Bool) arr_48 [i_9 + 1] [i_9 - 2] [i_10])) ? (arr_48 [i_9 - 2] [i_9 - 1] [i_10]) : (arr_48 [i_9 - 2] [i_9 + 1] [i_10]));
                    var_44 -= ((/* implicit */short) ((unsigned long long int) var_6));
                }
            }
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_17] [i_9 - 2] [22]))));
                var_46 = ((/* implicit */unsigned int) 9223372036854775807LL);
            }
            for (short i_18 = 4; i_18 < 11; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_66 [i_6] [i_9] [i_18] [i_19] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_65 [i_18 - 4] [0ULL] [i_18 - 4] [i_18 - 3] [i_9 + 1] [i_9 - 1]))));
                    var_47 = ((/* implicit */unsigned short) var_12);
                }
                /* LoopSeq 3 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_69 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) -117662029906989936LL);
                    var_48 = ((/* implicit */unsigned short) arr_18 [i_18 + 1]);
                    arr_70 [i_6] = ((/* implicit */_Bool) arr_4 [i_6] [i_18 - 2] [i_20]);
                    arr_71 [12] [i_18] [i_9] [(_Bool)0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9 - 1] [i_9 - 1])) ? (arr_1 [i_9 + 1] [i_9 - 2]) : (arr_1 [i_9 - 2] [i_9 - 2])));
                }
                for (short i_21 = 3; i_21 < 12; i_21 += 4) 
                {
                    arr_75 [i_21] [i_21] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1006735775136353929LL))));
                    arr_76 [12LL] [i_21] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_9] [i_21 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_18 - 1] [i_21 - 3] [i_9 - 2]))) : (arr_12 [i_6] [i_9 + 1])));
                }
                for (int i_22 = 2; i_22 < 11; i_22 += 1) 
                {
                    arr_81 [i_18 - 4] [i_18 - 4] [(short)2] [i_18 + 1] [(short)2] [i_18] = ((/* implicit */unsigned char) arr_73 [i_6] [i_9] [i_18 + 2] [i_22 - 2]);
                    arr_82 [5] [(signed char)1] [i_22 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_9 - 1] [i_6] [i_22 - 2] [i_9 - 1] [i_22 + 1]))));
                }
            }
        }
        /* vectorizable */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_49 &= ((/* implicit */short) ((arr_23 [i_6]) != (((/* implicit */long long int) var_17))));
            /* LoopSeq 2 */
            for (unsigned short i_24 = 0; i_24 < 13; i_24 += 2) 
            {
                var_50 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 1332492017U)) && (((/* implicit */_Bool) (short)22958))))) + ((+(((/* implicit */int) (unsigned short)2016))))));
                arr_88 [i_24] &= ((/* implicit */long long int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (signed char)116))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_91 [i_6] [i_23] [i_23] &= ((/* implicit */unsigned long long int) var_1);
                var_51 += ((/* implicit */unsigned int) arr_30 [i_23] [i_23] [i_25]);
                arr_92 [i_6] [i_6] [i_23] = ((/* implicit */short) ((arr_21 [i_23]) + (arr_21 [i_23])));
            }
        }
        arr_93 [i_6] = arr_61 [i_6] [i_6] [i_6];
    }
    var_52 ^= ((/* implicit */int) var_16);
}
