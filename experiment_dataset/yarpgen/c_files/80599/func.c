/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80599
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_13 |= ((/* implicit */long long int) ((6907323481711049324ULL) > (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16131087977594739497ULL)) ? (1808250728U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) 2315656096114812117ULL)))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1)))))));
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (var_4)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_14 [(signed char)2] [15U] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)123))));
            var_16 ^= ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) arr_5 [(signed char)0] [(signed char)0] [i_0])))));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4]))) : (arr_3 [i_0] [i_0])))))))));
                var_18 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)34672))));
                arr_17 [i_4] = ((/* implicit */long long int) ((arr_0 [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_4])))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30863))))))));
            }
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), ((~(var_0)))));
                arr_21 [i_0] [(unsigned char)4] [i_0] = ((/* implicit */signed char) var_5);
            }
            for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (arr_2 [i_0] [i_3] [i_0])));
                arr_24 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                arr_25 [i_0] [i_0] [15LL] = arr_6 [i_0] [i_0] [i_0];
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_28 [i_3] [i_0] [i_3] [i_3] [i_7] |= arr_1 [i_0];
                    var_22 += ((/* implicit */signed char) (~(2315656096114812131ULL)));
                    arr_29 [i_7] [i_7] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_3 [i_0] [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 5083618317242783273LL)) && (((/* implicit */_Bool) var_10))))))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_23 ^= ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) arr_1 [i_3]))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) * (((16131087977594739491ULL) / (arr_2 [i_0] [i_3] [i_8])))));
            }
        }
        for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((arr_33 [i_0]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_9]))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [1ULL] [1ULL] [i_0])))));
            var_26 ^= ((/* implicit */short) ((arr_2 [8LL] [i_0] [i_0]) * (arr_2 [i_0] [i_0] [i_9])));
            arr_34 [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((var_4) % (((/* implicit */int) var_7))));
        }
        arr_35 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_2), (var_7)))) ? (((((/* implicit */unsigned long long int) var_12)) - (16274670867413534469ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_11))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)125)))) & (((((/* implicit */_Bool) 2315656096114812105ULL)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)-97))))))))))));
        var_28 += 5158386101189253217ULL;
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 1) 
    {
        var_29 ^= ((/* implicit */unsigned int) arr_11 [i_11 + 2]);
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_30 = ((/* implicit */long long int) (((_Bool)0) ? (7271961083077387728ULL) : (16131087977594739497ULL)));
            var_31 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 13288357972520298408ULL)) || (((/* implicit */_Bool) arr_39 [(unsigned short)10]))))));
            arr_45 [i_11] [i_12] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) (_Bool)0))));
            arr_46 [i_11] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_5 [i_11] [i_11] [i_12])))) + (2147483647))) << (((((/* implicit */int) (unsigned short)33017)) - (33017)))));
        }
        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 3; i_14 < 11; i_14 += 4) 
            {
                arr_51 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) - (var_4)));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_54 [i_11] [i_11] [i_14] = ((/* implicit */long long int) var_11);
                    arr_55 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [9U] [i_11] = ((/* implicit */signed char) 5038838922318604604LL);
                    var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14] [i_13] [i_11]))) : (arr_7 [(signed char)15] [(signed char)15] [(signed char)15])))));
                    arr_56 [i_11 + 2] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_11]))) * (arr_38 [i_11] [i_11])))));
                    var_33 -= ((unsigned int) (unsigned char)183);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 1; i_16 < 11; i_16 += 4) /* same iter space */
                {
                    arr_59 [i_11] [i_11] [i_13] [i_11] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13288357972520298398ULL)) ? (arr_3 [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) arr_53 [i_11 - 2] [i_13]))))))));
                    var_34 = ((/* implicit */long long int) arr_27 [i_11] [i_11 + 4]);
                }
                for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 4) /* same iter space */
                {
                    var_35 ^= ((/* implicit */signed char) var_4);
                    arr_63 [i_17] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    arr_64 [i_11] = ((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)1179))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_36 [i_14] [i_14])))));
                        var_37 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) * (arr_12 [i_17 + 1])));
                    }
                    for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) arr_31 [i_11]))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (~(arr_0 [i_11 - 1]))))));
                        var_40 = ((/* implicit */_Bool) max((var_40), (arr_4 [i_11])));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) var_3))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_17 - 1])) + (((/* implicit */int) arr_33 [i_17 - 1]))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    for (signed char i_21 = 2; i_21 < 9; i_21 += 4) 
                    {
                        {
                            var_43 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_11 + 1] [i_14 - 2] [i_21 + 1] [i_21 + 1]))));
                            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_6)))))));
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) arr_26 [i_11 - 1] [i_13] [i_13] [i_13] [i_13]))));
                            var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [9ULL] [1U] [4LL] [i_20])) ? (((/* implicit */int) arr_72 [i_13])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) arr_44 [i_21 + 2] [i_14 - 1] [i_21]))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_66 [i_11] [i_11 - 2] [i_14 - 2] [i_11] [i_21 + 2])) >> ((((~(-3842376773314414414LL))) - (3842376773314414413LL)))));
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1775443905606757439LL) - (((/* implicit */long long int) ((/* implicit */int) (short)56)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_11] [i_11] [i_11] [i_13]))) : (927685556639444492ULL)));
            var_49 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)111)) > (((/* implicit */int) (_Bool)1)))))));
            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((arr_69 [i_11] [i_13] [(unsigned short)4] [(unsigned short)4]) - (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 536870896U)) || (((/* implicit */_Bool) var_6)))))))))));
            var_51 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_39 [i_13]))));
        }
    }
    var_52 = ((/* implicit */int) ((min((((/* implicit */long long int) (-(0U)))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (17042430230528LL))))) << (((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-101)) && (((/* implicit */_Bool) (unsigned short)48060))))), (min((-7580561141976315750LL), (((/* implicit */long long int) var_8)))))) + (7580561141976315808LL)))));
    var_53 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) ((((/* implicit */int) (short)-4957)) == (((/* implicit */int) var_1)))))));
}
