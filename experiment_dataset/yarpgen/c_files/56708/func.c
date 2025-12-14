/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56708
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))));
    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (19U) : (((/* implicit */unsigned int) var_5)))), (((unsigned int) var_17))))), (var_7)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_2] [i_2] [i_3] [8] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (unsigned char)131)))));
                                arr_17 [i_0] [i_1] [i_2] = (+(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)126))))), (min((9501840528095230765ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)0))))) - (((((/* implicit */_Bool) 2105193976)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_9 [i_4] [i_2] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) : (((((/* implicit */_Bool) arr_14 [13U] [i_3])) ? (arr_9 [(short)2] [(short)2] [i_2] [i_4]) : (var_9))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_13 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((((/* implicit */_Bool) 4294967282U)) ? (2365145569828560939LL) : (((/* implicit */long long int) 4294967288U)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (unsigned char)31);
                                arr_26 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)9978)), (8155450221710997416ULL)));
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)131)) <= (((/* implicit */int) arr_4 [i_2] [i_5])))))))) ? (max((((/* implicit */int) arr_1 [i_5] [i_6])), (((((/* implicit */_Bool) 262143LL)) ? (((/* implicit */int) arr_20 [i_0] [i_2] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)9978)))))) : (((/* implicit */int) (unsigned char)160))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22605))) <= (39U))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                arr_31 [i_2] = ((/* implicit */unsigned int) ((((min((((/* implicit */int) arr_2 [i_7])), ((-(((/* implicit */int) (unsigned char)133)))))) + (2147483647))) << ((((((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55579))))))) + (24))) - (23)))));
                                var_24 &= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)0)) >> (((18446744073709551615ULL) - (18446744073709551608ULL))))) == (var_5)));
                                var_25 |= ((int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_8]))));
                                arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (-748090826) : (1027519385)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (+(max((((/* implicit */unsigned long long int) (signed char)69)), (23ULL))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        arr_37 [i_9] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3355045783U)) ? (((/* implicit */int) (unsigned char)252)) : (-312704951)))) != (((((/* implicit */_Bool) var_9)) ? (var_6) : (18U)))));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    {
                        arr_45 [i_11] [i_10] [i_10] = ((/* implicit */long long int) (-(13567887595336764394ULL)));
                        var_26 = ((unsigned char) ((var_8) - (3365250948U)));
                        var_27 = 3555632172940300217ULL;
                    }
                } 
            } 
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (5770993994360667326ULL)))) ? (((/* implicit */unsigned long long int) (+(-1027519393)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (arr_9 [0U] [i_10] [i_10] [(unsigned char)18]))));
            arr_46 [i_9] = ((/* implicit */unsigned char) (+(arr_10 [i_10])));
        }
        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((unsigned int) 3878985156U)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_24 [i_9] [i_13])))))));
            arr_49 [(unsigned short)11] [(unsigned short)0] [i_13] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)9404)) : (((/* implicit */int) (signed char)-66))));
        }
    }
    for (short i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        arr_52 [i_14] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) -748090826)), (arr_51 [i_14]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) != (30ULL)))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 2) 
            {
                {
                    arr_58 [i_15] [i_14] [i_14] = ((/* implicit */int) ((var_11) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (2679107093U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 2; i_18 < 18; i_18 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) (+(8ULL)));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((2163632112194788245ULL), (((/* implicit */unsigned long long int) var_1))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)0)), ((~(var_9))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_64 [(signed char)19] [i_14] [i_16] [i_15] [i_14]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
