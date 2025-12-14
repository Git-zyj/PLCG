/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84561
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (short)-9030)) : (((/* implicit */int) (short)17514))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 4] [11U] [11U] [i_0 + 2])) ? (arr_7 [i_0] [(signed char)4] [(signed char)4] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(signed char)11] [i_0])))));
            }
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_17 [10U] [(unsigned short)8] [i_3] [i_3] [(unsigned short)8] [i_3] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)8] [i_0 + 4] [i_0] [i_0] [i_0 + 1]))) : (1145744971U)))));
                            var_21 = ((/* implicit */unsigned int) arr_13 [i_0] [i_3] [i_4] [i_5]);
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-17528)) ? (arr_2 [i_0] [i_3] [i_0 + 3]) : (((/* implicit */long long int) arr_10 [i_0 + 1] [i_1] [i_0 + 3])))) <= (((/* implicit */long long int) ((arr_12 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 4])) : (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [(signed char)1] [i_0 + 3])))))));
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */long long int) 3851338528U);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [(signed char)4] [i_0] = ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [3LL])) ? (((((/* implicit */_Bool) (short)17535)) ? (((1933009271U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (2361958009U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12996)) ? (((((/* implicit */int) arr_9 [i_0] [8U] [i_0 + 4] [i_3])) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_3 [i_0 + 1]))));
            }
            for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                var_24 = ((/* implicit */short) arr_5 [i_0 - 1] [i_6 + 1] [i_6 + 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [(signed char)3] [i_1] [i_6 + 1] [6U] [6U] = ((/* implicit */unsigned short) ((((arr_10 [i_0 + 4] [i_1] [i_6 + 1]) ^ (1933009247U))) <= (((/* implicit */unsigned int) (+(-1498664520))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_6] [(signed char)4]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) arr_30 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_9 + 3]);
                var_26 = ((/* implicit */long long int) (signed char)21);
                arr_32 [i_0] [i_0] [i_0] [i_9 + 1] = 1145744971U;
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_0] [i_0] [(unsigned short)5])) <= (((/* implicit */int) arr_26 [i_1] [i_9] [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9 + 1]))));
                var_28 *= ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_1] [i_1] [i_9 + 1] [i_9 + 2] [i_9] [10U] [i_9 + 2]))));
            }
            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_21 [i_0 - 1] [9ULL] [i_0 + 1] [i_0])))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (long long int i_11 = 1; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_41 [(_Bool)1] [(_Bool)1] [i_10] [(_Bool)1] = ((/* implicit */short) arr_36 [i_0 + 3] [i_1] [i_10] [i_11]);
                        var_30 += ((/* implicit */short) ((unsigned int) arr_20 [i_0 - 1] [i_11 - 1] [i_11 - 1]));
                    }
                } 
            } 
        }
        arr_42 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [9LL])) & (((/* implicit */int) (unsigned char)176))))) / ((-(arr_13 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_38 [i_0] [i_0] [i_0 - 1] [i_0 + 4])))) : (arr_38 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4])));
        arr_43 [i_0 + 3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [(unsigned short)11] [i_0] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) -571172156);
                    arr_50 [i_0] [i_12] [(_Bool)1] [i_13] = ((/* implicit */signed char) ((long long int) ((short) arr_1 [i_0 + 4])));
                }
            } 
        } 
        arr_51 [i_0] [4U] = ((/* implicit */long long int) (signed char)-107);
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_14 - 1] [i_14 - 1] [(signed char)6])) ? (((/* implicit */int) arr_35 [i_14] [i_14 + 2] [i_14])) : (((/* implicit */int) arr_35 [i_14] [i_14] [(short)9]))));
        var_33 -= ((/* implicit */short) ((signed char) arr_22 [i_14 + 4] [i_14 + 4] [i_14 + 2]));
        arr_54 [i_14] [i_14] = ((/* implicit */unsigned short) ((arr_47 [i_14] [i_14 - 1] [i_14] [i_14 + 2]) ? (arr_30 [i_14 + 4] [i_14 + 3] [i_14 + 2] [i_14 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25208)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-17515)))))));
    }
    for (long long int i_15 = 1; i_15 < 8; i_15 += 2) /* same iter space */
    {
        var_34 &= ((/* implicit */_Bool) (short)25208);
        arr_57 [i_15 - 1] [(_Bool)1] = ((/* implicit */short) arr_13 [i_15] [i_15 + 2] [i_15 - 1] [i_15 - 1]);
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 8; i_16 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */int) (short)0);
        var_36 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_16 + 4] [i_16 + 3] [i_16 + 2] [11LL]))));
    }
    /* LoopSeq 4 */
    for (signed char i_17 = 3; i_17 < 18; i_17 += 2) 
    {
        arr_65 [i_17] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_17 - 2])) ? (((/* implicit */int) arr_64 [i_17 - 3])) : (((((((/* implicit */int) arr_62 [i_17])) + (2147483647))) >> (((((/* implicit */int) (signed char)-86)) + (110)))))))));
        arr_66 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_17 + 2])) ? (((/* implicit */int) arr_64 [i_17 + 2])) : (((/* implicit */int) arr_64 [i_17 - 3]))))) ? (((long long int) ((((/* implicit */_Bool) arr_62 [i_17])) ? (((/* implicit */int) arr_62 [i_17])) : (((/* implicit */int) arr_64 [i_17]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((long long int) arr_62 [i_17])))))));
    }
    for (int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
    {
        arr_69 [i_18] = ((/* implicit */int) ((((unsigned long long int) ((arr_67 [i_18] [i_18]) && (((/* implicit */_Bool) 4294967295U))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_18] [(unsigned short)20])))));
        var_37 = ((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_67 [i_18] [i_18])))));
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-11714)))) & (((/* implicit */int) arr_68 [i_18])))))));
    }
    for (int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_67 [i_19] [i_19])))) * (((/* implicit */int) arr_67 [i_19] [i_19]))));
        var_40 &= ((/* implicit */short) ((_Bool) (-(((/* implicit */int) ((_Bool) arr_68 [i_19]))))));
    }
    for (int i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */_Bool) arr_72 [i_20] [i_20]);
        arr_76 [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_20] [i_20])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_20] [(unsigned char)21]))) <= (arr_73 [i_20] [i_20])))) : (((/* implicit */int) (short)22585))))) & (((arr_74 [i_20]) - (((/* implicit */unsigned long long int) 2361958048U))))));
    }
}
