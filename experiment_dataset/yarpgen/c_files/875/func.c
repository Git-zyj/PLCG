/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/875
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (var_9)))))) || (var_11)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned short)39253)) - (39227))))))));
                    arr_9 [(signed char)11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1])))) || (((var_12) || (((/* implicit */_Bool) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] |= ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) var_3)));
                                arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26288)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2 - 2] [i_1 + 2] [i_4]))) : (var_10)))) && (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1] [i_2 - 1]))))));
                                var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned short)30078)) : (((/* implicit */int) (short)15360))));
                                arr_19 [i_0] [i_3] [i_2] [i_1 + 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [11ULL] [11ULL] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [(unsigned short)11] [i_2] [i_1 + 1] [i_2 + 1]))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (var_8)));
        arr_20 [7ULL] [7ULL] = ((/* implicit */unsigned long long int) var_11);
        arr_21 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [8U] [i_0] [i_0])) - (26888))))));
    }
    /* LoopSeq 2 */
    for (int i_5 = 4; i_5 < 21; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) arr_28 [i_5] [i_6 + 1] [i_7]);
                    var_19 = ((/* implicit */unsigned int) ((signed char) arr_24 [i_6 - 2]));
                    arr_29 [i_5] = ((var_7) * (((/* implicit */unsigned long long int) ((long long int) var_5))));
                    arr_30 [(signed char)19] [i_5 - 3] [i_6 - 3] [(signed char)19] = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) var_5)), (arr_23 [i_6 - 1] [i_5 - 2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_5 - 4]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        arr_45 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((long long int) arr_27 [i_8 + 2] [i_8 + 2])), (9223372036854775807LL)));
                        var_22 = ((/* implicit */_Bool) (signed char)95);
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) var_7);
                        arr_48 [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_28 [i_12] [(signed char)15] [(signed char)15]);
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -2097152LL)), (((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39237))))) : (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7)))))));
                            var_25 = ((/* implicit */short) var_8);
                        }
                        arr_51 [i_8] [i_8] = ((/* implicit */_Bool) var_7);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) var_13);
                                arr_58 [i_5] [i_8 - 1] [i_9] [i_9] [i_15] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5 - 1] [i_8 - 1] [i_8 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        arr_61 [i_16] [i_16] = ((/* implicit */_Bool) 9223372036854775807LL);
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            arr_66 [i_17] = ((/* implicit */unsigned long long int) arr_62 [i_16] [i_17]);
            var_27 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */signed char) (!(arr_65 [i_16] [i_17]))))));
            var_28 = ((/* implicit */int) var_10);
        }
    }
    var_29 *= var_8;
}
