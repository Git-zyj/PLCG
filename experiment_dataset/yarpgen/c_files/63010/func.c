/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63010
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
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_1] &= ((/* implicit */long long int) var_5);
            arr_7 [i_0] = ((/* implicit */signed char) ((-13044220) * (((/* implicit */int) (_Bool)0))));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)11205)) : (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_15 [i_0] = ((/* implicit */long long int) ((short) arr_10 [i_0] [i_0]));
                        arr_16 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) var_5);
                        arr_17 [i_0] [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)54330));
                    }
                } 
            } 
            arr_18 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_5);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_27 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) ((long long int) arr_24 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5 + 1]));
                        arr_28 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61705))) & (arr_10 [i_0] [i_5 - 1])));
                        arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_0] [i_5 - 3] [i_0])));
                    }
                } 
            } 
            arr_30 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [5U] [i_4]))))));
        }
        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_33 [i_0] [i_7] [i_0] = (~((~(((arr_1 [i_0]) ? (874330724U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))))))));
            arr_34 [i_0] [i_7] [i_7] = ((/* implicit */int) var_15);
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            arr_38 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((short) ((arr_4 [i_0] [i_8 + 1] [i_0]) >> (((15528886472315112133ULL) - (15528886472315112103ULL))))));
            arr_39 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (894973072U)))) + (11675295294027483891ULL)));
            arr_40 [(unsigned short)18] [2ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_23 [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8 - 2]), (arr_23 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])))) ? (min((arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8 - 1]), (arr_23 [i_8 + 2] [i_8 + 2] [i_8 - 2] [i_8 + 3]))) : (((arr_23 [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8 + 2]) + (arr_23 [i_8 + 2] [i_8 - 2] [i_8 + 3] [i_8 + 3])))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_43 [i_0] [4U] [6U] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_9])) || (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [(short)16]))))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (short i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            arr_52 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_48 [i_11] [i_0] [i_0] [i_11 + 1])), (1152921504606838784LL))) & (((/* implicit */long long int) ((unsigned int) var_4)))));
                            arr_53 [i_0] [(short)12] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_48 [i_11 - 3] [i_0] [i_11 - 4] [i_11 - 3];
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
    {
        arr_56 [(short)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2897776941U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56348))) : (var_6)));
        arr_57 [i_13 - 2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned long long int) (+(13044204)))) : (arr_32 [14ULL] [14ULL])));
        arr_58 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_13 - 1] [18LL] [18LL] [i_13 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_55 [i_13]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        arr_61 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (unsigned short)53044)) : (((/* implicit */int) (unsigned short)36207))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                {
                    arr_67 [6U] [8U] [i_14] [i_14] = ((/* implicit */_Bool) ((arr_2 [i_15]) >> (((1558335149848367899LL) - (1558335149848367895LL)))));
                    arr_68 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_15] [i_15] [i_16])) ? (var_10) : (((/* implicit */int) arr_19 [11ULL] [11ULL] [i_16]))));
                    arr_69 [10U] [i_16] [i_15] [i_16] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        arr_70 [i_14] [4U] = ((/* implicit */unsigned long long int) (unsigned short)65535);
        arr_71 [(short)0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_14] [(short)18]) : (arr_63 [1U])));
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            {
                arr_78 [i_17] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)42122), (((/* implicit */unsigned short) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_54 [i_18 + 1])))) == (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_17] [i_18] [i_18 + 1]))))) ? (arr_3 [i_18 + 1] [i_18 + 1]) : (((/* implicit */long long int) arr_63 [i_17]))))));
                arr_79 [i_18 + 1] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2161))) : (var_9)));
                arr_80 [(unsigned char)3] [i_18] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29329))) + (10684015809229710915ULL))))))) & (((min((arr_49 [i_17] [i_17] [i_17]), (-8778007231681399216LL))) ^ (((/* implicit */long long int) ((arr_55 [i_18]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54330))))))))));
                arr_81 [i_17] [i_18] [i_18 + 1] = ((/* implicit */_Bool) min((arr_32 [18ULL] [i_18]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(unsigned short)18] [(unsigned short)18])))))));
                arr_82 [i_17] [(unsigned short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [8ULL] [(unsigned short)14] [i_17]))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5564))) | (max((((/* implicit */unsigned long long int) (unsigned short)29313)), (0ULL))))))));
}
