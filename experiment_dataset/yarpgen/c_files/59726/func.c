/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59726
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) && (((/* implicit */_Bool) (~(var_3))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((arr_0 [i_0]) >> (((arr_0 [i_0]) - (4120270524U)))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned short)65535))))));
        arr_3 [i_0] [6] = ((/* implicit */signed char) ((unsigned int) (unsigned short)65535));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = max((((((/* implicit */_Bool) 2840660766U)) ? (4028013463U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((var_18) - (636307183U)))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2U] [2U]))) : (arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) ? (((/* implicit */long long int) max((((arr_1 [i_1] [4U]) * (((/* implicit */unsigned int) arr_6 [0U])))), (arr_0 [i_1])))) : ((~(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_6) : (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (max((arr_8 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) != (var_8)))))))) ? (((((1740831748197396548ULL) < (((/* implicit */unsigned long long int) -1837361440)))) ? (max((var_8), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) 740610799))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))) : (var_9)))), (((((/* implicit */_Bool) var_19)) ? (arr_8 [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))))));
            arr_10 [i_1] = ((((/* implicit */int) max((arr_5 [i_2] [i_1]), (arr_5 [i_2] [i_1])))) >> (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_2])))) - (46))));
        }
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [16])) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [(unsigned char)8] [i_1])) : (((/* implicit */int) arr_4 [(signed char)2] [i_1])))), (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) (((+(((/* implicit */int) arr_9 [i_1] [i_1])))) > (((arr_6 [i_1]) / (((/* implicit */int) (unsigned short)7132))))))))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) ^ (((((/* implicit */_Bool) -1481444283)) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (arr_12 [(_Bool)1])))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) min(((short)12), (((/* implicit */short) (signed char)-4))))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_27 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)1))))));
        /* LoopSeq 4 */
        for (signed char i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(1977149812)))))) ? (min((arr_1 [i_5 - 2] [i_5]), (arr_1 [i_5 - 2] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_12 [i_4]), (((/* implicit */unsigned long long int) arr_14 [i_5]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_5 - 1] [i_4])))))))))));
            arr_19 [i_5] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_5 - 2] [i_5 - 1]), (arr_11 [i_5 - 1] [i_5 - 2]))))) >= (((arr_1 [i_5 - 2] [i_5 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 2] [i_5 + 1])))))));
            arr_20 [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_5]);
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 512412916)) : (arr_12 [i_4])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_2)))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) arr_23 [i_8 + 2] [2U] [i_7]))))));
                        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -740610801)) ? (((/* implicit */int) (unsigned short)59859)) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) arr_22 [i_4] [i_4])) << (((((/* implicit */int) arr_25 [i_4] [i_6] [i_7])) - (16158)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                        {
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 740610806)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)168))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8] [i_8 + 1] [3] [i_8])) ? (arr_27 [i_8] [i_8 + 2] [i_8] [i_8]) : (arr_27 [i_8] [i_8 + 2] [i_9] [i_8])));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_14 [i_9]))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
                        {
                            arr_36 [i_10] [i_10] [i_10] [i_8] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_10] [i_10 - 1] [i_4] [5U] [i_10] [i_4]))));
                            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_34 [i_8 + 2] [i_6] [i_10 + 1] [(unsigned short)6] [i_7] [i_4]) : (arr_34 [i_4] [i_4] [i_10 + 1] [i_4] [i_10 + 1] [i_7])));
                            var_36 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)7)))) ? (arr_12 [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_4] [(signed char)4] [i_4])) / (((/* implicit */int) arr_32 [i_4] [i_4] [i_10])))))));
                        }
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_6] [i_7])) + (2147483647))) << (((((/* implicit */int) (unsigned short)1)) - (1)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(signed char)7] [(_Bool)1] [i_7] [12ULL] [i_8 + 1] [i_6]))) / (arr_15 [i_4]))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_11] [i_8] [i_7] [i_8] [i_8] [i_4] = (((+(((/* implicit */int) (short)6444)))) != (((/* implicit */int) (signed char)29)));
                            arr_40 [i_11] [i_8] [i_7] [i_8] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((2840660774U) | (((/* implicit */unsigned int) -1977149813))));
                            arr_41 [i_4] [i_6] [i_8] [i_8] = var_5;
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_12] [i_8] [i_8] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 6394489059669084178ULL)))))) >= (((((/* implicit */_Bool) var_12)) ? (arr_42 [i_4] [i_4] [7LL] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_6] [i_4])))))));
                            var_38 -= var_12;
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */int) (signed char)-7);
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 3) 
            {
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_13 - 2] [i_13 - 2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4] [i_13 - 1] [i_13 - 2]))) : (arr_27 [i_4] [i_13 - 2] [i_13 - 2] [i_4]))))));
                arr_48 [i_4] [i_6] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4])))))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
        {
            arr_51 [(unsigned short)7] = ((/* implicit */_Bool) max((((arr_46 [i_14] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_18 [i_4] [i_14]))))) > ((~(((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
            var_41 = ((/* implicit */signed char) min((((((arr_34 [i_4] [i_14] [i_4] [i_4] [i_4] [i_4]) + (2147483647))) >> (((arr_27 [i_4] [i_14] [i_4] [i_4]) - (1604196993U))))), (((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_34 [i_4] [i_4] [(signed char)14] [i_4] [i_4] [i_4]) : (((/* implicit */int) var_14))))));
            var_42 ^= ((/* implicit */_Bool) arr_16 [5] [5]);
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
        {
            arr_55 [i_15] [(_Bool)0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_15]))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) arr_14 [i_15])))))));
            arr_56 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [0LL] [i_15] [0LL])) ? (var_16) : (((/* implicit */int) (short)4015))))), (arr_26 [i_4] [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) ((arr_26 [i_4] [i_15] [i_4] [i_4]) << (((((/* implicit */int) var_11)) - (68)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (5978270367478468248ULL))) : (((/* implicit */unsigned long long int) ((int) arr_25 [i_4] [(signed char)4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59876)) <= (min((((/* implicit */int) (signed char)-50)), (-740610811)))))))));
        }
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) (((~(((/* implicit */int) arr_32 [i_4] [i_16] [i_16])))) == (((/* implicit */int) min((arr_24 [13LL]), (((/* implicit */unsigned short) (signed char)121))))))))));
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (arr_26 [(signed char)14] [7U] [i_16] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((arr_42 [i_4] [i_4] [i_4] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (max((0U), (((/* implicit */unsigned int) (signed char)-4)))) : (((((/* implicit */_Bool) var_19)) ? (arr_0 [i_16]) : (((/* implicit */unsigned int) var_3))))))));
        }
    }
}
