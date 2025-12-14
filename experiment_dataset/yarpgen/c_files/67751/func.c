/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67751
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 6; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 &= ((_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [5LL] [i_0 - 3] [i_1] = ((/* implicit */_Bool) (-(arr_9 [i_3] [i_3 + 1] [i_3] [0ULL])));
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) && (arr_2 [i_0 + 1] [i_0 - 4])));
                            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(var_0))))) != (5774675708623399310LL)));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_5])))) < (arr_8 [i_0] [(_Bool)1])));
                            var_17 = ((/* implicit */int) arr_4 [i_3]);
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5774675708623399311LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (14035199600402009025ULL)))) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (var_7)));
                }
            } 
        } 
        var_18 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5774675708623399306LL)));
        arr_19 [i_0] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [4] [i_0]);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(arr_10 [i_0] [i_0 - 2] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) <= (((/* implicit */int) arr_21 [i_6])))))));
        arr_22 [i_6] &= ((/* implicit */unsigned short) -5774675708623399289LL);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (arr_20 [7U]) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_21 [i_6])) >> (((5774675708623399314LL) - (5774675708623399312LL))))) : (((/* implicit */int) arr_21 [i_6]))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_6]) / (((/* implicit */int) arr_21 [i_6]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-29139)) : (((/* implicit */int) (unsigned short)16754))))));
        /* LoopSeq 3 */
        for (int i_7 = 2; i_7 < 12; i_7 += 3) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) << ((((((_Bool)1) ? (((/* implicit */int) (short)29155)) : (arr_20 [i_6]))) - (29153))))))));
            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14)) && (((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_7 - 2]))));
            arr_26 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(_Bool)1])) ? (arr_25 [i_7] [i_7 - 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            arr_27 [i_7] [(short)0] [i_7] = ((/* implicit */_Bool) (-(arr_25 [i_7] [i_7] [i_7 - 2])));
        }
        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))) < ((+(((/* implicit */int) arr_21 [i_9])))))))));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    arr_34 [i_6] [i_9] [i_6] [(_Bool)1] = ((/* implicit */_Bool) (+(3985925475161089101ULL)));
                    var_26 = ((/* implicit */long long int) var_5);
                }
                for (short i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    var_27 = ((/* implicit */int) max((var_27), ((+((-(((/* implicit */int) var_3))))))));
                    var_28 = ((/* implicit */unsigned short) ((arr_35 [i_8] [i_8 + 3] [i_8] [i_11 + 1] [i_11]) <= (((/* implicit */int) var_0))));
                }
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6])))))));
                arr_39 [i_9] = ((/* implicit */unsigned int) ((long long int) arr_23 [i_8 - 1] [i_6]));
            }
            for (unsigned char i_12 = 4; i_12 < 10; i_12 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((int) -580791872));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) var_2);
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_6] [i_8 + 1] [i_6] [i_13] [i_12 + 2]))));
                            arr_48 [i_13] [i_8] |= ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) arr_41 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_46 [i_6] [i_8] [i_12] [i_12 - 3] [i_14])));
                        }
                    } 
                } 
            }
            for (long long int i_15 = 2; i_15 < 12; i_15 += 1) 
            {
                arr_51 [i_15] [i_15] [i_8] [5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_36 [(short)0] [i_15 - 2] [i_15 - 1] [i_6] [i_15 - 2])) & (((/* implicit */int) (_Bool)1))));
                var_33 ^= ((/* implicit */long long int) ((arr_23 [i_15 - 2] [i_8 + 2]) - (((/* implicit */unsigned long long int) (-(var_5))))));
                arr_52 [i_6] [i_8] [i_15 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6] [12LL] [i_15 + 1])) ? (var_6) : (((((/* implicit */int) arr_32 [i_6])) | (var_6)))));
            }
            var_34 |= ((/* implicit */unsigned long long int) ((int) var_9));
            var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (var_1) : (((/* implicit */unsigned long long int) var_11))))) ? (5774675708623399322LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_36 ^= ((/* implicit */int) (!((_Bool)1)));
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_59 [i_17] [i_16] [i_16] [(_Bool)1] [(_Bool)1] = arr_30 [i_6] [i_6] [6U];
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((unsigned short) var_2)))));
                }
                var_38 = ((/* implicit */unsigned char) (-(var_7)));
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) var_10))));
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_6] [i_6] [(_Bool)1] [i_6] [i_18])) && (((/* implicit */_Bool) (unsigned char)220))));
            var_41 &= ((/* implicit */_Bool) arr_61 [i_6] [i_6]);
            var_42 = ((/* implicit */long long int) (_Bool)0);
            arr_62 [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            var_43 = ((/* implicit */unsigned short) var_3);
        }
    }
    for (short i_19 = 2; i_19 < 16; i_19 += 3) 
    {
        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) 5774675708623399345LL))));
        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_63 [i_19 + 1]))) / (((((/* implicit */_Bool) var_1)) ? (arr_64 [(_Bool)1]) : (((/* implicit */long long int) 2919285118U))))))) && (((/* implicit */_Bool) var_9))));
    }
}
