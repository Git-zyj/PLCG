/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62792
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
    var_15 += ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) 30LL))) + (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)31416))))))) - (max((((((/* implicit */_Bool) var_9)) ? (10LL) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1961528949)) < (var_11)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_14), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1])))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])), (-8723483431076255307LL)))))) ? (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_4 [i_0]))))))) : (((((14560553650634800200ULL) << (((((/* implicit */int) var_2)) + (150))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) == (((/* implicit */int) arr_3 [i_2])))))))))))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((-486707867), (((/* implicit */int) (unsigned char)54))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((max(((-2147483647 - 1)), (((/* implicit */int) arr_1 [i_0])))) | (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (150)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */signed char) arr_12 [i_3]);
        arr_14 [i_3] = ((/* implicit */signed char) (+(((arr_10 [i_3] [i_3]) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) < (((/* implicit */int) (unsigned char)48))))))))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32767)) - (((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */int) arr_10 [i_5] [i_4])) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)31)), (arr_1 [i_3])))))))));
                        var_20 *= (unsigned short)0;
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_16 [i_5] [i_4] [i_5]))) % ((~(arr_12 [i_5])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_5 [i_5] [i_6] [i_3]))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_6])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_15 [i_4]))));
                            arr_24 [i_4] = ((/* implicit */int) ((long long int) arr_20 [i_6] [i_5]));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_12))))) ? ((-(arr_12 [i_5]))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_12)))))));
                            arr_25 [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)19840))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((short) arr_28 [i_8 - 1] [i_8 + 1] [i_5] [i_8 - 1] [i_8 - 1])))));
                            arr_29 [i_3] [i_4] [i_8] [i_8] [i_8 + 1] [i_4] = ((/* implicit */short) ((arr_27 [i_3] [i_8 - 2] [i_8 - 2] [i_8] [i_8]) - (arr_27 [i_4] [i_8 - 1] [i_4] [i_4] [i_4])));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((long long int) arr_0 [i_6])) > (((/* implicit */long long int) 2931254152U))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            arr_34 [i_4] = ((/* implicit */unsigned char) arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            arr_35 [i_5] [i_3] [i_5] [i_5] [i_9 + 2] |= ((/* implicit */signed char) (-(max((var_11), (((/* implicit */unsigned int) (~(arr_27 [i_9] [i_4] [i_5] [i_4] [i_3]))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_28 [i_9 + 1] [i_9 + 1] [i_4] [i_9 + 1] [i_4]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9 + 1]))) : (((/* implicit */unsigned long long int) max((max((arr_16 [i_3] [i_3] [i_4]), (((/* implicit */long long int) arr_26 [i_4] [i_4])))), ((~(var_3))))))));
                        }
                    }
                } 
            } 
            var_27 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3])) * (((/* implicit */int) arr_3 [i_3]))))), (((arr_16 [i_3] [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            var_28 = ((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_3] [i_3])) <= (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_20 [i_3] [i_4])))))) ? (((((/* implicit */_Bool) (unsigned char)139)) ? (min((-604727793), (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_20 [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_4])) - (((/* implicit */int) (signed char)-63))))) < (arr_33 [i_3] [i_4]))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_20 [i_3] [i_3])))) ? (((/* implicit */int) arr_20 [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_10]))))))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            arr_44 [i_4] [i_4] [i_4] [i_11] [i_12] [i_10] |= ((/* implicit */unsigned long long int) ((arr_33 [i_10] [i_3]) < (((/* implicit */long long int) (-(443630739))))));
                            var_30 |= ((/* implicit */unsigned long long int) arr_41 [i_3] [i_3] [i_10] [i_11] [i_3]);
                        }
                    }
                } 
            } 
            arr_45 [i_3] |= ((/* implicit */unsigned int) max((((unsigned short) 1416022383U)), (((/* implicit */unsigned short) arr_11 [i_3] [i_4]))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
        {
            arr_48 [i_13] = ((/* implicit */signed char) ((((((/* implicit */int) arr_37 [i_3] [i_3] [i_13])) - (((/* implicit */int) arr_37 [i_13] [i_13] [i_3])))) - (((((/* implicit */int) arr_37 [i_3] [i_13] [i_3])) + (((/* implicit */int) arr_37 [i_3] [i_3] [i_3]))))));
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17010))) : (var_4))))))));
            /* LoopNest 3 */
            for (signed char i_14 = 1; i_14 < 8; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (long long int i_16 = 2; i_16 < 7; i_16 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_5))));
                            var_33 = ((/* implicit */long long int) ((min((arr_42 [i_13] [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_13]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8314)) == (((/* implicit */int) arr_7 [i_14]))))))) == (((/* implicit */unsigned long long int) -1640920305))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_17 = 0; i_17 < 21; i_17 += 3) 
    {
        arr_62 [i_17] = ((/* implicit */signed char) var_1);
        var_34 += ((/* implicit */int) (unsigned char)222);
        arr_63 [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_59 [i_17] [i_17])) - (((/* implicit */int) arr_60 [i_17] [i_17]))))));
        arr_64 [i_17] = ((/* implicit */unsigned short) (+(var_0)));
        arr_65 [i_17] = ((/* implicit */unsigned int) ((var_6) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_58 [i_17])))))));
    }
    /* LoopNest 2 */
    for (short i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            {
                arr_72 [i_18] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                arr_73 [i_18] = ((/* implicit */int) ((((var_13) >> (((11031056018975345650ULL) - (11031056018975345610ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_67 [i_18]))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) var_9);
}
