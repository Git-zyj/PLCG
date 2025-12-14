/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74057
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (min((15861210032531368618ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)-111))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_8 [(signed char)1] [14U] [0U] [0U] [i_3] [14U] = ((/* implicit */unsigned int) var_5);
                        arr_9 [i_3] [11LL] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0 + 2]))));
                        arr_10 [i_3 - 2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_3 + 1]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
        {
            var_12 = ((/* implicit */long long int) ((_Bool) arr_7 [i_4] [i_4 - 1] [i_0] [i_4 - 3]));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) ((16604170116997088984ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25445))))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (((/* implicit */int) arr_2 [i_4 + 1])) : (((/* implicit */int) var_1))));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_15 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (arr_21 [i_0] [i_5] [i_6] [i_7] [i_8 + 3]));
                            arr_25 [i_0] [i_5] [i_6] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8851678952364731682ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_5] [i_7] [i_7])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_8] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [(_Bool)1] [i_5]))))) : (arr_5 [i_6 - 1] [i_6 + 1] [i_6]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_0 - 2] [i_0 - 4]))));
                            var_17 = ((/* implicit */signed char) ((arr_15 [i_0 + 2] [i_6 + 1] [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0 - 4])) : (((/* implicit */int) arr_2 [i_9 - 1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((arr_15 [i_0] [i_0 + 2] [i_6 + 3]) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_6 + 3])) : (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_6 - 2]))));
            }
            var_19 = ((/* implicit */unsigned long long int) var_2);
            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)25445))));
        }
        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_0] [i_0 - 4] [i_0] [i_0 - 4]))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4634774215887444281ULL)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)-16))))) ? (18446744073709551614ULL) : (13698691261398786931ULL))))));
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [i_0] [1U] [i_0 - 3]))));
            }
            arr_36 [i_0] [10ULL] [i_11] = ((/* implicit */short) ((9595065121344819934ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25443)))));
        }
        for (signed char i_13 = 2; i_13 < 23; i_13 += 1) 
        {
            var_24 |= ((/* implicit */_Bool) arr_33 [i_13 - 2] [i_0 + 2]);
            var_25 |= ((/* implicit */short) (~(((/* implicit */int) (signed char)-111))));
            /* LoopSeq 2 */
            for (signed char i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (short i_16 = 1; i_16 < 21; i_16 += 1) 
                    {
                        {
                            arr_48 [i_0] [i_15] [i_14 + 1] [i_15] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9595065121344819933ULL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)-26877))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25443)) ? (((/* implicit */unsigned long long int) -1536089127956555163LL)) : (16106118884844898618ULL)));
                        }
                    } 
                } 
                arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0 - 4] [i_0])) && (arr_12 [i_0] [i_13 - 1])));
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 22; i_17 += 3) 
                {
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        {
                            var_27 ^= arr_37 [i_14] [13LL];
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13] [i_13] [23ULL] [i_18]))))) > (((/* implicit */int) (_Bool)1))));
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-68)) ? (16548258760250622069ULL) : (((/* implicit */unsigned long long int) -9223372036854775800LL))));
                            var_30 = ((/* implicit */short) ((((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_17 + 2] [i_14 + 2] [i_13 + 1] [i_0 + 2]))) : (13698691261398786929ULL)));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_0] [i_0 - 1] [i_13 - 2] [i_0 - 1])) >= (((/* implicit */int) arr_51 [i_0] [i_0 - 1] [i_13 - 1] [i_0]))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                arr_58 [i_13 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_0] [i_0 - 3] [i_0] [i_13 + 1] [(signed char)4])) ? (((/* implicit */int) arr_29 [i_0] [i_19])) : (((/* implicit */int) arr_28 [i_0] [(signed char)9] [i_13] [i_13] [i_13 - 1] [13LL] [i_19]))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */_Bool) arr_56 [i_0 + 1]);
                            var_33 ^= ((/* implicit */unsigned int) arr_55 [i_19] [i_20] [i_19] [i_0]);
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_0 + 2] [i_13 - 2] [i_19])) * (((/* implicit */int) arr_3 [i_0 + 2]))));
            }
        }
        var_35 = ((/* implicit */unsigned int) arr_35 [i_0]);
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / (((/* implicit */int) (signed char)-126))));
}
