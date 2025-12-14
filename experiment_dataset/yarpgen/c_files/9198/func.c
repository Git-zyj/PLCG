/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9198
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
    var_19 ^= ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (3423096600U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))))))) ? (var_18) : (((long long int) -469504186)));
    var_20 ^= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [2LL])))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_23 = ((/* implicit */long long int) ((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)60))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((long long int) arr_4 [i_1] [i_1])))));
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((unsigned long long int) ((arr_15 [i_5] [14ULL] [i_3] [i_2] [i_1]) - (((/* implicit */long long int) arr_9 [i_3 + 2])))));
                            var_26 = ((/* implicit */long long int) arr_7 [i_2]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] [19LL] [i_1] [i_1] = ((/* implicit */int) (~(arr_4 [i_3 - 1] [10ULL])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [(short)14] [i_5 + 2] [i_3 - 1] [i_1] [i_1])) ? (arr_15 [i_5 - 1] [i_5 - 1] [i_3 - 2] [3LL] [i_1]) : (arr_15 [6] [i_5 + 3] [i_3 + 4] [i_3 - 2] [i_2 - 3])));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) (~(((8358999457639409399LL) + (-4034825602625119966LL)))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 + 4] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3] [i_2 - 2])) | (((/* implicit */int) arr_5 [i_2] [i_3 + 2])))))));
            }
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) 63);
                var_31 = ((/* implicit */signed char) ((unsigned short) arr_10 [i_2] [i_2]));
                var_32 = ((/* implicit */int) (+(arr_4 [i_2 - 1] [i_2 + 1])));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_1] [i_2] = ((/* implicit */long long int) arr_4 [i_2 - 2] [i_2 - 1]);
                var_33 = (+(((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 2] [i_2 + 1])));
                arr_24 [16ULL] [i_2 + 3] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(-8077542929978566467LL)))) : (arr_10 [i_2 + 1] [4LL])));
            }
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                arr_27 [i_1] [i_2] [i_8] [i_8] = ((/* implicit */unsigned char) arr_16 [(_Bool)1] [i_8]);
                var_34 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -268435456))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((int) 5656343926076241922ULL)))));
                            var_36 = ((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [i_1] [i_2]);
                            var_37 -= ((/* implicit */signed char) ((int) arr_32 [i_9 - 1] [(_Bool)1]));
                            arr_33 [10ULL] [i_2] [i_2] [i_9 - 1] = ((/* implicit */unsigned int) arr_25 [i_2] [i_2] [i_9 - 1]);
                        }
                    } 
                } 
            }
            arr_34 [(_Bool)1] [i_2] [19U] = ((/* implicit */signed char) ((int) arr_10 [i_2] [i_2]));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 3] [i_2 + 2])) ? (((/* implicit */long long int) ((unsigned int) arr_28 [i_1] [i_2 + 2]))) : (arr_15 [i_2] [(signed char)17] [i_2] [i_2 - 4] [i_2 + 3]))))));
        }
        for (long long int i_11 = 4; i_11 < 18; i_11 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 4; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_39 = ((/* implicit */long long int) ((unsigned short) (unsigned short)20179));
                        var_40 -= ((/* implicit */int) ((unsigned short) (~(8077542929978566483LL))));
                        var_41 = ((/* implicit */int) arr_13 [i_13] [(signed char)9] [5] [i_1]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    for (unsigned char i_16 = 3; i_16 < 19; i_16 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_35 [i_16] [i_15] [19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_14]))) : (arr_19 [(_Bool)1]))));
                            var_43 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_1] [i_11] [i_14] [i_15] [i_16 + 2]))) - (arr_4 [i_11 - 3] [i_14])))));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */unsigned int) arr_36 [i_11 - 3] [i_11]);
            var_45 = ((/* implicit */int) arr_7 [(_Bool)1]);
        }
        var_46 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(signed char)19] [7ULL] [i_1] [i_1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(short)4]))))) : (arr_42 [i_1] [i_1] [0LL] [8U])));
        arr_53 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [(signed char)14] [(signed char)18] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [17U] [i_1]))) : (arr_42 [(unsigned short)2] [i_1] [(signed char)0] [i_1])));
    }
    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_28 [i_17] [i_17]) == (arr_28 [i_17] [i_17]))))));
        var_48 = ((/* implicit */unsigned char) arr_28 [i_17] [i_17]);
    }
}
