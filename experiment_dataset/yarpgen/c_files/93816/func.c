/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93816
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0] [i_0]) : (arr_0 [11LL] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4991905565570753022LL)) || (((/* implicit */_Bool) 4991905565570753049LL))))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)83)))))))));
        var_21 = ((/* implicit */short) ((max((arr_0 [i_0] [i_0]), (var_3))) << (((((((arr_0 [i_0] [(signed char)11]) * (var_17))) * (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)25131))))))) - (7556947837837210591ULL)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((unsigned int) arr_5 [i_1 + 1]));
            var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)25131)) ? (((/* implicit */int) (unsigned short)40416)) : (((/* implicit */int) (unsigned short)25143))))));
        }
        for (short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            var_24 *= ((/* implicit */short) ((arr_4 [i_3 + 2] [i_3 + 2]) & (arr_4 [i_3] [i_3 + 2])));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_3 + 2]);
        }
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            arr_23 [i_1 + 2] [i_4 - 2] [i_5] [i_5] [i_5] &= arr_15 [i_7 + 2] [i_6] [4] [i_1];
                            arr_24 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_1]))));
                            var_25 = ((/* implicit */short) ((((((/* implicit */int) var_13)) & (((/* implicit */int) arr_5 [i_1])))) ^ (((/* implicit */int) ((_Bool) arr_2 [i_7] [i_4])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [5U] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (arr_7 [i_4 - 2] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 - 2])))));
                            var_26 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_5))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 2; i_9 < 16; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_1 [i_9])))))) & (max((arr_14 [i_9 - 2]), (((/* implicit */unsigned int) (short)-2))))));
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    {
                        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [1ULL] [i_11] [i_11] [i_11]))) + (var_8)))) - (((((/* implicit */unsigned long long int) arr_37 [i_10] [i_9 - 1])) + (arr_0 [i_11] [i_12])))))) ? (((long long int) arr_31 [i_10 + 1] [i_9 + 2])) : (((/* implicit */long long int) ((unsigned int) (short)32767)))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 1; i_13 < 17; i_13 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) arr_18 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_10 + 1] [i_13 + 1]))) - (0LL)));
                            arr_48 [i_10] [i_11] [i_11] = ((/* implicit */_Bool) min((arr_31 [i_9] [4LL]), (((((/* implicit */_Bool) (~(arr_35 [(signed char)6])))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_11] [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_42 [i_9 - 1] [i_9 - 1] [(short)13] [i_12])) : (((/* implicit */int) arr_13 [i_9] [i_11])))))))));
                            var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_10] [i_11]))));
                        }
                        var_31 &= ((/* implicit */_Bool) max((((((((/* implicit */int) (unsigned short)65535)) & (1901677894))) / ((~(((/* implicit */int) (signed char)105)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_11] [i_12]) + (arr_14 [i_9 - 1])))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_8))))))))));
                        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_43 [i_9 + 1] [i_9] [i_9 - 1] [2ULL]))))) ? (((/* implicit */unsigned long long int) ((arr_43 [(unsigned short)12] [(short)14] [i_11] [6LL]) ? (((int) arr_39 [i_10] [i_11] [13LL])) : (((((/* implicit */int) (signed char)95)) ^ (arr_32 [i_10])))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_10 + 1] [i_10 + 1] [i_11])), (-4991905565570753019LL)))) ? (((((/* implicit */_Bool) (unsigned short)20232)) ? (1385181869500407504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned int) min((arr_38 [i_9] [10U] [10U] [i_9]), (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_9 - 1] [i_9] [i_9 - 1])))))));
        arr_49 [(unsigned char)12] [i_9] = ((/* implicit */unsigned long long int) arr_38 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_9]);
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_13))));
            var_35 = ((/* implicit */signed char) var_1);
        }
    }
    for (signed char i_15 = 2; i_15 < 16; i_15 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned int) var_12);
        var_37 *= ((/* implicit */unsigned char) var_10);
    }
    var_38 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_6))))) : (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_39 = ((/* implicit */short) var_9);
                var_40 = ((/* implicit */short) var_4);
                arr_60 [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)0));
            }
        } 
    } 
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_7)))))) ? (min(((+(var_7))), (((/* implicit */unsigned long long int) ((int) var_0))))) : (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
}
