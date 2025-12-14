/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79248
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
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) 4288065306U);
        var_22 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (_Bool)1)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) 1230081094U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (short)-1745)))) : (((/* implicit */int) max((((/* implicit */short) var_1)), (var_9))))))) ? (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1])) : (var_6))))) : (min((((/* implicit */unsigned long long int) var_8)), (arr_3 [i_0] [i_1 - 1] [i_0 - 2])))));
            var_24 = ((/* implicit */int) ((max((arr_3 [i_0 - 2] [i_1 - 1] [i_1 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)15] [i_1] [(short)15])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_17))))))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (((((/* implicit */int) var_19)) % (((/* implicit */int) var_14)))))))));
            var_25 = ((/* implicit */_Bool) var_17);
        }
        var_26 = ((/* implicit */unsigned int) 36028797018963967ULL);
        var_27 = ((/* implicit */int) (_Bool)1);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_6 [i_3]))));
                    var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_3])))) < (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_10 [i_3]))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_3] [i_3] [i_4]))));
                    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_32 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_15))))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) var_14))));
        }
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) 0);
                            var_36 = ((/* implicit */unsigned int) ((arr_22 [i_2] [i_7] [i_8] [i_9]) == (((/* implicit */int) var_9))));
                            var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */int) (((~(((/* implicit */int) var_18)))) < (((/* implicit */int) (_Bool)1))));
                var_39 = arr_21 [i_7 - 1] [i_7] [i_7] [i_7];
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) var_0))));
                var_41 &= ((/* implicit */_Bool) arr_13 [i_2] [i_7]);
            }
            var_42 = ((/* implicit */unsigned char) min((var_42), (arr_10 [i_2])));
        }
        for (unsigned char i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned int i_12 = 3; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned char i_13 = 2; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) ((((((/* implicit */int) arr_18 [i_2 - 1] [i_12] [i_11] [i_2 - 1])) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned int) var_0)) >= (arr_11 [i_13] [i_10] [i_2])))) - (1)))));
                            var_44 = ((/* implicit */_Bool) ((long long int) var_7));
                        }
                    } 
                } 
            } 
            var_45 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_8 [i_10 - 1] [i_10 + 1] [i_2 - 1])));
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (-(arr_33 [i_2] [4ULL] [4ULL] [i_2]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                var_47 = ((/* implicit */signed char) var_13);
                var_48 = ((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 1] [i_10] [i_10] [i_10] [i_10] [i_14]))));
                /* LoopSeq 3 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_49 = ((/* implicit */_Bool) ((((-6085208469349325377LL) / (((/* implicit */long long int) -752413569)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_18))))));
                    var_50 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((var_0) & (((/* implicit */int) arr_28 [i_2] [i_14])))) : (((/* implicit */int) arr_24 [i_2] [i_2] [i_10] [i_14] [i_2] [i_15] [i_2]))));
                }
                for (int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_16] [i_16]))) / (var_6)))));
                    var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [18U] [i_10] [i_2 - 1]))));
                    var_53 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_16])) && (var_19))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */unsigned int) var_0)))))));
                }
                for (int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                {
                    var_54 = ((/* implicit */_Bool) arr_42 [i_17] [i_17] [i_17] [22LL] [i_10 - 1] [i_2]);
                    var_55 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (-6085208469349325377LL)));
                }
            }
        }
        var_56 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]))));
    }
    for (unsigned char i_18 = 1; i_18 < 19; i_18 += 1) 
    {
        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((arr_44 [i_18] [i_18] [i_18]) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) min((var_16), (((/* implicit */unsigned int) var_0)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), ((+(9223372036854775800LL)))))) : (arr_3 [i_18] [i_18] [i_18])));
        var_58 = ((((/* implicit */long long int) arr_43 [i_18] [i_18])) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (min((((/* implicit */long long int) arr_40 [i_18 - 1] [i_18] [i_18] [i_18 - 1])), (var_13))))));
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
    {
        var_59 = ((/* implicit */short) var_6);
        var_60 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_19] [(short)14]))));
        var_61 = arr_2 [0U] [i_19];
        var_62 = ((/* implicit */unsigned int) min((var_62), (var_16)));
    }
    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
    {
        var_63 ^= ((/* implicit */signed char) ((_Bool) min((var_0), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_18)))))));
        var_64 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_20] [i_20] [i_20]))))) ? (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [6LL] [i_20] [i_20] [i_20] [i_20])))))) : (((/* implicit */int) var_19))));
        var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) var_0))));
    }
}
