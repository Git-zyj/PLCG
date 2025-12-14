/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66279
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
    var_10 = ((/* implicit */long long int) min((var_10), (var_1)));
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)16383)) >> (((((/* implicit */int) (short)26553)) - (26525)))));
        var_13 = ((/* implicit */unsigned char) 4229960751U);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : ((+((-(var_8)))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((arr_3 [i_1]), (((/* implicit */long long int) 65006544U)))) * (((/* implicit */long long int) ((/* implicit */int) ((127LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))))));
        var_14 = ((/* implicit */unsigned short) (~(65006536U)));
        arr_10 [i_1] = var_8;
    }
    for (int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) var_7)))) || (arr_11 [i_2 - 1])))));
        var_15 = ((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2]);
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((var_6) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (min((((/* implicit */int) (_Bool)0)), (var_8))))));
        arr_14 [i_2] [i_2] = ((((/* implicit */_Bool) ((arr_6 [i_2 - 1]) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 2]))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2 - 1]))) : (((((/* implicit */int) arr_6 [i_2 - 1])) | (((/* implicit */int) arr_6 [i_2 - 2])))));
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (signed char)-120))));
            arr_21 [i_3] = ((/* implicit */short) var_8);
            arr_22 [i_3] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_5))))) : (arr_7 [i_4 + 3])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_19 -= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)12601)) ? (((/* implicit */int) (unsigned char)92)) : (2147483647))) != (((/* implicit */int) arr_4 [i_5]))));
            arr_27 [i_3] = ((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3]) + (((/* implicit */int) arr_17 [(_Bool)1] [i_5] [i_5]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_30 [i_6] [i_6] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_6]))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (81967372) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((var_4) ? (65006544U) : (((/* implicit */unsigned int) arr_16 [i_6] [i_6]))))));
                    var_21 *= ((/* implicit */_Bool) var_9);
                    arr_36 [i_3] [i_3] [i_7] [i_8] = ((/* implicit */short) ((2147483647) != (((/* implicit */int) (signed char)-50))));
                }
                for (unsigned char i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    arr_40 [(short)11] [i_3] |= ((/* implicit */_Bool) var_2);
                    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3])) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_7))))) ? (((int) var_8)) : (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))));
                    var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_26 [i_9]));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_33 [i_3] [i_6] [i_3] [i_9 - 1]))));
                }
                var_25 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_29 [i_3] [i_3] [i_3])))));
                var_26 *= ((/* implicit */unsigned char) var_0);
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_39 [0LL] [(signed char)10] [i_3] [i_6] [i_7] [(unsigned char)9]))));
            }
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 4; i_11 < 12; i_11 += 3) 
                {
                    arr_46 [i_11 + 1] [i_11] [i_11] [i_11] [i_3] [i_3] = ((/* implicit */unsigned short) var_9);
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 3; i_12 < 10; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-((~(arr_16 [i_11] [i_3]))))))));
                        arr_51 [i_11] [i_11] = ((/* implicit */_Bool) var_0);
                        var_29 += ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-24673)) + (2147483647))) << (((81967372) - (81967372))))) ^ (((((/* implicit */_Bool) arr_24 [i_11] [i_11] [2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-75))))));
                        arr_52 [i_11] = ((/* implicit */int) var_7);
                    }
                }
                var_30 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)65520)) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) arr_20 [i_6] [i_3]))))));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) / (4229960752U)))));
                    arr_55 [i_6] [(_Bool)1] [(_Bool)1] [i_6] [i_6] [i_3] = ((/* implicit */unsigned long long int) var_3);
                    var_32 = ((/* implicit */unsigned short) ((int) var_5));
                    arr_56 [i_3] [i_6] [i_6] [i_10] [i_13] = ((signed char) var_1);
                    arr_57 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)10875))));
                }
                for (int i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
                {
                    var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */int) (unsigned short)60831)) : (((/* implicit */int) (unsigned short)56885))))) ? (((/* implicit */int) arr_17 [i_3] [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_14 + 1]))));
                    arr_60 [i_14] [i_14] [i_10] [i_6] [i_14] [(_Bool)0] = (!(arr_29 [i_14] [i_14 + 1] [5ULL]));
                }
                for (int i_15 = 1; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    arr_65 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)15))));
                    arr_66 [i_15] [i_6] = ((/* implicit */signed char) arr_41 [i_3] [i_6] [i_3] [i_15 + 1]);
                }
                arr_67 [i_3] [i_3] [(short)6] [i_3] = ((/* implicit */signed char) ((unsigned int) arr_49 [i_10] [i_10] [i_6] [i_6] [(signed char)12] [i_3] [i_3]));
            }
            arr_68 [i_6] = ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)0)) : (-81967372)))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        }
        arr_69 [i_3] [(short)2] = ((/* implicit */int) ((_Bool) var_0));
    }
    for (int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
    {
        arr_74 [i_16] = ((/* implicit */unsigned char) ((arr_73 [11U] [(signed char)6]) < (((/* implicit */long long int) ((/* implicit */int) (short)13034)))));
        arr_75 [i_16] [i_16] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17279))) : (var_2)));
        arr_76 [(short)5] [i_16] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_37 [i_16] [i_16])) : (((/* implicit */int) arr_37 [i_16] [i_16])))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
    {
        var_34 ^= ((/* implicit */long long int) arr_70 [i_17]);
        arr_79 [i_17] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_6 [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_17] [i_17] [i_17]))) : (var_2))));
        arr_80 [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) != ((-(arr_28 [(signed char)11] [i_17] [i_17])))));
    }
}
