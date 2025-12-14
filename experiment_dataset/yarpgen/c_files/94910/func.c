/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94910
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) var_17))));
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))))), (((/* implicit */int) var_14))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) var_8)))))), (min((((/* implicit */unsigned long long int) min(((unsigned char)161), (((/* implicit */unsigned char) var_19))))), (min((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_0] [i_1] [i_2])))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) (-(-389981769)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)108)))) : (((((/* implicit */int) arr_5 [i_0 - 1] [i_1])) ^ (((/* implicit */int) arr_2 [i_2])))));
                    var_22 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_0 - 1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14337821084696032139ULL)) ? (((/* implicit */int) (short)13304)) : (((/* implicit */int) var_18))))) & (arr_10 [i_0 + 1] [i_0 + 1] [(_Bool)1] [(unsigned char)10] [i_3] [i_0])));
                        var_23 = ((/* implicit */signed char) arr_2 [i_0 + 2]);
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (497266283U))), (((/* implicit */unsigned int) (unsigned char)62))))));
                        var_25 |= ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (2303624668U)))), (arr_12 [i_4 + 2] [i_4] [i_4] [10ULL])))), (((min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_4])), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1]))) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))))));
                        var_26 = ((((/* implicit */_Bool) 65535ULL)) ? (15060026409062789353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)194)))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (short)32765))))) ? (((/* implicit */int) min((arr_16 [i_0] [i_1] [i_1] [i_5] [i_0]), (((/* implicit */short) ((_Bool) arr_0 [i_0])))))) : (((/* implicit */int) var_10))));
                        var_28 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) arr_12 [i_1] [(unsigned char)6] [i_1] [i_0 + 2]))))));
                        var_29 = ((min(((-(((/* implicit */int) var_19)))), (((/* implicit */int) arr_12 [i_0] [i_0] [(short)1] [i_0])))) | ((-(((((/* implicit */int) (short)-11028)) | (((/* implicit */int) arr_12 [i_0] [(signed char)7] [i_0] [i_0])))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) min((arr_12 [i_5] [(unsigned char)4] [i_1] [1]), (arr_12 [i_1] [i_2] [i_1] [i_0])))))));
                        arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2])))), (((var_14) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) arr_2 [i_2])), (((/* implicit */unsigned char) ((signed char) arr_3 [i_0] [i_0]))))))) : ((-(arr_10 [i_0] [i_0] [3] [i_5] [i_0] [i_0])))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_16))) * (((/* implicit */int) var_16))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 + 1] [i_6 - 1])) * (((/* implicit */int) var_9))));
            arr_23 [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((short) arr_9 [i_0 + 1] [i_0] [i_6 - 1]));
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_9 - 1]))))) ? ((-(((/* implicit */int) arr_4 [i_9 - 1])))) : (((/* implicit */int) ((unsigned char) arr_4 [i_9 - 1])))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */int) var_19);
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned char)179))))) & ((+(4108922989013519467ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)1), (arr_9 [i_0 - 1] [i_0] [i_0]))))) : (((arr_26 [i_0 + 1] [i_0] [4ULL] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_10 [i_7] [i_7] [i_0 - 1] [i_7] [i_7] [i_0])))));
        }
    }
    for (short i_11 = 1; i_11 < 21; i_11 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            var_35 = ((/* implicit */int) (-(7607336497946983565ULL)));
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_11 - 1])) && (((/* implicit */_Bool) arr_36 [i_11 + 3])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_11 + 3]))))))));
            arr_39 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
            var_37 = min((min((arr_35 [i_12 + 1]), (((/* implicit */unsigned char) arr_36 [i_11 + 1])))), (min((((/* implicit */unsigned char) arr_36 [i_11 + 2])), (arr_35 [i_12 + 1]))));
            var_38 &= ((/* implicit */_Bool) var_6);
        }
        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            var_39 = ((/* implicit */unsigned char) (short)23102);
            var_40 = ((/* implicit */unsigned int) min((127), (((/* implicit */int) (short)769))));
            arr_43 [(unsigned char)1] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1817967384)) == (389254627853200229ULL)));
            var_41 |= ((/* implicit */short) arr_41 [i_11]);
        }
        arr_44 [i_11] = arr_41 [i_11];
        var_42 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_8)))) | (((/* implicit */int) (signed char)18))))));
        var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_38 [i_11 + 2] [i_11 + 3]))))) ? (((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11 + 2])) ? (var_6) : (((/* implicit */int) arr_38 [i_11 + 3] [i_11 - 1])))) : (((/* implicit */int) min((arr_38 [i_11 + 1] [i_11 + 2]), (arr_38 [i_11 + 1] [i_11 - 1])))));
        var_44 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_8))))));
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_45 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)18)), (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32761)))));
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                {
                    var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_16)), (arr_24 [0ULL] [i_15] [(unsigned char)4]))), (((((/* implicit */_Bool) var_1)) ? (14761736457867053485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)39)))))) : (((/* implicit */int) min(((short)22895), (((/* implicit */short) min((var_17), (arr_47 [i_14] [i_16])))))))));
                    arr_51 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) 496335809167426267ULL)) ? (((/* implicit */int) arr_14 [i_14] [i_15] [i_16])) : (((/* implicit */int) arr_27 [i_15] [3U])))), (((((/* implicit */_Bool) arr_5 [i_14] [i_14])) ? (((/* implicit */int) (short)-25543)) : (((/* implicit */int) var_12))))))));
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) 561695504)) >= (((unsigned int) 4ULL))))), (((((/* implicit */_Bool) arr_40 [i_15 - 1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_40 [i_16 - 1]))))));
                                var_48 = ((/* implicit */unsigned long long int) (-((+(arr_50 [i_14 - 1] [i_15 + 1] [i_16 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [(short)8]), (arr_1 [(short)8])))) ? (((((/* implicit */_Bool) arr_38 [i_14 - 1] [i_14])) ? (((/* implicit */int) arr_1 [(unsigned char)4])) : (((/* implicit */int) var_19)))) : ((+(((/* implicit */int) arr_38 [i_14 - 1] [i_14])))))))));
    }
    /* vectorizable */
    for (unsigned char i_19 = 2; i_19 < 21; i_19 += 4) 
    {
        var_50 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3253))) <= (arr_58 [i_19 - 1] [i_19 - 1])));
        arr_59 [i_19] [i_19] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_56 [i_19] [i_19 - 1])))));
        arr_60 [i_19] [i_19] = arr_57 [i_19];
        var_51 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_56 [i_19] [i_19 + 3]));
    }
    var_52 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_19)), (var_18)));
}
