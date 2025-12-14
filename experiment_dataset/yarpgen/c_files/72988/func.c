/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72988
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((long long int) 4294967292U));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23582)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_1]));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_19 = (-(((/* implicit */int) (!(((_Bool) arr_7 [i_0] [i_2]))))));
            arr_11 [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [11LL] [11LL])) : (((/* implicit */int) var_12)))) | (((arr_0 [i_2]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)23582)))) != (min((var_16), (((/* implicit */int) (unsigned short)41960)))))))));
        }
    }
    for (int i_3 = 2; i_3 < 24; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] = ((/* implicit */long long int) max(((-(var_5))), (((/* implicit */unsigned int) (short)-19159))));
                        arr_24 [i_3] [i_3] [i_5] [(short)8] [i_6] [20ULL] = ((/* implicit */unsigned long long int) ((unsigned int) ((var_11) || (((/* implicit */_Bool) ((int) arr_20 [9ULL] [i_4] [i_4] [9ULL] [i_4]))))));
                        arr_25 [i_3] [i_3] [1LL] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_3] [i_6 - 1] [(unsigned short)17] [i_6 - 1])) ? (((/* implicit */int) arr_22 [i_3] [i_6 - 1] [i_6] [(unsigned short)20])) : (((/* implicit */int) (unsigned short)41960)))), (((/* implicit */int) min((arr_22 [i_3] [i_6 - 1] [(short)22] [i_3]), (arr_22 [i_3] [i_6 + 1] [i_6] [i_6 - 1]))))));
                        arr_26 [i_3] [i_3] [i_4] [i_3] [i_5] [(unsigned short)2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [15LL] [i_3] [i_4] [i_3] [i_6])) : (((/* implicit */int) var_3))))) ? (((arr_18 [i_6] [(unsigned char)12] [i_4] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41962))))) : (((/* implicit */unsigned long long int) min((arr_20 [i_3] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) (unsigned short)128))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)41955)) ? (-2049321008) : (((/* implicit */int) var_11)))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-11652))))) ? (((/* implicit */unsigned int) ((arr_17 [i_3]) << (((((/* implicit */int) (unsigned short)23571)) - (23571)))))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((var_5) << (((1782607836093306176ULL) - (1782607836093306166ULL))))))))));
        arr_27 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_3] [15U])), (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3]))) : (var_17))))))));
    }
    for (int i_7 = 4; i_7 < 22; i_7 += 4) 
    {
        arr_30 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_34 [i_8 + 1] [i_8] [i_8 - 1] [(_Bool)1]))), (((((/* implicit */_Bool) arr_34 [i_8 + 1] [i_8 - 2] [i_8 - 1] [(short)3])) ? (arr_18 [i_8 + 1] [i_8] [i_8 - 1] [(unsigned short)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    arr_35 [i_7] [i_9] [i_7] = ((/* implicit */long long int) ((unsigned short) ((long long int) arr_12 [i_9])));
                    arr_36 [i_7] [i_9] = ((/* implicit */unsigned long long int) var_4);
                    arr_37 [i_9] [i_8] [13] [i_9] = ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26767))) : (var_17))), (var_17))))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) arr_22 [i_9] [i_7 - 2] [i_8 + 2] [i_8 - 2])), (((((/* implicit */_Bool) arr_22 [i_9] [i_7 - 2] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_9] [i_7 + 2] [i_8 + 2])) : (((/* implicit */int) arr_22 [i_9] [i_7 + 3] [i_8 - 1] [i_8 + 2]))))));
                }
            } 
        } 
        arr_38 [(unsigned short)24] = ((signed char) arr_16 [i_7] [i_7]);
        arr_39 [i_7] = ((/* implicit */unsigned short) arr_34 [i_7] [(unsigned char)9] [i_7] [i_7 + 1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_49 [i_11] [i_12] = (-(((/* implicit */int) ((unsigned short) (unsigned short)23567))));
                    var_23 = ((/* implicit */short) max((((arr_16 [i_11] [i_12]) & (arr_17 [i_10]))), (((((/* implicit */_Bool) var_10)) ? (arr_17 [i_11]) : (arr_17 [i_10])))));
                    var_24 = ((/* implicit */unsigned short) var_10);
                    var_25 = ((/* implicit */short) max(((-(18446744073709551586ULL))), (((((/* implicit */_Bool) (short)11666)) ? (((((/* implicit */_Bool) (short)16902)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_12]))))) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */int) arr_33 [i_12])))))))));
                }
            } 
        } 
    } 
}
