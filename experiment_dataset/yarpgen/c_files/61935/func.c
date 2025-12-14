/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61935
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0])), ((short)-28718)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-28711))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned int) (short)8947)), (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) << (((549755813887LL) - (549755813882LL)))))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_5 [i_1]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) var_4)))) >> (((((/* implicit */int) arr_4 [i_1])) - (29829)))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_23 = ((/* implicit */short) arr_4 [i_1]);
            var_24 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (2086460345) : (((/* implicit */int) (short)-28703))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (short)-28718)) == (2147483647)));
            var_26 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 968737919U)) ? (((/* implicit */int) arr_6 [i_1] [i_2] [(_Bool)1])) : (((/* implicit */int) (unsigned short)20468))))) - ((+(715148520U))));
        }
        for (int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (4294967295U))))))));
            var_28 &= ((/* implicit */short) arr_7 [i_1]);
            var_29 ^= ((/* implicit */signed char) ((_Bool) ((arr_10 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)-8964))))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_30 = ((/* implicit */short) (-(((/* implicit */int) (short)32767))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15)))) < (max((arr_14 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_4))))))))));
        }
        arr_15 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))))) & ((~(arr_11 [i_1]))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1])) : (var_3)))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [(short)8] &= ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) - (arr_18 [i_5])))));
        var_32 &= ((/* implicit */unsigned long long int) (~(arr_16 [i_5] [i_5])));
        var_33 &= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_17 [i_5]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50199)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_6] [(signed char)3] [i_6]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-8356), ((short)0))))) : ((~(var_1))))) : (((((/* implicit */_Bool) arr_17 [i_6])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6])))))));
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */short) (_Bool)1);
            var_36 ^= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 4106753339U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) | (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)63888)), (((int) (short)448)))))));
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_6]) < (arr_18 [i_8]))))) < (((((/* implicit */_Bool) (short)0)) ? (max((((/* implicit */long long int) (short)0)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_20 [i_8] [i_6]))))))))));
            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_8 [i_8]), (arr_8 [i_6]))))));
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                arr_34 [i_6] [(_Bool)1] [3U] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41587)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned short)13661))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)12] [i_9] [i_6]))) : (var_5)))))) ? (((((long long int) (_Bool)1)) | (((/* implicit */long long int) 2147483634)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_14)))))));
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_23 [i_9] [i_9]), (arr_23 [i_11] [i_6])))) & (((/* implicit */int) min((((/* implicit */unsigned short) (short)32385)), (var_4))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54569)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)34929)))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13661)) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)32376)) ? (arr_5 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6]))))))))))));
                    var_41 ^= ((/* implicit */_Bool) var_17);
                }
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_43 [i_9] [i_9] [i_10] [i_9] [i_9] [i_13] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) arr_42 [i_9] [i_13])), (-1LL)))));
                        var_43 = ((/* implicit */short) (~((+(((/* implicit */int) arr_38 [i_13] [i_12] [i_10] [i_9] [i_9] [i_6]))))));
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_44 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_40 [i_6] [i_6] [i_10] [i_10]) : (arr_13 [i_6] [(short)11] [i_10])))) ? ((-(arr_40 [i_6] [i_9] [i_10] [i_14]))) : (((((/* implicit */long long int) arr_37 [(unsigned char)2] [i_9] [i_9])) & (arr_40 [i_14] [i_6] [5U] [i_6])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        arr_48 [i_6] [i_6] [i_15] [i_15] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_42 [i_9] [(signed char)9]))))) ^ ((~(((/* implicit */int) (_Bool)1))))));
                        var_45 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                        arr_49 [i_9] [i_9] [i_10] [i_14] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)43))));
                    }
                    for (unsigned int i_16 = 3; i_16 < 9; i_16 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_53 [i_10] [i_10] [i_10]))))))))));
                        var_47 &= ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
                        var_49 = ((/* implicit */signed char) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_3))), (((/* implicit */unsigned long long int) (unsigned char)63)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned short)23948)))))));
                        var_50 = ((/* implicit */unsigned short) (((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)93)), ((unsigned char)22)))))) <= (max((-1144430775), (((/* implicit */int) (unsigned char)193))))));
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(var_2))) : (arr_14 [i_6] [i_9] [i_6])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_38 [i_6] [i_9] [i_10] [i_10] [i_14] [i_17])))))));
                    }
                    var_52 = ((18446744073709551589ULL) - (((/* implicit */unsigned long long int) (~(((long long int) var_0))))));
                }
                var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)121)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)24)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_10]))) | (min((arr_35 [i_6] [6]), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)18)))) != (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)-118)))))))))));
                var_54 = (!((_Bool)0));
                var_55 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((unsigned long long int) (unsigned short)41587)) : (7957388828962560488ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7482731552215806326LL)));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_6] [i_9])) ? (((/* implicit */int) (short)11250)) : (((/* implicit */int) (_Bool)1)))))));
                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)7503)))))));
            }
            var_58 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
            var_59 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_9] [i_9] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9] [i_6] [i_6]))) : (arr_37 [i_6] [i_9] [i_9]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_9] [i_9] [(unsigned char)2])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_32 [i_9] [i_9] [i_6] [i_6])))))));
        }
        var_60 = ((/* implicit */long long int) ((((((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) - (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) - (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        arr_60 [i_6] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63886))))) / (min((18241440552741414372ULL), (((/* implicit */unsigned long long int) var_9)))))) != (((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_61 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_13))))), ((-(((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) (-(var_12)))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88)))))))));
}
