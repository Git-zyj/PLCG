/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87216
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) * ((+(((/* implicit */int) arr_1 [2ULL]))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1 - 1]) * (var_5)))) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0]))));
            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) var_4)))))));
            var_20 = ((/* implicit */unsigned char) var_6);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)20))))))));
            var_22 = ((/* implicit */_Bool) arr_3 [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [(_Bool)1] [i_2] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((arr_8 [i_0]) >= (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) var_4)))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) || (((/* implicit */_Bool) arr_2 [i_2] [i_0]))));
        }
        for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                arr_16 [i_3] [(signed char)16] = ((/* implicit */unsigned short) var_2);
                var_24 = ((/* implicit */unsigned long long int) ((signed char) var_9));
            }
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) (unsigned char)206))));
            var_26 = ((/* implicit */unsigned long long int) (unsigned char)116);
            var_27 = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_0] [i_3] [i_3]));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))) / (arr_9 [11ULL] [11ULL] [i_5])));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                var_29 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_9))))));
                arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_6 + 1] [i_5])) <= (((/* implicit */int) var_4))));
            }
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_34 [i_5] [11ULL] [i_7] [8ULL] = ((/* implicit */signed char) var_8);
                            var_30 = ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_19 [i_7 + 1] [i_7] [i_7] [i_5]) : (arr_19 [i_7 + 1] [10ULL] [i_7 + 1] [i_5]));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_33 [i_0] [i_7] [i_5] [i_8])) ? (5146855355557657081ULL) : (arr_25 [(_Bool)1] [i_5] [i_5])))));
                            arr_35 [i_5] [i_5] [i_7 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5] [i_7 + 1] [i_5])) + ((-(((/* implicit */int) var_12))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            var_32 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_14 [i_7 + 2] [i_11] [i_7])) - (((/* implicit */int) arr_26 [i_11])))) + (2147483647))) >> ((((+(((/* implicit */int) var_11)))) + (117)))));
                            var_33 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_11] [i_10])))))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_6 [i_0] [i_11])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) var_2);
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_43 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))));
                            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((var_10) - (9426815280941671912ULL))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_9)) - (20156)))))) : (9223372036854775808ULL)));
                    arr_51 [i_5] [i_5] [i_7] [i_14] = ((/* implicit */_Bool) ((arr_15 [i_7] [i_7 - 1] [i_5] [i_7 + 2]) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (var_15)))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_14] [i_5] [i_14] [12ULL] [i_5] [8ULL])) ? (((/* implicit */int) arr_31 [(unsigned char)1] [i_5] [(unsigned char)1] [i_7 + 1] [i_5] [(_Bool)1])) : (((/* implicit */int) arr_31 [i_0] [i_5] [i_7] [(_Bool)0] [i_5] [i_0]))));
                }
            }
            for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 4) 
            {
                var_39 = ((/* implicit */_Bool) var_10);
                var_40 = ((/* implicit */unsigned char) ((unsigned long long int) arr_39 [i_5] [i_15 + 3] [11ULL] [i_15 + 1] [i_5]));
            }
        }
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_16] [16ULL] [i_16]))));
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < ((+(arr_40 [i_16] [i_16] [i_16] [(unsigned short)2] [i_16])))));
    }
    var_43 -= ((/* implicit */unsigned short) 0ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_17 = 4; i_17 < 9; i_17 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                arr_65 [(unsigned char)7] [i_18 - 1] [i_19] [i_19] = ((/* implicit */signed char) arr_13 [i_18 + 2] [i_18 + 2] [i_17]);
                var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)23)))))));
                arr_66 [i_17] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_12))))));
            }
            arr_67 [i_17 + 1] [i_18 + 2] [i_18] = ((/* implicit */unsigned short) (unsigned char)195);
        }
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 9235161347137163252ULL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_63 [i_17 - 2] [i_17 - 2]))));
            arr_70 [i_17 - 2] = arr_25 [i_17] [i_17] [i_20];
            arr_71 [i_17] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_17] [i_20] [i_17] [i_17 - 3])) & (((/* implicit */int) arr_24 [i_17 - 2] [i_17] [i_17]))));
            arr_72 [i_17 - 3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_61 [i_20])) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) arr_46 [i_17] [i_20] [i_17])) : (((((/* implicit */int) arr_50 [2ULL] [i_17] [i_20] [i_20])) >> (((((/* implicit */int) var_4)) + (17)))))));
        }
        var_46 = ((/* implicit */unsigned long long int) arr_0 [i_17 - 2]);
    }
    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_14))))) & (max((max((var_10), (var_10))), (((((/* implicit */_Bool) var_11)) ? (var_13) : (11358229920805651853ULL))))))))));
}
