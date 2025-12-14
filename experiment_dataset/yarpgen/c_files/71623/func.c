/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71623
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3865230470U)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))))));
    var_11 = var_3;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        arr_4 [4ULL] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) 16022163582240809359ULL))), (min((((/* implicit */int) arr_1 [i_0] [(short)4])), ((-2147483647 - 1))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_1] [i_1]));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((16494965866140682170ULL) < (((/* implicit */unsigned long long int) 1535346614U)))) ? (((/* implicit */int) ((short) arr_1 [i_1] [(short)4]))) : (arr_0 [(unsigned char)0] [(unsigned char)0]))))));
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2424580491468742257ULL)) ? (((/* implicit */int) arr_5 [i_1])) : (-449690593))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_16 = ((unsigned long long int) arr_5 [i_5]);
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), ((((_Bool)0) ? (9645806122121488454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 67108863ULL))))))))));
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)124)) & (arr_15 [i_1] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [(unsigned char)4] [(unsigned char)4]))) : (((unsigned long long int) 2424580491468742256ULL))));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [4ULL] [i_1])) ? (arr_15 [i_1] [i_2] [i_3] [i_3]) : (((int) arr_16 [i_3] [i_2] [(short)8] [i_2] [i_1]))));
            }
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((min((9645806122121488454ULL), (2424580491468742256ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 524287)))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    {
                        arr_28 [i_9] [i_6] [i_8] [i_6] [i_6] [i_6] = var_0;
                        var_21 |= ((/* implicit */unsigned int) 0ULL);
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) 1865320567U));
                    }
                } 
            } 
            var_23 = (unsigned char)0;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (arr_18 [0ULL] [i_10])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            arr_40 [i_6] [i_6] = (!(((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_6])));
                            var_25 = (!(arr_36 [i_13] [i_6] [i_13] [i_12 + 2] [i_12 + 2] [i_6] [i_12 + 2]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((arr_26 [i_11] [i_11] [i_14]) & (arr_26 [i_11] [i_11] [i_15]))))));
                            arr_47 [i_6] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_15] [i_14] [i_11] [i_10] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_6] [i_10] [i_11] [i_14] [i_15]))));
                            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_6]))));
                            arr_48 [i_10] [i_10] [i_11] [i_11] [i_15] |= ((/* implicit */unsigned long long int) arr_24 [i_11]);
                        }
                    } 
                } 
                var_28 = ((((/* implicit */_Bool) 1535346614U)) ? (11772072828533739625ULL) : (((/* implicit */unsigned long long int) 2759620681U)));
                arr_49 [i_6] [i_10] [i_10] [i_6] = ((/* implicit */unsigned int) (short)-30681);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 1) 
        {
            arr_52 [i_6] [i_6] = ((unsigned long long int) (!(((/* implicit */_Bool) 2759620681U))));
            arr_53 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_6])) ? (1049926429U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        arr_54 [i_6] [i_6] = ((((/* implicit */_Bool) ((arr_15 [i_6] [i_6] [i_6] [i_6]) ^ (arr_15 [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6])))));
        arr_55 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1535346615U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (arr_20 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) arr_15 [i_6] [i_6] [i_6] [i_6]))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_38 [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) ((2424580491468742257ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) var_0)) : (7188642763885534925ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1584373307U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0)))))));
        arr_56 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_6] [i_6] [i_6]))) ? (max((16022163582240809359ULL), (((/* implicit */unsigned long long int) -121412672)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_6] [i_6])))));
    }
}
