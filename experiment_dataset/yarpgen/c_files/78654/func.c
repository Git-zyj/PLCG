/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78654
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
    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))) ? ((~(var_7))) : (((/* implicit */long long int) (+(var_2))))))) : (min((max((var_10), (((/* implicit */unsigned long long int) 8341961795848230365LL)))), ((+(12736304045128844893ULL)))))));
    var_12 = 14ULL;
    var_13 = ((/* implicit */int) max(((~(var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_4)), (max((((/* implicit */signed char) var_9)), (var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned char) ((int) arr_0 [i_0]));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-120))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [10LL]);
        }
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_10 [i_0])))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */short) arr_3 [i_2] [i_3]);
                    var_17 = ((/* implicit */_Bool) ((unsigned long long int) var_6));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_17 [i_3 + 1] [i_3] [i_2 + 1] [i_2 - 2]));
                        arr_21 [i_5] [i_4] [(_Bool)1] [(short)19] [(_Bool)1] = ((/* implicit */int) (~(var_3)));
                        var_18 -= ((/* implicit */long long int) (-(arr_1 [i_2 + 2])));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_2 - 3] [i_5]))));
                        var_20 = ((/* implicit */int) arr_19 [i_5] [i_2 - 3] [i_2 - 3] [i_4] [i_5]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = arr_16 [i_0] [i_0] [i_0] [i_0];
                        var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_6] [i_6 + 1] [i_4] [i_4] [i_3] [i_2 + 2])) ? (((/* implicit */int) arr_18 [(signed char)3] [(signed char)13] [i_6 + 1] [i_6 + 1] [i_2] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_6 - 1] [i_4] [i_4] [i_4] [i_2 - 2]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 - 2] [i_2] [i_2 + 2] [i_3 - 3])) ? (arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_3 - 1]) : (arr_16 [i_2 - 1] [i_2] [i_2 + 2] [i_3 - 3])));
                        arr_27 [i_7] [i_4] [i_7] [i_7] [i_0] [i_0] = (-(((/* implicit */int) arr_23 [i_3 + 1] [i_7] [i_3] [i_3 - 3] [i_3] [i_3 - 2])));
                        arr_28 [i_0] [i_2 - 1] [i_3 - 2] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */signed char) arr_25 [i_7] [i_3 - 3] [13] [18ULL] [i_3 - 1]);
                    }
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_23 -= ((/* implicit */short) (~(((unsigned long long int) arr_31 [7LL] [i_3] [i_4] [i_8]))));
                        var_24 *= ((/* implicit */unsigned long long int) ((_Bool) ((var_3) << (((8547102894760200653LL) - (8547102894760200653LL))))));
                        arr_32 [i_4] [i_4] [i_4] |= ((/* implicit */short) ((unsigned long long int) arr_25 [i_8] [i_4] [8LL] [(short)10] [i_8]));
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2418177637913433928LL)) ? (2418177637913433928LL) : (9223372036854775807LL)));
                }
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned char) (+(arr_10 [i_2 - 3])));
                    arr_35 [i_0] [i_0] [i_2] [i_0] [i_9] = (+(((unsigned long long int) arr_34 [i_9] [i_3 - 2] [i_2] [i_0])));
                    var_27 = ((/* implicit */long long int) arr_15 [i_9] [i_2] [i_3] [i_9] [i_2]);
                }
                var_28 ^= ((/* implicit */signed char) arr_2 [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned char) arr_8 [i_3 - 1] [i_10] [i_3 - 1]);
                    arr_40 [i_0] [i_2 - 3] [i_3] [i_10] = ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_3 + 2] [i_3 + 2] [i_2 - 2] [i_0] [i_2 + 1]));
                    arr_41 [i_0] [i_0] [i_10] [(signed char)6] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (179445119995562346LL))))));
                }
                var_30 ^= ((/* implicit */unsigned char) (+(arr_0 [i_2 - 2])));
                arr_42 [i_0] [i_2] [i_0] = ((/* implicit */short) 2305843009079476224ULL);
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            arr_45 [14LL] [i_11] = ((/* implicit */long long int) arr_5 [i_11] [i_11]);
            arr_46 [i_11] = ((/* implicit */long long int) (!((_Bool)1)));
            var_31 = (~((~(((/* implicit */int) arr_13 [5LL])))));
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_11]))));
        }
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                arr_51 [i_13] [i_0] [i_13] = ((/* implicit */_Bool) (~(5262543741412421002ULL)));
                arr_52 [i_0] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_13] [i_13] [i_13])) ? (((/* implicit */int) (!(arr_11 [i_12])))) : (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -179445119995562345LL))));
                            arr_59 [i_15] [i_14] [(unsigned char)0] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_44 [i_14]);
                            var_34 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (arr_25 [i_13] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14])));
                            var_35 = ((/* implicit */unsigned char) ((unsigned long long int) (-(arr_43 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (short i_16 = 3; i_16 < 17; i_16 += 4) 
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((long long int) 13184200332297130633ULL)))));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_61 [i_16 - 3] [i_16 - 2] [i_16 - 1])) ? (arr_61 [i_16 - 1] [i_16 - 3] [i_16 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            }
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (short i_19 = 2; i_19 < 19; i_19 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249)))))));
                            var_39 = ((/* implicit */short) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
    {
        var_40 = ((/* implicit */signed char) arr_69 [i_20] [i_20]);
        /* LoopSeq 1 */
        for (long long int i_21 = 2; i_21 < 24; i_21 += 1) 
        {
            arr_74 [i_20] = ((/* implicit */unsigned long long int) arr_73 [i_20] [i_21]);
            var_41 = ((long long int) min((((/* implicit */unsigned long long int) arr_72 [i_21 - 2] [i_21 + 1] [i_21 - 2])), (((((/* implicit */_Bool) (signed char)-51)) ? (arr_71 [i_20]) : (((/* implicit */unsigned long long int) -947626398))))));
            arr_75 [i_20] [i_21] [i_21] = max((min((arr_69 [i_21 + 1] [i_21 - 1]), (arr_69 [i_21 - 1] [i_21 - 1]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_69 [i_21 + 1] [i_21 + 1]))))));
        }
    }
    var_42 = ((/* implicit */short) 8547102894760200653LL);
}
