/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64150
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) (-(((long long int) (+(((/* implicit */int) var_11)))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_2] [(signed char)3] [i_3] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_7 [i_2 + 1] [i_1 + 1] [i_0] [i_1] [i_2]))))));
                        var_20 &= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (var_0) : (-9140141038173951947LL)))))) ? ((-(9140141038173951946LL))) : (((long long int) (~(((/* implicit */int) var_17))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_18))));
                        var_22 = ((signed char) ((unsigned char) min((((/* implicit */long long int) arr_7 [i_0] [(signed char)9] [8] [i_2] [i_3])), (arr_9 [(unsigned char)12] [i_0] [i_0]))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2 + 1] [i_1 + 1] [i_1])), (arr_0 [i_0] [i_1])))) ? (min((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_3]))) : (((((/* implicit */_Bool) arr_1 [2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2 - 2] [i_1 + 1] [i_0]))) : (arr_1 [(unsigned short)3] [i_3])))));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */unsigned char) var_13);
        }
        var_24 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((signed char) arr_8 [i_0] [(signed char)4] [i_0])))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_19 [(unsigned short)8] [(unsigned short)9] = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_0])) ? (((/* implicit */long long int) var_18)) : (arr_8 [i_5] [(unsigned char)3] [i_0])))) ? (((/* implicit */long long int) -1294103345)) : (arr_9 [i_0] [i_6 - 1] [i_5])));
                        arr_20 [i_6 - 1] [i_5] [4LL] [i_0] [i_0] = ((((/* implicit */_Bool) arr_18 [i_5])) ? (((long long int) var_16)) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) -7240088624601487950LL)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_5 [i_5]))))))));
                        arr_21 [i_6] [(signed char)5] [3] [6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6] [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 1] [(unsigned char)13] [(unsigned char)13] [i_5] [i_5])))), (((/* implicit */int) ((signed char) arr_17 [i_6 - 1] [i_6 + 1] [(signed char)13] [(unsigned char)11] [i_5] [(unsigned short)10])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */signed char) (-(-7499145784084577369LL)));
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_25 |= ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (signed char)34)))));
                            var_26 = ((/* implicit */unsigned short) arr_32 [i_10] [i_10 + 2] [i_10] [i_10 - 1]);
                        }
                    } 
                } 
            } 
            var_27 ^= (+(((((/* implicit */_Bool) arr_18 [(unsigned short)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7]))) : (var_1))));
        }
        for (int i_12 = 2; i_12 < 7; i_12 += 1) 
        {
            arr_39 [i_12] = ((/* implicit */unsigned short) ((signed char) (unsigned char)249));
            arr_40 [i_12] = ((/* implicit */signed char) (~(arr_8 [i_12 + 4] [(unsigned char)3] [i_12 + 3])));
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((int) arr_30 [i_7] [i_7] [i_7] [i_7])))));
    }
    for (signed char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (unsigned char i_15 = 3; i_15 < 15; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_14] [i_15] [i_16])))))));
                        arr_51 [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) (signed char)34);
                        var_30 = ((/* implicit */unsigned char) min((-7499145784084577369LL), (((/* implicit */long long int) (unsigned char)16))));
                        arr_52 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) arr_45 [(_Bool)1] [i_15 + 2] [i_15]))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-8447256567880428121LL) : (562812514467840LL)))));
                        arr_53 [(signed char)2] [15LL] [i_15] [(signed char)3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13] [i_13] [(signed char)5]))) : (arr_44 [i_13] [i_14])))) ? (((/* implicit */int) ((unsigned char) arr_48 [i_16] [i_15 + 3] [i_14] [i_13]))) : (((/* implicit */int) arr_49 [i_14] [i_15 - 1] [i_15 + 1] [i_15 - 1])))))));
                    }
                } 
            } 
        } 
        arr_54 [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-105))));
    }
    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
    {
        arr_58 [i_17] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((signed char) arr_55 [(signed char)14]))) ? ((+(arr_44 [i_17] [i_17]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (-2368272567103395686LL) : (arr_57 [i_17])))))));
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    {
                        var_31 = (~(((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (arr_57 [i_17]))));
                        arr_67 [i_20] &= ((/* implicit */signed char) arr_42 [i_17] [i_18]);
                    }
                } 
            } 
        } 
        arr_68 [i_17] = min((((/* implicit */long long int) ((signed char) (signed char)64))), (((long long int) ((((/* implicit */int) arr_65 [i_17] [i_17] [(unsigned char)13] [(signed char)16] [1LL])) > (((/* implicit */int) var_17))))));
    }
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_2)));
    var_33 &= ((/* implicit */_Bool) ((unsigned char) var_18));
    var_34 = ((long long int) var_11);
}
