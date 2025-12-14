/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56949
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1 + 1] = var_10;
            arr_8 [i_0] [i_0] [i_1] = (-(arr_1 [i_0]));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_2] [i_0] [i_2] [18ULL] [13U] = (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)160)) >> (((2873870590U) - (2873870576U)))))) ? (arr_2 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_3] [i_0]) && (var_11))))))));
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140736710U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_0 - 1] [i_2] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (11487346169169722760ULL) : (var_2))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned long long int) 948854171U)))))))));
                        arr_19 [i_2] &= ((/* implicit */unsigned char) 11487346169169722760ULL);
                    }
                } 
            } 
            var_13 = ((/* implicit */unsigned long long int) 2873870594U);
        }
        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 3) 
    {
        var_15 = ((/* implicit */_Bool) 1421096706U);
        var_16 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) (~(arr_9 [i_5] [i_5])))), (((((/* implicit */_Bool) 4154230585U)) ? (((/* implicit */unsigned long long int) arr_21 [i_5 + 2])) : (0ULL))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        var_17 = arr_0 [i_6 + 1] [i_6];
        arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)177), (arr_14 [(_Bool)1] [i_6 + 1] [(_Bool)1]))))) : (((6959397904539828855ULL) ^ (((/* implicit */unsigned long long int) arr_21 [i_6 + 1]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [4ULL])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_27 [i_8]))))));
            arr_30 [i_8] = ((/* implicit */unsigned char) (-(var_8)));
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) var_1);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) ^ (var_6))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (unsigned char)255)), (arr_4 [i_7]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)45))));
                    var_20 = (_Bool)1;
                }
                var_21 = ((/* implicit */unsigned long long int) max(((unsigned char)255), ((unsigned char)0)));
                var_22 = ((/* implicit */unsigned long long int) var_4);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    {
                        var_23 = 11152344695523027987ULL;
                        arr_46 [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (var_2)));
                        var_24 = ((/* implicit */_Bool) (-(18446744073709551614ULL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_49 [i_14 - 1] [i_13] [i_12] [i_12 - 1])));
                            var_26 = ((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7]);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_9)), (140736680U))))) <= (((/* implicit */int) (unsigned char)76))));
            arr_54 [i_7] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_10 [(unsigned char)16] [i_15] [(unsigned char)16])) == (max((10040955565754895343ULL), (((/* implicit */unsigned long long int) (unsigned char)76))))));
            arr_55 [i_7] [(unsigned char)9] |= ((/* implicit */unsigned long long int) var_0);
            arr_56 [i_7] = ((/* implicit */unsigned char) 4154230631U);
        }
        /* vectorizable */
        for (unsigned char i_16 = 4; i_16 < 13; i_16 += 1) 
        {
            arr_60 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_27 [i_16 - 1]);
            arr_61 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_37 [i_16 - 4]);
        }
        arr_62 [i_7] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_7] [14U] [i_7] [i_7])), (11964553975082063030ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_7] [(unsigned char)16] [(unsigned char)16] [i_7]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) + (2456497296U)))));
        var_28 *= ((/* implicit */_Bool) arr_13 [i_7] [(_Bool)1] [i_7]);
        arr_63 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_7] [i_7] [(_Bool)1])) ? (arr_45 [i_7] [i_7] [8ULL] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < ((-(((((/* implicit */_Bool) 1002001868U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7])))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((var_11) ? (156009643U) : (4154230631U))))));
    var_30 = ((/* implicit */unsigned char) 1811342800U);
    var_31 = ((/* implicit */_Bool) var_9);
}
