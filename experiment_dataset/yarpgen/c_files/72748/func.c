/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72748
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-180070777975404377LL), (((/* implicit */long long int) (unsigned char)26))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) | (((/* implicit */int) (unsigned char)244))));
        arr_3 [i_0 - 1] [i_0 - 1] = max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (var_6) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) ((9634448891305037931ULL) == (arr_0 [(_Bool)0])))) != (2147483647)))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)11)), ((unsigned short)38263)))) ? (min((max((3300232535U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) arr_1 [(short)0])))) : (((/* implicit */unsigned int) 1525364674))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [10] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) <= (13891843886815362769ULL)))), (max((((/* implicit */unsigned long long int) 2147483647)), (27ULL)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_11 [i_0 + 2] [i_1] [i_2] [9] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)0))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_10)) != (((((/* implicit */_Bool) 11084367975041052707ULL)) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (var_7) : (((/* implicit */unsigned long long int) 15U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)12)), ((-9223372036854775807LL - 1LL)))))))));
                    arr_13 [(unsigned short)2] [i_1] [i_2] = ((/* implicit */long long int) (unsigned char)229);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 3; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */short) (-(var_14)));
                            arr_28 [i_3] [i_3] [i_5] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2116821475)) ? (((/* implicit */int) arr_25 [i_3 + 2] [6ULL] [7U] [6ULL] [i_3])) : (((/* implicit */int) (short)28089))));
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65526))));
                        }
                        for (int i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            arr_32 [i_8] [2LL] [(unsigned char)11] [i_4] [2LL] [i_3] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_10)));
                            arr_33 [i_3] [i_4] [i_5] [i_6] [i_8 - 3] [i_8] [i_8 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [i_6] [i_6] [i_5] [i_6] [i_3 - 1]))));
                        }
                        arr_34 [i_3] [i_4] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_3 + 2]))));
                        arr_35 [i_5] [i_4] [11] [i_6] = ((/* implicit */unsigned char) ((-431054284) ^ (1717464045)));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 2] [(_Bool)0] [i_3 + 2] [(_Bool)0] [i_3] [(_Bool)0]))) : (((((/* implicit */_Bool) 4760152979540167805ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
    }
    for (int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
    {
        arr_40 [i_9 - 1] = ((/* implicit */int) -6400773998065578392LL);
        arr_41 [i_9] [i_9] = max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)3)) : ((-2147483647 - 1)))), (((/* implicit */int) max((((/* implicit */short) (signed char)39)), (((short) 18446744073709551615ULL))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12)))))));
            var_23 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 13980095136242408487ULL)) ? (18446744073709551605ULL) : (7991492022033213912ULL))) << (((((/* implicit */int) (unsigned short)37256)) - (37195)))));
        }
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 3) /* same iter space */
        {
            arr_50 [i_10 + 1] [i_10 + 2] [i_10] = ((/* implicit */int) ((5187607292247537678ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    {
                        arr_59 [i_14] [i_14] [i_13] [i_14] = ((((/* implicit */_Bool) 6400773998065578403LL)) ? (var_3) : (((/* implicit */int) arr_23 [i_10 + 1] [i_10 + 1] [i_12] [i_12 - 1] [i_14])));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((3U) | (((/* implicit */unsigned int) -1817133091)))))))));
                        arr_60 [i_10] [i_10] [i_14] [(unsigned short)11] [i_14] = ((/* implicit */signed char) ((var_9) > (((/* implicit */unsigned long long int) var_12))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 1348337000)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : ((+(18446744073709551615ULL)))));
            var_26 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
        }
        for (unsigned char i_15 = 1; i_15 < 12; i_15 += 3) /* same iter space */
        {
            arr_63 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (-375122341) : (((/* implicit */int) (unsigned char)0))));
            /* LoopSeq 1 */
            for (long long int i_16 = 3; i_16 < 10; i_16 += 2) 
            {
                arr_67 [i_10] [i_15] [i_16 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -508460790))))) : (((/* implicit */int) var_8))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15221))) * (arr_48 [i_10 + 2] [i_10 - 1] [i_16 + 1])));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)0))));
                arr_68 [i_15] [i_15] [i_16] = ((/* implicit */int) 4294967291U);
            }
        }
        arr_69 [i_10] = ((/* implicit */long long int) var_13);
        var_29 = ((/* implicit */int) arr_37 [i_10] [i_10]);
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 11; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_18] [i_18 - 1] [i_17 - 3] [i_10 + 2] [i_10 - 1]))) < (7009059626102404218LL)));
                        arr_76 [i_10 + 2] [i_19] [(_Bool)1] [i_19] [(_Bool)1] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) arr_66 [i_10 - 1]))));
                        arr_77 [i_10] [i_17 - 3] [i_18] [i_17 - 1] [(unsigned char)4] = ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)255)));
                        arr_78 [i_10] [i_17] [i_17] [i_18] [(short)10] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_18] [(unsigned char)4] [i_18 + 1]))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */_Bool) var_15);
    var_32 = var_9;
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)2728), (((/* implicit */unsigned short) (signed char)12)))))) >= (-25LL)));
}
