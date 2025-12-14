/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96232
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
    var_10 -= ((/* implicit */long long int) (-(var_2)));
    var_11 |= ((/* implicit */unsigned long long int) ((unsigned char) var_4));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_12 = ((/* implicit */signed char) ((var_6) / (((int) (unsigned short)42747))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned short) var_5);
        var_14 ^= ((/* implicit */signed char) var_6);
        arr_5 [i_1] = ((signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((var_3) ? (var_6) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) arr_4 [i_1 + 1]))));
        var_15 |= ((/* implicit */signed char) var_6);
    }
    /* LoopSeq 4 */
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) ((((var_3) ? (((/* implicit */int) arr_1 [i_2 - 3] [i_2 + 1])) : (((/* implicit */int) (!(var_3)))))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-66)) / (((/* implicit */int) arr_4 [(unsigned char)1]))))) ? ((-9223372036854775807LL - 1LL)) : (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))))) - (-9223372036854775804LL))) + (29LL)))));
        var_16 += ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
        var_17 += ((/* implicit */int) ((((/* implicit */int) (signed char)15)) == (((/* implicit */int) ((signed char) var_2)))));
    }
    for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((_Bool) (signed char)-126));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_19 = (signed char)-59;
            var_20 += ((/* implicit */signed char) ((unsigned char) ((var_8) ? (var_6) : (((/* implicit */int) arr_11 [i_4])))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)58354)) / (((/* implicit */int) (!(arr_9 [i_7])))))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_3] [i_3]))))));
                            arr_21 [i_3] [i_3] [(unsigned short)2] [i_6] [i_7] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                arr_22 [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(var_5)))), (min((arr_3 [i_3]), (((/* implicit */unsigned short) var_1))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_27 [i_3] = ((/* implicit */signed char) arr_24 [i_3] [i_4] [i_4] [i_3]);
                arr_28 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_7 [i_3 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1]))))) : ((-(((/* implicit */int) (signed char)45))))));
                var_22 ^= ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                var_23 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 2])) == (((/* implicit */int) (unsigned char)127))))) % (((((/* implicit */int) (signed char)124)) / (((/* implicit */int) (signed char)-84))))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_36 [i_3] [i_3] [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_3 + 1] [i_3] [i_3 - 1] [i_10] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [i_3] [i_4] [i_3] [(signed char)7] [i_11] [i_3 + 1] [i_10]))));
                        arr_40 [i_11] [i_11] [6LL] [i_11] [i_3] = ((/* implicit */signed char) ((long long int) arr_29 [i_9] [i_10] [i_3]));
                        var_24 = ((/* implicit */signed char) ((16753777833901239079ULL) != (((/* implicit */unsigned long long int) 7))));
                        arr_41 [i_3] [i_3] = ((/* implicit */signed char) var_4);
                    }
                    for (signed char i_12 = 1; i_12 < 7; i_12 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */signed char) (-((~(((/* implicit */int) var_7))))));
                        var_26 ^= ((/* implicit */unsigned short) arr_31 [i_3 + 2] [i_3] [i_3 + 2] [(signed char)4]);
                    }
                    arr_45 [i_3] = ((/* implicit */unsigned short) (!(arr_35 [i_3 + 1] [i_3 + 1])));
                }
                for (signed char i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_8))));
                    arr_50 [i_4] [i_4] [i_9] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_3] [i_9] [i_9] [i_3] [(signed char)2] [7ULL] [i_13])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_13])))))));
                }
                for (signed char i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_28 ^= ((/* implicit */unsigned short) var_6);
                        var_29 = ((/* implicit */signed char) min((var_29), (arr_49 [i_4] [(unsigned short)4] [(unsigned short)4] [4])));
                    }
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-56)))))));
                        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3 - 1]))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((unsigned short) arr_13 [(signed char)4] [i_9]));
                        var_33 = ((/* implicit */int) (signed char)67);
                        var_34 = ((/* implicit */unsigned char) ((signed char) ((arr_30 [i_3]) + (((/* implicit */int) arr_59 [i_3] [(signed char)0] [i_4] [i_9] [i_14] [i_17])))));
                        var_35 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_4 [i_9])))) * (((/* implicit */int) ((_Bool) arr_58 [i_3] [(unsigned char)3] [i_9] [(signed char)5] [i_9] [i_14] [i_17])))));
                        var_36 += ((/* implicit */unsigned short) (-(arr_47 [i_4])));
                    }
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_37 *= ((/* implicit */unsigned short) arr_32 [i_4]);
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_4] [(signed char)7] [i_9] [i_14] [i_18])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)59))))) : (arr_24 [i_3 - 1] [i_4] [i_18] [i_3])));
                    }
                    var_39 = ((/* implicit */signed char) arr_58 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]);
                    var_40 ^= (!(((/* implicit */_Bool) -433107339549103519LL)));
                }
                var_41 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3 - 1]))));
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)-62)) | (((/* implicit */int) (_Bool)1))))));
                    var_43 += ((/* implicit */signed char) (unsigned char)155);
                }
                arr_72 [(unsigned short)4] [i_3] [i_9] = ((/* implicit */long long int) var_3);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
    {
        var_44 = ((/* implicit */long long int) ((signed char) arr_73 [i_20]));
        var_45 = ((/* implicit */long long int) ((signed char) (unsigned short)0));
    }
    for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
    {
        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (!(var_3))))));
        var_47 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_77 [i_21])), (arr_75 [i_21]))));
        var_48 = ((/* implicit */signed char) max((((long long int) arr_78 [i_21])), (((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_21] [i_21])) | (((/* implicit */int) arr_78 [i_21])))))));
        var_49 = ((/* implicit */unsigned long long int) ((long long int) arr_76 [i_21] [i_21]));
    }
}
