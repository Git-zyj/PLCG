/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85808
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min(((~(var_12))), (((/* implicit */long long int) ((unsigned char) var_6))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_1 - 1]))))))));
                            arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) min((arr_3 [i_1 - 1] [i_1]), (arr_3 [i_1 - 1] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 460444269)) >= (18446744073709551607ULL)))));
                            var_16 = ((/* implicit */_Bool) (unsigned char)255);
                        }
                        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 2) 
                        {
                            arr_17 [i_1] [19LL] = ((/* implicit */signed char) var_3);
                            arr_18 [i_2] [i_1 - 2] [i_2] [0ULL] [i_5 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 + 1])) ? (arr_5 [i_5 + 1] [i_5] [i_5] [i_5]) : (arr_5 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (arr_5 [i_5 - 1] [2] [i_5] [i_5 - 1]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) -460444269)) : (arr_5 [i_5 + 1] [i_5] [(short)17] [i_5 + 1])))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1364474677)) ? (((/* implicit */int) (short)2705)) : (((/* implicit */int) ((15126920908480190847ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15686227780333790566ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2278095770143735998LL)))))))));
                        }
                        for (short i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_8 [i_0] [(_Bool)1] [i_0] [i_2] [i_6]))));
                            var_19 = (~(((/* implicit */int) arr_20 [i_0] [i_1] [9U] [i_3] [i_6] [i_1] [10])));
                            arr_23 [i_6 - 1] [i_0] [i_3] [i_2] [i_0] [14] |= ((/* implicit */_Bool) arr_2 [i_1 - 2] [i_6 + 3] [i_2]);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1 - 2] [i_1 + 1] [i_0] [i_6 - 1])) > (((/* implicit */int) var_10)))))));
                        }
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_1)))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_5)))) : (((/* implicit */int) arr_19 [i_0] [i_0] [12LL] [i_0]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((((((/* implicit */unsigned int) -1508190822)) * (516096U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [(short)18] [3ULL])))))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 3; i_8 < 21; i_8 += 3) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned short) var_6);
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_25 [i_7])) << (((((/* implicit */int) arr_25 [i_7])) - (25780)))))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 3; i_9 < 21; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) != (arr_1 [i_7] [i_9 + 2]))))));
                        arr_35 [9U] [9U] [9U] [9U] = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_16 [i_11] [i_10] [i_9] [i_9] [13]))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10]))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != ((+(0)))));
            var_27 = ((/* implicit */short) var_4);
            arr_36 [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_4 [i_7] [i_9] [i_7] [i_9]));
            var_28 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_22 [i_7] [i_7])))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 1) 
        {
            arr_41 [i_12] [i_7] [i_7] = (i_12 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) (((((~(2024794710))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_12] [i_12])) & (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-2705)) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [(signed char)2] [i_7] [i_12] [i_12 + 2])) - (72)))))) : (var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) (((((~(2024794710))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_12] [i_12])) & (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-2705)) + (2147483647))) >> (((((((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [(signed char)2] [i_7] [i_12] [i_12 + 2])) - (72))) + (201)))))) : (var_13))));
            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16))));
            arr_42 [i_7] &= ((/* implicit */signed char) (!(((min((arr_29 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) var_1)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_24 [(_Bool)1]) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7] [i_12 + 2])))))))))));
        }
        /* vectorizable */
        for (signed char i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            arr_46 [i_13] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(var_2))))));
            arr_47 [i_7] [i_7] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            var_30 = ((/* implicit */long long int) ((173291543U) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [15ULL] [i_13]))))));
        }
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (!(var_6)))), (((var_7) | (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((var_4) ? (((/* implicit */int) arr_4 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_3)))) << (((max((((/* implicit */unsigned long long int) (short)5902)), (137438953471ULL))) - (137438953457ULL)))))))))));
        arr_48 [i_7] = ((/* implicit */int) ((((arr_27 [i_7]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_9 [i_7] [i_7]))))))) : (((arr_19 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (short)26568)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    }
    for (int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
    {
        arr_52 [i_14] [3U] = ((/* implicit */unsigned int) 0ULL);
        var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14]))));
    }
    for (int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
    {
        arr_55 [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_40 [i_15] [i_15] [i_15])))) - ((~(arr_38 [i_15] [i_15])))));
        arr_56 [i_15] = ((/* implicit */int) ((short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 11ULL)) && (((/* implicit */_Bool) arr_49 [i_15]))))), (4121675767U))));
    }
    var_33 = ((/* implicit */unsigned short) (!(max(((!(((/* implicit */_Bool) var_5)))), (var_4)))));
}
