/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93973
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
    var_16 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_5)))) && (((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (15557807302869936492ULL))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_15)) : (var_14)))) ? (((((((/* implicit */_Bool) 960ULL)) ? (15557807302869936509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((max((var_12), (var_3))) - (13184187475668776979ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 &= ((_Bool) ((((/* implicit */_Bool) var_12)) ? (3444058535708258713ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 &= (!((!(var_10))));
                    var_21 = ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_0] [i_1])) | (((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1])))), (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_4 [i_2] [i_0]))))));
                    var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_15))) == (((/* implicit */int) var_1)))))) != ((~(((var_0) ? (1964829526465338417ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    arr_10 [i_0 + 1] [i_1 - 1] [i_0] [12ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1 - 1] [(short)5] [i_0 - 1])) ? (arr_7 [i_2] [i_1 - 2] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_14)))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */short) (((~(arr_1 [10U] [10U]))) < (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)0]))) : (((arr_8 [i_0] [i_0 + 1] [i_0 + 1]) * (((/* implicit */unsigned long long int) var_14))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [9] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */int) var_4);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) var_15)) | (3970051237U)))));
                            var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), ((~(((((/* implicit */_Bool) (short)4901)) ? (var_3) : (var_3)))))));
            var_28 = ((/* implicit */short) ((2758631077U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0 + 1])))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((arr_17 [i_0 - 1] [i_0] [i_8]) << (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_30 [i_0] [(short)9] [(short)8] [(short)9] [i_7] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_21 [i_9] [i_8] [i_8] [(_Bool)1] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_7] [i_8])))))))));
                    arr_31 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), ((~(((/* implicit */int) var_11))))));
                    arr_32 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_21 [i_0 + 1] [i_0 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_9] [i_9]) == (arr_21 [i_0] [i_0 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_9] [3ULL])))) + (((/* implicit */int) ((short) var_6)))));
                }
            }
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
            arr_36 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) arr_7 [i_10] [12ULL] [i_0] [i_0 + 1])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27439)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */short) var_2)), ((short)-27439)))))) : (((((/* implicit */_Bool) var_1)) ? (max((arr_35 [i_10] [i_10] [(short)5]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
            arr_37 [i_0] [i_10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_0 + 1]))) ? (((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_0])) >= (((/* implicit */int) arr_15 [i_0 - 1]))))))));
            arr_38 [i_10] [12ULL] |= ((/* implicit */unsigned long long int) (~(2147483628)));
        }
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            var_32 = (~(max((((/* implicit */int) max((var_6), (var_6)))), (var_15))));
            var_33 = ((/* implicit */short) arr_24 [i_11 + 4] [i_11]);
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) 
    {
        arr_43 [i_12] = ((/* implicit */_Bool) ((arr_41 [i_12 + 1] [i_12 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_14)));
        var_34 = ((/* implicit */unsigned char) ((1846462923850008631ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_12 + 2])))));
    }
}
