/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6058
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) 6LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42)))) : (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [12ULL] [12ULL] = (+(((((/* implicit */_Bool) (short)16296)) ? (((/* implicit */unsigned int) 0)) : (16777215U))));
                    arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_0 [(unsigned char)0] [i_1]);
                }
                var_16 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (((long long int) arr_1 [i_0]))));
            }
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_17 *= ((/* implicit */short) 18446744073709551615ULL);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 16777218U)) / (((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) ^ (arr_7 [i_0] [i_6])))));
                            var_19 -= var_4;
                            arr_23 [i_0] [i_1] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19559))))) == ((-(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */_Bool) ((unsigned short) (unsigned short)65535));
                            arr_29 [i_7] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_4] [i_4] [(unsigned short)12]) >> (((/* implicit */int) arr_2 [(short)12]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (10493741898113359609ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_22 [i_10] [(signed char)10] [i_9] [i_4] [i_1] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                            arr_36 [i_0] [i_1] [i_0] [i_9] [i_9] &= ((/* implicit */unsigned short) (_Bool)0);
                        }
                    } 
                } 
            }
            var_22 += ((/* implicit */_Bool) 16777204U);
            var_23 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((536870910) << (((((((/* implicit */int) arr_28 [i_0] [i_0] [i_0])) + (24733))) - (3)))))) <= (arr_8 [i_0] [i_1] [i_1])));
            var_24 += ((/* implicit */short) ((long long int) (signed char)50));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_40 [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) * (0)))))))));
            var_25 += ((/* implicit */_Bool) var_11);
            arr_41 [i_11] [i_11] [i_11] = var_14;
            var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        {
                            arr_51 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [(unsigned short)8] [i_13] [i_13] [i_14] |= ((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5608389973204187731LL)));
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_12 [i_14]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) arr_32 [i_0] [i_12] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            arr_57 [i_15] [i_15] = ((/* implicit */_Bool) var_13);
                            var_30 &= var_11;
                            var_31 -= ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned short) max((arr_37 [i_0] [i_17]), (arr_37 [i_17] [i_19]))));
                            var_33 *= ((/* implicit */unsigned int) (signed char)79);
                        }
                        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                        {
                            var_34 ^= arr_66 [(unsigned short)8] [i_0] [i_17] [i_18] [10U] [(unsigned short)8] [i_21];
                            arr_71 [i_21] [i_0] [i_18] [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_0] [i_17] [i_18] [i_0])) ? (2347145697U) : (((/* implicit */unsigned int) arr_17 [i_21] [i_18] [i_18] [i_17]))))), (((((/* implicit */_Bool) (short)-1)) ? (13895096815932173065ULL) : (((/* implicit */unsigned long long int) 16777201U)))))))));
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 13; i_22 += 2) 
                        {
                            var_36 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_63 [i_0]))));
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_6))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) 1721247282124935622LL))) : (((/* implicit */int) max((var_6), (((/* implicit */short) (signed char)42)))))));
                            arr_75 [i_0] [i_0] [i_0] [i_0] [i_17] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 5908698222929223081ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -5608389973204187721LL)))))) <= ((-(((/* implicit */int) arr_74 [i_0] [i_17] [i_18] [i_19] [i_0]))))));
                        }
                        var_39 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)43664))))))) > (var_9)));
                    }
                } 
            } 
            var_40 = ((signed char) (!(((/* implicit */_Bool) arr_37 [i_17] [i_0]))));
            var_41 = ((/* implicit */long long int) (signed char)48);
        }
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) arr_31 [(signed char)5] [i_0] [i_0] [8U] [i_0]))));
        var_43 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) && (((((/* implicit */_Bool) max((arr_69 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)24))))) || (((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_44 -= ((/* implicit */_Bool) -2959873756763288673LL);
    var_45 = ((/* implicit */short) ((((int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((-1LL) + (14LL))) - (13LL)))))) / (((((/* implicit */_Bool) (signed char)-104)) ? (632581218) : (((/* implicit */int) (short)-14538))))));
    var_46 = ((/* implicit */_Bool) min((var_46), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) > (var_5)))));
}
