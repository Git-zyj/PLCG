/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59236
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((+(var_3))) < (((/* implicit */int) ((((/* implicit */int) (signed char)91)) == (((/* implicit */int) (unsigned char)206))))))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : ((-(var_5))))))));
                                arr_14 [i_3] [i_0 + 1] [i_2] [i_3 + 2] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_7 [i_3 - 1] [i_4] [i_4] [i_4])) & (((/* implicit */int) var_10))))));
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4120500170U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_22 [i_1 - 3] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_1] [15ULL] [i_5] [13ULL]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_8 [i_1] [i_1 + 1] [i_1] [i_1])))))));
                                var_17 ^= ((/* implicit */unsigned long long int) ((signed char) var_7));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                arr_28 [i_8] [i_7] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
                                arr_29 [i_0] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) + (((int) (+(arr_17 [i_0] [i_1] [i_2] [i_8]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 4; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (146)))))), (arr_10 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [(short)20]))))));
                                arr_36 [i_10] [i_0] [(short)13] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_2] [i_1] [i_0]))) * (min((((/* implicit */unsigned int) arr_17 [i_10] [i_9 + 3] [i_9 + 3] [i_9])), (min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) var_13))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_11] [i_12] [i_13] [i_14] [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(-5377264017259746140LL))))))) : (((/* implicit */int) ((((int) var_11)) >= (((((/* implicit */int) (signed char)122)) & (((/* implicit */int) var_7)))))))));
                                arr_53 [i_11] = ((/* implicit */_Bool) ((signed char) min((arr_16 [i_12] [i_13 + 1] [i_13]), (arr_12 [i_14] [i_13 - 1] [(unsigned char)9] [i_15 + 3]))));
                                var_20 &= ((/* implicit */short) (-(949401596U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        for (signed char i_17 = 2; i_17 < 12; i_17 += 3) 
                        {
                            {
                                arr_60 [i_11] [i_17] [i_12] [i_13 + 3] [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (~(var_4))))), (var_5)));
                                var_21 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_11 [i_13 + 1] [i_12] [i_13] [i_13 + 1] [i_17 - 2] [i_11])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_13 + 2] [i_13] [i_17] [i_17] [i_17 - 1] [i_13])))))));
                                var_22 = ((/* implicit */_Bool) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (var_6)))));
                                var_24 *= arr_33 [i_19 - 1] [i_22 + 1] [i_22] [i_22] [i_22 + 1] [i_22];
                                arr_78 [i_18] [i_18] = ((/* implicit */signed char) arr_8 [i_18] [i_19] [i_19] [i_18]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 1; i_23 < 15; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_84 [i_24] [i_24] [i_24] [i_24] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) - (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) : (17352069270515371635ULL)))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-((+(((/* implicit */int) var_8)))))))));
                            arr_85 [i_24] [i_19] [i_23] [i_19] = ((/* implicit */int) (signed char)(-127 - 1));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 11; i_25 += 2) 
    {
        for (unsigned long long int i_26 = 4; i_26 < 9; i_26 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 11; i_27 += 3) 
                {
                    for (long long int i_28 = 0; i_28 < 11; i_28 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_46 [i_25] [i_26 - 2]))))))));
                            var_27 *= (((-(((/* implicit */int) arr_49 [i_26] [i_26] [i_26] [i_26 + 1] [i_26 - 1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_29 = 2; i_29 < 10; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                    {
                        for (unsigned int i_31 = 0; i_31 < 11; i_31 += 2) 
                        {
                            {
                                arr_103 [i_25] [i_25] [i_26] [i_30] [i_31] [i_29 - 2] = ((/* implicit */unsigned char) var_6);
                                var_28 = ((/* implicit */_Bool) var_2);
                                var_29 = ((/* implicit */unsigned int) ((signed char) var_1));
                                arr_104 [i_25] [i_25] = ((/* implicit */unsigned long long int) arr_47 [i_25] [i_26] [i_25] [i_31]);
                                var_30 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_29] [i_26] [(signed char)7] [i_26 - 1])) ? (((/* implicit */int) arr_47 [i_26] [i_26 + 1] [i_26 + 1] [i_26 + 1])) : (((/* implicit */int) arr_47 [i_29 + 1] [i_26 - 4] [i_29 + 1] [i_26 - 4]))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_47 [i_31] [i_31] [i_31] [i_26 + 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_32 = 0; i_32 < 16; i_32 += 2) 
    {
        for (unsigned int i_33 = 3; i_33 < 14; i_33 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_34 = 2; i_34 < 15; i_34 += 2) 
                {
                    for (long long int i_35 = 0; i_35 < 16; i_35 += 3) 
                    {
                        {
                            arr_119 [i_32] [i_33] [i_34] [i_34] [i_35] [i_35] = ((/* implicit */signed char) min((((/* implicit */int) arr_64 [i_32])), ((~(var_14)))));
                            arr_120 [i_33] = ((/* implicit */int) var_11);
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((((/* implicit */int) arr_32 [i_35] [i_34 - 2] [i_33] [i_35] [i_33 - 3])) > (((/* implicit */int) (unsigned char)247)))) ? (((((/* implicit */_Bool) ((var_3) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)181)) : ((+(((/* implicit */int) arr_114 [i_34] [i_34])))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) var_1))))))))))));
                            arr_121 [i_32] [i_33] [i_33] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_76 [i_33] [i_33] [i_33] [i_33])) : (((((/* implicit */int) (short)-13106)) * (((/* implicit */int) (unsigned char)241))))))));
                            arr_122 [i_32] [i_33] [i_34] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_13)))) ? (var_14) : (207127760)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_36 = 3; i_36 < 15; i_36 += 1) 
                {
                    for (unsigned int i_37 = 0; i_37 < 16; i_37 += 3) 
                    {
                        {
                            arr_131 [i_32] [i_33] [i_36 - 2] [i_33] [i_32] = ((/* implicit */short) (signed char)108);
                            arr_132 [i_32] [i_32] [i_36] [i_33] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_36] [i_32]))))) : (((((/* implicit */_Bool) (signed char)-103)) ? (142989288169013248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                            arr_133 [i_32] [i_33 - 3] [i_36 - 2] [i_36 - 2] [i_33] = ((/* implicit */long long int) -1609530973);
                        }
                    } 
                } 
            }
        } 
    } 
}
