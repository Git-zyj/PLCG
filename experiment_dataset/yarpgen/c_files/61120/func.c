/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61120
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 -= ((/* implicit */short) max((min((max((var_2), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) var_0))));
        arr_3 [(unsigned char)10] |= ((/* implicit */_Bool) min((((/* implicit */int) (short)26282)), (((((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)-26283)))) ? (max((31), (((/* implicit */int) var_12)))) : (-32)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((arr_1 [i_0]), (arr_2 [i_0])));
        var_14 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_10)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (signed char)-63))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [14ULL] [i_4] [i_1])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) var_4)) ? (0) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_7 [i_3 + 2] [i_3 - 2] [i_3 - 1])));
                        var_17 -= (unsigned char)63;
                        arr_15 [i_4] |= ((/* implicit */unsigned int) ((unsigned short) -32));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) (unsigned char)62);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [8] [(short)14])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)-63)))))));
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_20 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_5])) + (((/* implicit */int) var_12))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) (short)-26283)) ? (((/* implicit */int) arr_22 [i_6] [8LL] [i_6 + 1])) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_6 + 2])));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_7 [i_1] [i_5] [i_6 - 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
            {
                arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_1] [21LL] [i_1] [i_1] [i_1] [(unsigned char)21]) - (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) arr_31 [i_1] [(signed char)21] [i_1])) : (var_3)));
                var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (short)-24658)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
            }
            for (short i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */short) arr_32 [i_1] [i_1] [i_5] [i_10]);
                var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_1]))));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                for (int i_13 = 1; i_13 < 21; i_13 += 4) 
                {
                    {
                        arr_44 [(short)16] [i_1] [i_1] [(_Bool)1] [i_13 - 1] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [1] [i_12] [1] [(unsigned char)8]))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)23612))));
                        arr_45 [(unsigned char)15] [(unsigned char)15] [i_12] [i_12] [15ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_1] [i_1] [8U])) - (var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                {
                    var_25 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [(unsigned short)3] [(unsigned short)13] [i_14] [i_14]))));
                    arr_51 [i_1] [i_14] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-18))));
                }
            } 
        } 
        arr_52 [i_1] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_46 [(unsigned short)13] [i_1] [i_1])) : (arr_13 [i_1] [i_1] [i_1] [i_1]));
        arr_53 [i_1] = ((/* implicit */short) var_1);
    }
    for (int i_16 = 1; i_16 < 12; i_16 += 4) 
    {
        var_26 = ((((((/* implicit */_Bool) arr_50 [i_16] [i_16 + 1])) ? (507996975) : (((/* implicit */int) arr_29 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 + 1])))) & (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) 6821913508306459369ULL))))))));
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (arr_18 [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26230)))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((arr_47 [i_16 - 1]), (arr_47 [i_16 - 1]))))));
    }
    var_29 = ((/* implicit */int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)93)))))))))));
}
