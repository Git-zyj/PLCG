/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76838
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_1 [i_2 + 2] [i_2 + 1])), (var_1)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) (unsigned short)9194))))))) ? (((((/* implicit */int) (unsigned short)17183)) - (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_2] [i_1] [(unsigned short)20] [i_0])), (var_12)))))) : (((/* implicit */int) var_4))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1])) && (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_2))))));
                    arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_2]);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_0])) : (((/* implicit */int) (unsigned short)0))))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_8 [(unsigned short)13] [i_3])), (arr_0 [i_0])))))));
            arr_10 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_1 [i_3] [i_0]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0] [i_3])), (arr_4 [i_0] [10ULL] [i_3] [i_0])))) ? (((((/* implicit */int) arr_5 [i_3])) - (((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)48)), (var_9)))))) : (((/* implicit */int) ((unsigned char) arr_3 [i_3] [i_0])))));
            arr_11 [(short)2] [(unsigned char)2] = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (4294967295U)))));
            arr_12 [i_0] [7ULL] = ((/* implicit */short) (+((+((-(11427258306209890159ULL)))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) arr_1 [i_4 - 1] [i_4]);
            arr_16 [i_0] [i_4] = ((/* implicit */short) 4U);
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_4 - 1]))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 4) 
        {
            var_17 = (unsigned char)208;
            arr_20 [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_5 - 2] [i_5 - 3])) & ((~(((/* implicit */int) arr_2 [i_0] [(_Bool)1]))))));
        }
        for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            arr_23 [i_0] [i_6 - 1] [i_6] = ((/* implicit */short) max((var_1), (((/* implicit */unsigned int) arr_3 [i_6] [i_0]))));
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)48))));
        }
        arr_24 [i_0] = min((arr_9 [i_0] [i_0] [i_0]), (max((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        arr_27 [i_7 + 4] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((23) * (((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7])))) & (((/* implicit */int) ((((/* implicit */_Bool) (~(30)))) && (((((/* implicit */int) var_9)) < (((/* implicit */int) arr_14 [i_7 + 2])))))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [(unsigned char)9])) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)104)) > (((/* implicit */int) arr_5 [i_7 + 2])))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_7] [i_7])) == (((/* implicit */int) var_9))))), (31))))));
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_19 [i_8]))), (((/* implicit */long long int) arr_4 [22ULL] [17U] [i_8] [i_8]))));
        arr_31 [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)19749)), (arr_25 [i_8])))) && (((((/* implicit */int) arr_13 [i_8] [i_8])) == (((/* implicit */int) arr_18 [i_8] [i_8])))))))));
        arr_32 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_8] [i_8] [(unsigned char)6] [i_8])) ? (((/* implicit */int) arr_22 [i_8] [i_8])) : (((/* implicit */int) arr_22 [i_8] [i_8]))))) : (((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_19 [(unsigned short)19]) : (((/* implicit */long long int) ((/* implicit */int) (short)24611)))))))) && (((/* implicit */_Bool) arr_28 [i_8]))));
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_25 [i_9])))) * ((-(max((-19), (((/* implicit */int) (unsigned short)43731))))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_13 [i_11] [i_11]), (((/* implicit */unsigned short) arr_38 [i_9] [i_10] [i_11] [i_11])))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10 - 2]))) | (max((((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11] [i_10 + 1] [i_9] [i_11]))) : (arr_35 [18ULL] [i_11]))), (((/* implicit */unsigned long long int) -23))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 18; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) arr_8 [i_10 - 2] [i_9]);
                        var_26 = ((/* implicit */unsigned short) arr_39 [i_13] [i_12 + 1] [i_10 + 2]);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)246)) == (max((max((((/* implicit */int) arr_9 [(short)15] [i_12 - 1] [i_13])), (-28))), (((((/* implicit */_Bool) arr_18 [i_10 + 3] [i_12 - 1])) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) (unsigned char)8))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) arr_28 [i_10]);
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            var_29 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))));
            arr_47 [i_9] [i_9] [i_14] = ((/* implicit */unsigned char) arr_41 [i_9] [i_9] [i_9] [i_14]);
            arr_48 [i_9] [i_14] [i_9] = ((/* implicit */unsigned char) ((_Bool) arr_39 [i_9] [i_14] [i_9]));
        }
    }
    var_30 = ((/* implicit */unsigned int) var_8);
    var_31 = ((/* implicit */int) var_3);
}
