/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94243
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_15 += ((/* implicit */short) arr_10 [i_2] [i_0]);
                        arr_11 [i_0] [i_0] [12LL] [i_3] = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
        } 
        var_16 &= ((/* implicit */unsigned int) ((short) arr_0 [(_Bool)1] [i_0]));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_0 [i_4] [i_4])), (var_6)))));
        arr_16 [i_4] = ((/* implicit */signed char) (-(var_2)));
        arr_17 [i_4] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) <= (((/* implicit */int) arr_3 [i_4] [(signed char)12] [i_4]))))), (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))));
    }
    var_17 = ((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), ((+(9223372036854775807LL)))));
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_20 [(_Bool)1] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_18 [i_5])))), (((/* implicit */int) ((short) ((short) arr_4 [i_5] [i_5]))))));
        var_18 -= ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 137170518016LL)) || (((/* implicit */_Bool) -9223372036854775807LL)))))) != (9223372036854775807LL)))));
        arr_22 [i_5] [(short)11] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6])) | (((/* implicit */int) var_3))));
        arr_25 [i_6] = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) var_7)), (arr_23 [i_6])))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (70368744177662LL) : (-1LL)));
        var_20 += ((/* implicit */long long int) (-((~(((/* implicit */int) var_10))))));
        arr_29 [i_7] = ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 3) 
    {
        var_21 ^= ((/* implicit */short) (~(arr_1 [i_8 + 1])));
        /* LoopNest 3 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 19; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        arr_41 [i_11] [i_11] [i_11] [i_11] [i_11] &= ((/* implicit */short) (unsigned short)5);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_7))));
                    }
                } 
            } 
        } 
        arr_42 [i_8] = ((/* implicit */_Bool) ((arr_5 [(_Bool)1] [i_8 + 2] [(_Bool)1]) ? (var_13) : (((/* implicit */int) arr_36 [i_8 - 2] [i_8 + 2] [i_8] [i_8]))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        arr_45 [i_12] = arr_23 [(short)12];
        arr_46 [i_12] = ((/* implicit */short) arr_3 [i_12] [i_12] [(unsigned char)10]);
        arr_47 [i_12] [i_12] = ((/* implicit */unsigned char) var_1);
    }
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252)))))));
        var_24 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_4))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(short)14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13]))) : (arr_49 [i_13])))) ? ((+(-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13])))));
    }
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 1) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (var_10)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) 
            {
                arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) | (((/* implicit */int) (short)4966)))) != (((/* implicit */int) var_8))));
                arr_58 [i_15] [i_15] = ((/* implicit */long long int) ((unsigned short) 9223372036854775807LL));
                var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_32 [i_16 + 1] [i_16 + 1] [i_15 + 2]))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_15 - 2] [i_16 - 1])) ? (var_13) : (((/* implicit */int) arr_54 [i_15 - 1] [i_16 - 1]))));
            }
            for (short i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                arr_63 [i_14] [i_15] = ((/* implicit */int) 9223372036854775806LL);
                var_29 = ((/* implicit */_Bool) arr_49 [i_14]);
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
                {
                    var_30 &= (!(((/* implicit */_Bool) arr_36 [i_15 + 2] [i_15] [i_15] [i_15 + 1])));
                    var_31 &= ((/* implicit */_Bool) arr_61 [15U] [i_18] [i_18] [i_15 + 2]);
                }
                for (long long int i_19 = 0; i_19 < 16; i_19 += 1) /* same iter space */
                {
                    var_32 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_10)), (arr_34 [i_14] [i_14] [i_15 - 1])))), ((+(2700620937U)))));
                    arr_69 [i_14] [i_15] [(unsigned char)5] [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 0U)), (8072870788965945485LL))))));
                    arr_70 [i_14] [i_15 + 2] [i_17] [i_15] [i_14] [i_17] = ((/* implicit */_Bool) arr_44 [i_15 + 2] [i_15 + 2]);
                }
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
                {
                    arr_73 [(short)8] [(short)8] [i_14] [(signed char)6] &= ((/* implicit */unsigned int) (+(arr_51 [i_14])));
                    arr_74 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_15 + 1] [i_15 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_68 [i_15 + 1] [i_15 + 1]))));
                    arr_75 [i_15] [i_15] [i_15] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [3] [i_14] [i_15])) - (((/* implicit */int) arr_5 [i_14] [i_15] [i_15]))));
                    arr_76 [i_14] [i_14] [i_17] [i_15] [i_20] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_66 [i_15] [i_15 + 2] [i_15 + 2] [i_15]))));
                }
            }
            for (int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)7168)))) + (2147483647))) >> (((((/* implicit */int) arr_78 [i_22] [i_21] [i_15] [i_14])) & (((/* implicit */int) var_8)))))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_15 + 1])) || (((/* implicit */_Bool) -8072870788965945486LL))));
                }
                /* vectorizable */
                for (unsigned char i_23 = 1; i_23 < 14; i_23 += 1) 
                {
                    arr_83 [i_14] [i_15] [i_14] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_14] [i_14])) ? (arr_55 [i_23 - 1] [i_15] [i_15] [i_14]) : (arr_71 [i_23 + 2] [i_23 + 1] [(signed char)10] [i_23 + 2])));
                    arr_84 [i_14] [i_15] [i_21] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (arr_79 [i_15 + 2] [i_15] [i_15 + 1] [i_15]) : (arr_79 [i_15 - 1] [i_15] [i_15 - 1] [i_15])));
                }
                for (unsigned short i_24 = 0; i_24 < 16; i_24 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_71 [i_15 - 1] [i_15 - 1] [i_21] [i_24])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_32 [i_15 - 2] [i_15 + 1] [i_15 + 1]))))));
                    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) arr_40 [7] [i_15]))));
                    arr_87 [i_24] [i_15] [i_15] [i_14] = ((/* implicit */signed char) var_4);
                    var_37 = ((/* implicit */unsigned char) arr_35 [(unsigned char)18] [(unsigned char)18]);
                    var_38 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_39 [i_15] [i_15 - 2] [i_15 + 2] [i_15 + 2])))) | (((((/* implicit */_Bool) arr_39 [i_15] [i_15 + 2] [i_15 + 2] [i_15])) ? (((/* implicit */int) arr_39 [i_15 - 2] [i_15 - 1] [i_15 + 2] [i_15])) : (((/* implicit */int) arr_39 [i_15] [i_15 + 1] [i_15 - 2] [i_15]))))));
                }
                for (unsigned short i_25 = 0; i_25 < 16; i_25 += 1) /* same iter space */
                {
                    arr_91 [i_15] [i_15] = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_36 [2LL] [2LL] [i_15 - 2] [2LL])))));
                    var_39 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_27 [i_15 - 1])))) ? ((~(((/* implicit */int) arr_0 [i_15] [i_15])))) : (((/* implicit */int) var_11))));
                    arr_92 [i_14] [i_15] [i_15] [(short)6] = ((/* implicit */short) arr_81 [i_14] [i_15] [i_21] [i_15] [i_21] [i_25]);
                }
                arr_93 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_50 [i_15 - 1])))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 1) 
            {
                var_40 &= ((/* implicit */short) var_5);
                var_41 = ((/* implicit */short) var_14);
                arr_97 [i_15] [i_15] [i_26] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            }
            arr_98 [i_15] [i_15 + 1] = (((~(((/* implicit */int) arr_40 [i_15 + 2] [i_15 + 1])))) / (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_50 [i_15])))));
            arr_99 [i_15] [i_15] [i_15 + 1] = ((/* implicit */signed char) min(((-(arr_60 [i_14] [i_14] [i_15]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_14] [(unsigned short)14] [i_15])) && (((/* implicit */_Bool) var_13)))))));
        }
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (((~(arr_49 [i_14]))) != (arr_51 [i_14]))))));
    }
}
