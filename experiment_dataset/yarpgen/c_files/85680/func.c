/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85680
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_17 -= ((/* implicit */signed char) (-(3160593115U)));
        arr_3 [10LL] = ((/* implicit */int) max((((min((((/* implicit */unsigned long long int) 1134374167U)), (arr_1 [i_0]))) | (((/* implicit */unsigned long long int) 1134374196U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(short)9])))))));
        var_18 = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_19 -= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [(short)2])) > (((/* implicit */int) (unsigned char)237))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                arr_10 [i_3] [i_3] [i_3 + 1] [(unsigned char)6] = ((((arr_9 [i_3] [i_2] [i_1]) >= (((/* implicit */long long int) 1134374217U)))) ? ((-(4095U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 3160593094U)) <= (arr_9 [i_1] [i_2] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_20 += ((/* implicit */unsigned long long int) var_10);
                    arr_14 [i_1] [i_2] [i_3] [i_1] = (-((+(arr_9 [i_1] [(signed char)7] [i_4]))));
                }
            }
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) arr_11 [i_2] [i_2] [i_5] [i_1] [i_6]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_23 [i_1] [i_2] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [(_Bool)1]))))) && (((/* implicit */_Bool) arr_17 [i_2] [i_7]))));
                        var_22 ^= ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_5] [i_2] [i_7])) ? (((/* implicit */int) arr_12 [i_1] [12LL] [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_1] [i_2] [9LL] [9LL] [i_1] [i_7] [i_7])));
                        arr_24 [(short)6] [i_6] [(signed char)2] [(_Bool)1] [i_2] [i_1] [i_1] = (unsigned char)50;
                        var_23 = ((/* implicit */signed char) ((arr_20 [i_5] [i_2] [i_1] [i_6] [i_7]) < (((/* implicit */int) (unsigned char)18))));
                        var_24 = ((/* implicit */unsigned char) arr_12 [i_7] [i_1] [i_2] [i_1]);
                    }
                    var_25 += (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) >= (arr_16 [i_6] [7])))));
                    arr_25 [i_1] [i_2] [i_2] [i_5] [(short)2] = ((/* implicit */unsigned int) arr_5 [11U]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    var_26 = ((((/* implicit */_Bool) 13463803985354326183ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (17188574560216659937ULL));
                    arr_28 [i_1] [(unsigned char)2] [i_5] [i_8 + 2] = ((/* implicit */short) arr_9 [i_1] [i_1] [(signed char)12]);
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_8] [i_2] [2LL] [i_2] [i_5] [i_8 + 3])) | (((/* implicit */int) arr_13 [i_8] [i_2] [i_5] [i_8] [i_1] [i_8 + 3]))));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_28 = ((/* implicit */int) (unsigned char)28);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) % (arr_18 [i_9] [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_34 [i_9] [i_9] [i_9] [9U] [(signed char)3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_9] [(unsigned short)7] [i_9]))) : (1326751423U)));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_10))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((/* implicit */int) ((-9057561410214435058LL) < (((/* implicit */long long int) 2477105597U)))))));
                        var_32 *= ((/* implicit */short) -9057561410214435069LL);
                    }
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) 3160593080U))));
                }
            }
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((arr_33 [i_2] [i_2] [i_1] [i_2] [i_2] [i_1] [i_1]) << (((((((/* implicit */int) (unsigned char)49)) << (((((/* implicit */int) arr_15 [(short)9] [(signed char)11] [(short)9])) - (189))))) - (6422528))))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 4; i_11 < 12; i_11 += 2) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (arr_6 [i_2] [i_11 - 4])));
                var_36 = ((/* implicit */unsigned int) (signed char)42);
                var_37 ^= ((/* implicit */short) ((((2661397574U) % (((/* implicit */unsigned int) arr_26 [i_2])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((3160593082U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_2] [i_2] [i_11])))))))));
                var_38 = (-((+(((/* implicit */int) (short)-13087)))));
            }
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                arr_41 [0] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_38 [i_1] [i_2] [i_12])))))));
                var_39 = ((/* implicit */unsigned char) arr_4 [i_2]);
                /* LoopSeq 4 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)63771)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) <= (((/* implicit */int) (short)3983)))))));
                    var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_2] [i_13 - 1] [i_13 - 1] [i_13]))));
                    var_42 = ((/* implicit */long long int) (unsigned char)27);
                    arr_44 [(short)10] [i_2] [i_1] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) ((arr_17 [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))));
                }
                for (short i_14 = 3; i_14 < 9; i_14 += 4) 
                {
                    var_43 = ((/* implicit */unsigned char) (~(arr_38 [i_1] [i_2] [i_12])));
                    var_44 = ((/* implicit */unsigned char) var_11);
                    var_45 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [9] [i_12] [i_12] [i_12])) / (((/* implicit */int) (unsigned char)18))));
                    arr_47 [i_12] [i_1] [i_12] [i_14] [i_14 - 2] [i_1] = ((/* implicit */unsigned int) 4619436919857574564ULL);
                }
                for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_46 = ((/* implicit */unsigned char) -1924948015488349602LL);
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [9ULL] [7ULL] [10U])) && (((/* implicit */_Bool) (signed char)-48))));
                }
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 4) 
                    {
                        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) var_0))));
                        arr_55 [i_1] [i_1] [4LL] [i_1] [(signed char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_52 [i_1] [i_12] [6LL]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
                    }
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        arr_58 [i_1] [i_1] [i_12] [i_2] [i_18] [(short)11] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)12))));
                        var_49 = ((/* implicit */unsigned char) var_9);
                    }
                    for (long long int i_19 = 3; i_19 < 11; i_19 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((var_16) << (((/* implicit */int) (_Bool)1)))))));
                        arr_62 [i_16] [i_16] [i_16] [i_16] [i_19] [(_Bool)1] = ((((((/* implicit */int) (unsigned char)12)) | (arr_7 [i_1] [i_19]))) ^ ((~(((/* implicit */int) arr_56 [i_1] [i_1] [(short)10] [i_19] [(short)10])))));
                        var_51 = ((/* implicit */int) 1676898521U);
                        arr_63 [i_16] [i_2] [i_19] [i_16] [i_12] [i_19] [(signed char)6] = ((/* implicit */unsigned int) ((arr_57 [i_1] [i_12] [i_19 - 1] [i_2] [i_19 + 2] [i_19]) && (arr_57 [6LL] [i_16] [i_19 + 1] [i_12] [i_19 + 1] [i_19])));
                    }
                    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        arr_66 [i_2] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */long long int) arr_7 [i_1] [i_20]);
                        var_52 += ((/* implicit */short) var_8);
                    }
                    for (long long int i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        arr_71 [(unsigned char)12] [i_1] [i_2] [i_12] [4ULL] [4ULL] = ((/* implicit */int) 6864276122511925250LL);
                        var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_12] [i_16] [i_21]))));
                    }
                }
            }
            for (unsigned int i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                var_54 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [(short)3] [i_22]))) ^ (((((/* implicit */unsigned long long int) 260099234)) | (var_16)))));
                /* LoopNest 2 */
                for (signed char i_23 = 1; i_23 < 11; i_23 += 4) 
                {
                    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 2) 
                    {
                        {
                            var_55 += ((/* implicit */short) arr_18 [i_1] [i_2]);
                            var_56 = ((/* implicit */signed char) arr_51 [i_24] [i_23] [i_2] [i_1]);
                            arr_79 [12] [(signed char)6] [i_23] [i_24] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (-260099234) : (((/* implicit */int) arr_19 [i_1] [6ULL] [i_22] [i_22] [(_Bool)1] [i_22] [i_24]))));
                        }
                    } 
                } 
                var_57 = ((/* implicit */unsigned short) var_5);
                var_58 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_2] [i_1] [i_2] [i_2] [i_22]))) & (1633569722U)));
            }
            for (signed char i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                var_59 *= ((/* implicit */_Bool) (unsigned char)207);
                var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) (unsigned char)40))));
            }
            arr_83 [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_70 [(signed char)6] [i_1] [i_1] [i_2] [i_1] [i_2])) < (((/* implicit */int) (_Bool)0))))) + ((+(arr_33 [i_2] [i_2] [8ULL] [(short)1] [i_1] [(short)1] [i_1])))));
        }
    }
    var_61 = ((/* implicit */short) var_13);
    var_62 = ((/* implicit */signed char) (_Bool)1);
}
