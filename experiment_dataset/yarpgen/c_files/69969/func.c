/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69969
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (min((13547443729898581831ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) var_6)) : (min(((-(4899300343810969782ULL))), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0]);
        var_11 = ((/* implicit */long long int) (((_Bool)0) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) > (((4899300343810969784ULL) >> (((/* implicit */int) (signed char)9))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_11 [i_1] [(unsigned char)8] = ((/* implicit */unsigned short) (signed char)-2);
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)7114)) ? (4899300343810969784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33463)))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        {
                            arr_20 [i_2] [i_1] [i_1 + 1] [i_3 + 1] [i_5 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)5))));
                            arr_21 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL))) * (13547443729898581829ULL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 23; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((4899300343810969784ULL) - (13547443729898581811ULL)));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_1 + 1] [i_6 - 2])));
                        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32074)) * (((/* implicit */int) (signed char)45))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4232259555U)) || (((/* implicit */_Bool) 13547443729898581843ULL))));
            arr_29 [i_1] [(signed char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_16 [i_1] [i_1] [i_8])));
            arr_30 [(_Bool)1] &= ((((arr_25 [i_1 + 1] [i_1] [i_8] [i_8] [i_8] [i_8]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [20ULL]))) : (18446744073709551615ULL));
        }
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (_Bool)1))));
        arr_31 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1])) ? (((/* implicit */int) ((18446744073709551612ULL) > (((/* implicit */unsigned long long int) var_6))))) : (((/* implicit */int) arr_27 [0U] [i_1 - 1] [i_1 - 1]))));
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        arr_42 [0ULL] [0ULL] [0ULL] [0ULL] = ((/* implicit */long long int) 4899300343810969811ULL);
                        arr_43 [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_11])))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) 662341520U))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
            {
                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32049)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_45 [(_Bool)1]))) : (((4899300343810969782ULL) << (((13547443729898581804ULL) - (13547443729898581802ULL)))))));
                var_20 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
            }
            for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) (~(((var_6) << (((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_44 [i_9] [i_9] [i_15])) * (13547443729898581796ULL))))));
            }
            arr_51 [i_9] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_9] [i_13] [i_9] [i_9] [i_9])) ? (2ULL) : (4899300343810969811ULL)));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2820044905168897158LL)) | (18446744073709551599ULL)));
            arr_55 [i_9] [i_16] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
            var_24 &= ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (signed char)41)))));
            /* LoopSeq 3 */
            for (signed char i_17 = 2; i_17 < 24; i_17 += 2) 
            {
                var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-42))));
                var_26 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (signed char)38)))));
            }
            for (long long int i_18 = 1; i_18 < 24; i_18 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) <= (15876467140179895161ULL)));
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (unsigned char)32)))));
            }
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                arr_64 [(unsigned short)0] [i_16] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483644ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [20LL] [i_9] [i_16] [i_9] [i_16]))) : (arr_58 [i_19])));
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)16383)))))))));
                arr_65 [i_9] [i_16] [i_19] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (5251696279245045747ULL)));
                arr_66 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-28))));
            }
        }
        /* vectorizable */
        for (long long int i_20 = 3; i_20 < 24; i_20 += 1) 
        {
            var_30 = ((/* implicit */signed char) (-(2061584302080ULL)));
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned long long int) arr_41 [i_9])) : (10918711697049905705ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (-1556544951704287472LL) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)595)))))));
                        arr_75 [i_21] |= ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((var_8) ? (var_6) : (var_6))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) | (var_4))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_20]))))) << (((((/* implicit */int) (signed char)-50)) + (68)))));
                    }
                } 
            } 
        }
    }
    var_33 = ((/* implicit */short) (unsigned short)25648);
}
