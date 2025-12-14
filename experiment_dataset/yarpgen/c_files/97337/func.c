/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97337
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
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            var_11 -= ((/* implicit */short) (~(max((((/* implicit */int) arr_3 [i_1 + 2] [i_0 - 1])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)31284)) : (((/* implicit */int) arr_2 [i_0 - 3] [i_1]))))))));
            var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 16183492611961124097ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)34265)) : (((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 + 3]))) : (3434832393U))))));
            arr_4 [i_0] [i_1] [i_0 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) min((arr_1 [i_1]), (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)18]))))))));
            var_13 &= ((/* implicit */unsigned int) (_Bool)1);
        }
        var_14 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (9646743238288718102ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)46912), (((/* implicit */unsigned short) arr_3 [9LL] [9LL]))))))), (((/* implicit */unsigned long long int) var_9))));
        var_15 &= ((/* implicit */unsigned int) arr_2 [i_0 - 2] [i_0 - 1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2175832862U)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2])) == (((/* implicit */int) (unsigned char)23)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [(short)17]))) + (arr_0 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_2])), (var_10))))) : (arr_1 [i_2]))) : (((var_1) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_9 [i_2] = ((/* implicit */unsigned short) min((min((arr_1 [i_2]), (((/* implicit */long long int) arr_6 [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_5))))) ? (min((((/* implicit */int) var_2)), (10))) : (((/* implicit */int) (unsigned short)34265)))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) arr_5 [9ULL] [i_3]);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_17 |= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34252))));
                            var_18 |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_5 + 1] [i_5 + 1] [i_2] [i_5 + 2])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)33318)))) : (((/* implicit */int) var_5)))));
                            arr_21 [i_2] [i_3] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_26 [i_2] [i_2] [i_3] [i_4] [i_5] [i_7] = 1741970519U;
                            var_19 = ((/* implicit */signed char) max((((((/* implicit */int) arr_10 [i_5 + 1])) >> (((/* implicit */int) ((((/* implicit */_Bool) 33)) && (((/* implicit */_Bool) -6699297311496056152LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [6LL] [6LL] [i_5 - 1] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_5]))) : (arr_25 [i_2] [i_3] [i_3] [i_2] [i_5 + 1] [i_7])))))))));
                        }
                        var_20 = (unsigned char)4;
                    }
                } 
            } 
        } 
        arr_27 [0LL] |= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2])))));
        var_21 += ((/* implicit */unsigned char) (short)-13);
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (-9185554134504114936LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) arr_28 [i_8]))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned char) ((max((arr_34 [i_8] [i_9] [i_10] [i_12]), (((/* implicit */long long int) arr_30 [i_8])))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_12] [i_9])))))));
                                var_24 = ((/* implicit */short) ((((unsigned long long int) arr_29 [i_8] [i_9])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_8] [i_9] [i_8] [i_11] [(short)7])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 2) 
                        {
                            var_25 = max((((/* implicit */long long int) min(((unsigned short)32218), (((/* implicit */unsigned short) arr_42 [i_8] [i_13] [i_10] [i_8] [i_9] [i_8]))))), ((((!(((/* implicit */_Bool) var_3)))) ? ((~(arr_34 [(unsigned short)23] [i_13] [i_13] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_8] [i_9] [i_10] [i_10] [i_13] [i_14]))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((short) arr_41 [i_10] [i_10])))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            arr_45 [i_8] [i_10] [i_10] [i_10] [i_8] = arr_30 [i_8];
                            var_27 = ((((((/* implicit */_Bool) arr_41 [i_10] [i_13])) && (((/* implicit */_Bool) 21LL)))) ? (((/* implicit */long long int) var_8)) : (((long long int) arr_44 [i_8] [i_8] [i_10] [i_13] [i_15])));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8615186799998034702LL)) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9]))))) : ((+(((/* implicit */int) arr_39 [i_8] [i_9] [i_8] [i_10] [i_13] [i_15]))))))) : ((+((-(arr_40 [i_8] [i_8] [i_8] [i_8])))))));
                            var_29 = ((/* implicit */short) (-(((int) 3322816291U))));
                        }
                        var_30 &= ((/* implicit */short) ((((/* implicit */long long int) max((((int) var_0)), (((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) arr_32 [2U] [18LL] [2U])) ? (arr_34 [(unsigned char)18] [i_9] [i_10] [i_13]) : (((/* implicit */long long int) ((arr_29 [i_13] [i_10]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34252))))))))));
                        arr_46 [11LL] [i_9] [i_8] [i_13] = ((/* implicit */short) max((max((((/* implicit */unsigned int) ((arr_43 [i_8] [i_9] [i_9] [(short)0] [i_13]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)64507))))), (arr_41 [i_9] [i_10]))), (885454120U)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_8] [i_8])) ? ((~(((/* implicit */int) arr_32 [i_8] [i_10] [i_16])))) : (((/* implicit */int) arr_30 [i_9]))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_47 [i_8] [i_9] [1U]))))) ? (((((/* implicit */_Bool) arr_38 [i_8])) ? (((/* implicit */long long int) max((arr_50 [i_8] [i_9] [i_10] [i_16]), (((/* implicit */unsigned int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)2702)) ? (arr_34 [i_8] [i_8] [i_8] [(_Bool)1]) : (9066032309933638762LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_8])))))))))));
                        var_33 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / (((arr_43 [i_8] [i_8] [(_Bool)1] [0U] [i_16]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8] [i_8] [i_16]))))))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_41 [i_10] [i_16])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_53 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned int) arr_31 [i_8] [i_9]));
                            var_34 = ((/* implicit */unsigned char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_8] [i_10] [i_17])))));
                            var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_35 [i_8] [i_9])) ? (arr_50 [i_17] [i_8] [i_9] [i_8]) : (3870220341U)))));
                            var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_31 [i_8] [i_16])) ? (((unsigned long long int) arr_42 [(unsigned char)22] [i_9] [i_16] [i_16] [i_17] [i_16])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_8] [i_9] [i_10] [i_16] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) < (max((arr_41 [i_9] [i_10]), (((/* implicit */unsigned int) (unsigned short)62834))))))))));
                        }
                        for (short i_18 = 2; i_18 < 22; i_18 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) var_5);
                            var_38 = ((/* implicit */unsigned long long int) max((min((6617500231497566390LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-126))))))), (-9066032309933638763LL)));
                            arr_58 [5U] [i_8] [(_Bool)1] [i_8] [i_18 - 1] = ((/* implicit */unsigned int) -5271576136680809698LL);
                        }
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8580329505751078601LL)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_56 [9LL] [i_9] [i_10] [i_10] [i_8])) : (((/* implicit */int) var_5)))) : (((int) var_2))))) ? (arr_34 [i_8] [i_9] [13LL] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8])) ? (8580329505751078601LL) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_8] [i_9] [i_9])))))) ? ((~(((/* implicit */int) arr_33 [i_8])))) : (((((/* implicit */_Bool) -9223372036854775781LL)) ? (((/* implicit */int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_51 [i_8] [i_9] [i_10] [i_16] [i_16])))))))));
                    }
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned char) (~(6109643907673935239ULL)));
    var_41 = ((/* implicit */unsigned int) var_10);
}
