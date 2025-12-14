/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74537
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
    var_15 = ((/* implicit */unsigned short) ((7561778722171450044LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((var_1) >= (var_8))))))))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_10))) || (((/* implicit */_Bool) ((unsigned long long int) 2812496677U)))))), (var_10)));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [(short)2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */int) max(((signed char)46), (((/* implicit */signed char) (_Bool)1))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) max((arr_1 [i_0 + 2] [i_0 - 3]), (arr_1 [i_0 + 1] [i_0 - 2]))));
        arr_4 [i_0] [5LL] = ((/* implicit */unsigned char) ((max((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_6))))))) / (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (var_5)))) - (((unsigned long long int) 10490017646195235501ULL))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) (+(((/* implicit */int) ((short) 1682017119U)))));
            var_19 ^= ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1])))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_20 ^= ((/* implicit */_Bool) arr_7 [(unsigned short)7] [i_2] [i_0]);
            arr_11 [i_0] [i_0 - 3] [3ULL] = ((/* implicit */int) ((signed char) ((signed char) (_Bool)0)));
        }
        for (long long int i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 3; i_4 < 9; i_4 += 2) 
            {
                var_21 = ((/* implicit */short) min((min(((-(((/* implicit */int) arr_5 [8U])))), (((/* implicit */int) ((_Bool) arr_6 [7ULL]))))), (((((/* implicit */_Bool) (short)0)) ? (0) : (-1380419724)))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 3]))) : (arr_8 [i_3 - 2]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(signed char)2] [(signed char)2]))))) ? (max((var_5), (-1692463467))) : (((/* implicit */int) arr_17 [i_5] [i_3] [i_3 + 1] [i_3])))), (((/* implicit */int) ((((int) -2070821778)) == ((-(((/* implicit */int) arr_12 [i_4] [i_0])))))))));
                            arr_22 [i_5] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0 - 1]) : (arr_19 [i_0] [i_3] [i_4] [i_5] [i_6] [i_5])))))) <= ((~(0ULL)))));
                        }
                    } 
                } 
                arr_23 [i_4 - 2] [i_3] [i_3] [(signed char)9] |= ((/* implicit */_Bool) arr_21 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_0] [i_0 - 3]);
            }
            for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
            {
                arr_26 [i_0] |= (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_19 [i_3] [i_7] [i_0] [i_3 - 2] [i_0] [i_3]))) ^ (((var_7) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-15))))))));
                var_24 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_4)))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (unsigned short)46052);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_30 [i_0 + 3] [i_0] [i_0 + 4] [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [6ULL] [8] [i_9])))))))) > (((((/* implicit */int) ((((/* implicit */_Bool) 2070821752)) || (((/* implicit */_Bool) var_5))))) % ((+(((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */int) (-(arr_15 [(signed char)3] [i_3] [i_10] [i_3])));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(24U)));
                var_27 *= ((/* implicit */unsigned long long int) -7369388496474485282LL);
                arr_35 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_30 [i_0] [(_Bool)1] [i_10] [i_10] [i_0])), (arr_28 [i_0] [i_0] [i_0 + 4])))));
                var_28 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((short) ((var_4) >> (((((/* implicit */int) var_6)) - (17472)))))))));
            }
            arr_36 [0] = ((/* implicit */unsigned long long int) (((+(var_5))) / ((~(((/* implicit */int) arr_5 [i_0 - 1]))))));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [(unsigned short)7])) ? (((/* implicit */int) arr_37 [i_11])) : (((/* implicit */int) arr_37 [i_11]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11]))) + (arr_38 [i_11])))));
        arr_40 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_41 [(short)20]))))) ? (((((/* implicit */_Bool) arr_41 [i_12])) ? (((/* implicit */int) max((var_14), (((/* implicit */short) var_3))))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) max((arr_42 [(_Bool)1] [22U]), (((/* implicit */unsigned char) (signed char)90))))) / (((/* implicit */int) arr_42 [i_12] [(short)15]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (unsigned short i_16 = 1; i_16 < 23; i_16 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (unsigned short)65529);
                            arr_54 [i_13] [(_Bool)1] [i_14] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                            arr_55 [i_12] [i_12] [i_16] [i_12] [i_12] [i_12] [0ULL] = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
            } 
            arr_56 [i_12] [i_12] = ((/* implicit */unsigned int) ((unsigned short) 9LL));
            /* LoopNest 3 */
            for (unsigned short i_17 = 1; i_17 < 24; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_65 [i_12] [(_Bool)1] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((signed char) arr_45 [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1]));
                            arr_66 [i_12] [7U] [17] [i_18] [i_19] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_52 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17] [i_17 - 1] [i_13])) : (((/* implicit */int) arr_52 [i_17 - 1] [i_17 - 1] [i_17] [i_17] [i_17 - 1] [i_13]))));
                            arr_67 [i_19] [i_12] [7LL] [i_17 + 1] [i_13] [(unsigned char)3] [i_12] |= (-(((var_11) ? (((/* implicit */int) arr_43 [i_12] [i_13])) : (((/* implicit */int) var_11)))));
                        }
                    } 
                } 
            } 
            var_31 = ((((_Bool) var_2)) ? (var_4) : (1365283329U));
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        {
                            arr_76 [(_Bool)1] [i_13] [i_20] [i_21] = ((/* implicit */short) ((((((arr_70 [i_12] [i_13] [i_21] [i_22]) - (((/* implicit */long long int) ((/* implicit */int) (short)0))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9))))) - (1)))));
                            arr_77 [(unsigned char)5] [i_22] [i_22] [i_12] [i_12] [i_13] [i_12] = ((/* implicit */signed char) (-(arr_57 [i_12] [i_12] [i_12] [5ULL])));
                            arr_78 [(short)18] = ((/* implicit */int) var_2);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned char) ((arr_68 [i_12] [(signed char)12] [i_20] [i_13]) ? (arr_74 [i_12] [i_12]) : (((/* implicit */unsigned long long int) var_4))));
                var_33 = ((/* implicit */unsigned int) arr_64 [i_20] [i_12] [i_12] [i_20] [i_12] [i_12]);
            }
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_24 = 2; i_24 < 24; i_24 += 2) 
                {
                    var_34 = ((/* implicit */int) (-(arr_46 [i_24 - 1])));
                    arr_85 [i_12] [(unsigned char)20] = ((/* implicit */unsigned long long int) var_13);
                    var_35 |= ((/* implicit */int) (short)1931);
                }
                var_36 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_63 [i_23] [i_13] [i_12]))) <= (var_1)));
                /* LoopSeq 1 */
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    var_37 = ((/* implicit */short) (~(0ULL)));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_25] [i_23] [i_13] [i_12])) ? (arr_70 [21U] [21U] [i_23] [i_25]) : (arr_70 [i_12] [i_12] [i_12] [i_12])));
                    var_39 = ((unsigned short) var_9);
                }
            }
        }
    }
}
