/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95997
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_16 = var_12;
        arr_3 [i_0] [(signed char)11] = arr_0 [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_17 = 82332016;
            var_18 ^= ((/* implicit */signed char) (-((-(arr_5 [i_0])))));
            arr_6 [i_0] [6] [i_1] = var_6;
            arr_7 [i_0] = var_0;
        }
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_2] &= ((((/* implicit */int) var_11)) % (max((((int) 1403191916)), (((/* implicit */int) min((arr_9 [i_2]), (var_6)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) ((signed char) var_0)))));
                    arr_15 [(signed char)15] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_9 [i_3 - 1]), (var_6)))) + (2147483647))) >> ((((-(1580253089))) + (1580253089)))));
                    arr_16 [i_4] = (signed char)-120;
                    var_20 ^= ((((/* implicit */_Bool) (signed char)-100)) ? (-2053607401) : (2147483647));
                }
            } 
        } 
        arr_17 [i_2] = ((arr_8 [i_2]) % (arr_8 [i_2]));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_20 [i_2] [i_2] [i_5] = (+(((((/* implicit */int) arr_19 [i_2] [i_2])) % (((arr_12 [i_2] [i_2] [10]) + (((/* implicit */int) arr_13 [i_2])))))));
            arr_21 [i_2] = ((/* implicit */signed char) ((((int) var_7)) * (((((658954726) / (-2147483642))) / (((int) var_14))))));
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_25 [i_2] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) && (((/* implicit */_Bool) min((max((-715062863), (1586251384))), (2147483647))))));
            /* LoopSeq 4 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                arr_29 [i_6] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_7])) ? (((/* implicit */int) var_6)) : (arr_27 [i_2] [i_6] [i_6]))), (arr_23 [i_6]))), (((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) var_14))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_32 [i_2] [i_7] [i_2] = ((/* implicit */signed char) max((((arr_10 [i_2] [i_6]) & (((/* implicit */int) arr_31 [i_2] [i_6] [(signed char)21] [i_8] [i_2] [i_2])))), (arr_23 [(signed char)15])));
                    arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_12 [i_2] [i_6] [(signed char)16]))))));
                    arr_34 [i_2] [i_6] [i_7] = ((/* implicit */int) var_0);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((((/* implicit */int) (signed char)-100)) % (max((arr_27 [i_2] [i_7] [i_8]), (((/* implicit */int) arr_22 [i_6] [i_6] [i_7])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)50))))) ? (((/* implicit */int) ((signed char) arr_28 [(signed char)14] [10] [10]))) : ((-(((/* implicit */int) (signed char)122)))))))))));
                }
            }
            for (int i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                arr_37 [i_6] [i_6] = ((arr_23 [i_9 - 1]) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_3)) : (arr_26 [i_2] [i_2] [i_9]))))))));
                var_22 = ((/* implicit */signed char) max((max((arr_12 [i_9 + 2] [i_9 + 2] [(signed char)22]), (arr_12 [i_9 + 1] [i_9 + 4] [(signed char)4]))), (min((arr_18 [i_9 + 1] [i_9 + 1]), (arr_18 [i_9 + 2] [i_9])))));
                arr_38 [(signed char)15] &= ((/* implicit */int) var_10);
                var_23 = max((((signed char) arr_27 [i_2] [i_9 - 1] [i_9 + 2])), (var_0));
            }
            for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 1; i_11 < 22; i_11 += 2) 
                {
                    arr_43 [i_2] [i_6] [1] [i_11] = -242540486;
                    arr_44 [i_2] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_35 [i_11 + 1] [i_11 - 1] [i_11 - 1]) : (((((/* implicit */int) arr_22 [i_6] [i_10] [14])) + (((/* implicit */int) var_15))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((((/* implicit */int) arr_22 [i_2] [0] [i_10])) % (((/* implicit */int) var_1))))));
                    arr_45 [i_2] [i_2] [(signed char)18] [i_6] [(signed char)10] [i_11] &= ((/* implicit */signed char) (+((-(arr_12 [i_2] [8] [10])))));
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */signed char) max((arr_26 [i_2] [i_6] [(signed char)8]), (((max((var_4), (-1586251385))) - ((+(var_7)))))));
                            arr_52 [i_2] [i_6] [i_12] [i_12] = ((((((/* implicit */int) var_11)) + (((/* implicit */int) arr_19 [i_6] [i_6])))) >> (((((/* implicit */int) (signed char)-67)) + (93))));
                            arr_53 [i_12] = max(((~(arr_27 [i_10] [i_12] [i_13]))), (max(((-(((/* implicit */int) (signed char)40)))), (((((/* implicit */int) (signed char)-67)) * (((/* implicit */int) (signed char)40)))))));
                            arr_54 [i_2] [i_12] = ((/* implicit */signed char) max((((int) var_3)), ((-(((/* implicit */int) ((signed char) arr_41 [i_12] [i_12] [i_13])))))));
                        }
                    } 
                } 
                var_26 = ((((arr_46 [6] [i_2] [i_10]) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1781046935))))))) ? (max((((arr_26 [i_2] [i_6] [i_6]) + (((/* implicit */int) (signed char)127)))), (arr_18 [i_2] [i_6]))) : (((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) && (((/* implicit */_Bool) -1531776196))))) : (min((1531776183), (2147483642))))));
            }
            for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                arr_57 [i_2] [i_6] [i_14] = ((max((((/* implicit */int) ((-1223167514) != (((/* implicit */int) var_8))))), (max((arr_18 [i_2] [0]), (arr_23 [i_14]))))) + (max((((/* implicit */int) (signed char)47)), ((~(((/* implicit */int) var_15)))))));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (arr_22 [i_2] [1] [i_15]))))));
                    var_28 += ((/* implicit */int) var_0);
                }
                var_29 = ((((/* implicit */int) max((arr_56 [i_2] [i_2] [i_6] [i_14]), (arr_50 [i_2] [14] [i_2] [i_6] [i_14] [i_14])))) >> (((((((/* implicit */_Bool) arr_58 [i_2] [i_6] [i_14])) ? (((/* implicit */int) arr_58 [i_2] [i_2] [22])) : (((/* implicit */int) var_15)))) - (123))));
                arr_61 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_27 [i_2] [7] [i_2])))) ? (((/* implicit */int) arr_19 [i_2] [i_6])) : (((/* implicit */int) min((arr_50 [i_2] [i_2] [i_6] [i_14] [i_14] [i_14]), (var_2)))))))));
            }
            var_30 |= ((/* implicit */signed char) arr_36 [i_2] [i_2] [i_2] [i_2]);
        }
    }
    var_31 = ((/* implicit */signed char) var_7);
    var_32 = var_3;
    var_33 = var_3;
}
