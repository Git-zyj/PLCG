/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89663
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))) : (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)16490))))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1))))), (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_1 [i_0 + 2]))))), (var_1))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                        var_13 = ((((/* implicit */unsigned long long int) 4294967295U)) / (18446744073709551615ULL));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned short) arr_12 [i_1] [i_3 + 2] [i_0] [i_0 + 3] [i_4]));
                            arr_13 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)93);
                            var_15 = (+(((5335254666583167056ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (arr_0 [i_0 + 3])));
                            arr_14 [i_0] [i_1 - 1] [i_0] [(_Bool)0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 - 1] [(short)4]);
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1 - 2] [i_0] [i_5] [i_2] [i_5] = arr_5 [i_0 + 2] [i_0] [(_Bool)1];
                        arr_18 [i_0] = arr_15 [i_0 - 1] [2U] [i_0] [i_0] [i_0];
                        var_17 += ((/* implicit */long long int) (unsigned short)50676);
                    }
                    arr_19 [4ULL] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 3] [i_2] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((long long int) max((arr_3 [i_1] [(unsigned char)5] [i_0]), (arr_3 [i_1 - 4] [i_1] [i_0]))));
                    var_19 = ((/* implicit */short) (signed char)-98);
                }
                for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_1 - 4] [i_7] = ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (int i_9 = 4; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) arr_27 [i_0] [(signed char)6]);
                                var_21 ^= ((/* implicit */unsigned short) 931293098U);
                                arr_30 [i_0] [i_1] [i_7] [i_1] [i_8] [i_9] = ((/* implicit */unsigned int) 1365855923166690565ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            {
                                arr_37 [i_0] [i_10] [i_11] = ((/* implicit */short) var_6);
                                arr_38 [i_0] [i_0] [(short)10] [i_1 - 4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4055463628U)) || (((/* implicit */_Bool) arr_21 [i_0 + 2] [i_1] [i_0] [i_10]))))), (min((((long long int) (_Bool)0)), (((/* implicit */long long int) var_3))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */signed char) ((int) (unsigned short)34764));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            {
                                arr_48 [i_14] [i_14] [i_0] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+(min((arr_39 [i_0] [i_0 + 1] [i_0 - 2] [i_1 - 3]), (arr_39 [i_0] [i_0 - 2] [i_0 - 1] [i_1 + 1])))));
                                var_23 = ((/* implicit */long long int) min((max((((/* implicit */int) ((var_8) != (var_8)))), (arr_43 [i_0 - 1] [4U] [i_0 + 1] [i_14] [(unsigned char)9]))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 8; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((min((arr_3 [i_0 + 3] [(_Bool)1] [i_1]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 3] [i_1] [i_16] [i_0 + 3]))))))));
                                arr_56 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)32767)), (140252501)));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_16 [i_12] [(unsigned short)9] [i_0]))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_1 - 4] [i_15 + 3]))))))));
                                arr_57 [(unsigned short)0] [i_1] [i_0] [i_15] [i_16] [i_12] = ((/* implicit */signed char) 6033749542580959093ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 2; i_18 < 9; i_18 += 3) 
                        {
                            {
                                arr_64 [i_0] [i_1] |= ((/* implicit */signed char) (((+(((((/* implicit */long long int) arr_60 [i_17] [i_12] [i_12] [i_17])) ^ (4997550845904398390LL))))) <= (((/* implicit */long long int) min((-1543931068), (min((((/* implicit */int) var_7)), (1322830722))))))));
                                var_27 = arr_0 [i_17];
                                var_28 = ((/* implicit */short) arr_42 [i_0] [i_1 - 4] [i_18 - 1] [i_18] [i_18] [i_18]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
