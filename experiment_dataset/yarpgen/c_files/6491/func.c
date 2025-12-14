/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6491
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [7] [i_0] = max((((/* implicit */int) (!(arr_0 [i_0])))), (var_0));
        arr_4 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (((long long int) arr_1 [i_0]))));
        var_16 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0 - 2])), (var_5)))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_19 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(arr_13 [i_2] [i_1])));
                        var_17 -= ((/* implicit */unsigned short) (((!(arr_0 [i_1 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) (!(((/* implicit */_Bool) arr_7 [i_4])))))));
                        var_18 = ((_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) arr_5 [i_3]))));
                    }
                    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_2 + 1] [i_2 + 1]))))));
                        var_20 ^= arr_7 [0];
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((((/* implicit */_Bool) arr_12 [i_1] [3] [i_3])) ? (var_0) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 1])))) ^ (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_6] [i_3] [(_Bool)1] [i_1])))))))))));
                        arr_26 [i_2] [i_2 + 1] [i_3] [i_6] = ((/* implicit */int) (unsigned char)86);
                        arr_27 [i_2] = ((/* implicit */unsigned char) var_11);
                        arr_28 [i_1] [i_1] [i_2] [i_1 + 1] [i_1 - 2] = ((/* implicit */int) arr_8 [i_6]);
                    }
                    arr_29 [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_14))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned short) ((int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (int i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (7053264010686094485LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [10ULL])))));
                            var_25 ^= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-27205)) || (((/* implicit */_Bool) var_13))))) : (-279444378));
                        }
                    } 
                } 
            } 
            arr_40 [i_1] [i_7] = arr_23 [i_1] [5U] [i_1] [i_1];
            /* LoopNest 2 */
            for (unsigned char i_11 = 3; i_11 < 8; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_6))));
                        var_27 = ((/* implicit */unsigned char) ((int) arr_46 [i_1 + 1] [i_1 - 2] [i_7 - 1] [i_12]));
                        var_28 -= ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1])))))));
                    }
                } 
            } 
        }
        arr_47 [i_1] = ((/* implicit */int) arr_42 [1] [1] [i_1] [8]);
    }
    for (short i_13 = 1; i_13 < 16; i_13 += 3) 
    {
        var_29 = ((((_Bool) var_9)) ? (((((/* implicit */_Bool) arr_50 [i_13 + 2] [i_13 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_50 [i_13 + 1] [i_13 + 3]))) : ((+(arr_50 [i_13 + 2] [i_13 + 3]))));
        var_30 = ((/* implicit */_Bool) var_13);
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        for (int i_15 = 2; i_15 < 8; i_15 += 2) 
        {
            {
                var_31 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (4172405268852594839LL) : (((/* implicit */long long int) arr_37 [i_14 + 1] [i_15 - 2] [(unsigned short)9] [i_14] [i_14])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [(_Bool)1] [(unsigned char)0] [(unsigned char)0] [i_15] [i_15 - 1] [i_15]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) ^ (((int) 14ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 9; i_17 += 4) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */int) (unsigned char)110);
                                arr_63 [i_14] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_18] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14] [i_15 + 3] [i_14] [i_17]))) : (var_13)))) || (((/* implicit */_Bool) 4294967293U)))) || (((/* implicit */_Bool) var_6))));
                            }
                        } 
                    } 
                }
                arr_64 [i_14 + 1] [(signed char)4] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
    {
        for (unsigned int i_20 = 1; i_20 < 13; i_20 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                {
                    var_35 ^= ((/* implicit */int) (((-(arr_73 [i_19] [i_20] [13LL] [i_21]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) var_13))));
                    arr_75 [i_19] [(_Bool)1] [i_20 + 1] [i_19] = ((/* implicit */unsigned long long int) (~(((unsigned int) (_Bool)1))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((unsigned short) min((max((arr_70 [i_19]), (((/* implicit */int) (unsigned char)156)))), (((/* implicit */int) var_14))))))));
                    var_38 = (!(((/* implicit */_Bool) var_2)));
                    arr_78 [i_22] [i_22] [i_22] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) <= (4294967295U)));
                }
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_3))) / (((/* implicit */long long int) arr_50 [i_20 - 1] [i_20 - 1]))))) ? (max((((/* implicit */long long int) 3377071614U)), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */long long int) arr_70 [i_20])) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_65 [i_20 + 1] [i_20 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) min((((int) var_13)), (((/* implicit */int) arr_74 [i_20 - 1] [i_20 - 1] [i_20 + 1]))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) arr_68 [i_20 - 1]))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */int) ((((var_15) >= (((/* implicit */unsigned long long int) min((2013265920), (((/* implicit */int) var_14))))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
}
