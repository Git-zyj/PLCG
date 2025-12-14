/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6208
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
    var_16 |= ((/* implicit */unsigned char) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)183)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179)))));
                        arr_8 [i_0 - 1] |= ((/* implicit */signed char) (!(arr_5 [i_0 - 1] [i_1 - 1])));
                    }
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 1916020232)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (3593653968376784100LL)));
                    arr_9 [i_0] = ((/* implicit */short) ((int) arr_0 [i_1 + 3]));
                    var_20 &= ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_4));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (~(((int) (~(((/* implicit */int) (signed char)-39)))))));
        arr_12 [i_4] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_4] [i_4] [(_Bool)1])) ? (((/* implicit */unsigned int) var_14)) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_15 [(short)4] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24146))) != (((((/* implicit */_Bool) arr_0 [5U])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (-(var_14)));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_24 |= ((/* implicit */unsigned long long int) (+((~(var_14)))));
                            var_25 = ((/* implicit */short) arr_26 [3U] [i_5] [i_7] [i_8] [i_9]);
                            var_26 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_6] [i_8] [i_9]))) : (arr_4 [i_5] [i_5] [i_5]))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 7; i_10 += 1) 
                        {
                            arr_31 [i_5] [i_5] [i_7] [8ULL] [i_8] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_6 - 1] [i_6] [i_5] [i_10 - 1] [(signed char)4]))))))));
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)53)) ? (((unsigned int) 2136960720U)) : (2158006562U))) << (((((/* implicit */int) (unsigned char)252)) - (249)))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        }
        /* LoopNest 3 */
        for (signed char i_11 = 2; i_11 < 8; i_11 += 2) 
        {
            for (int i_12 = 2; i_12 < 8; i_12 += 3) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_13 - 1] [i_5] [i_13 - 1] [i_13 - 1] [i_13]))))) != (((/* implicit */int) ((((/* implicit */_Bool) (-(var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_30 [i_5] [i_11] [i_5] [i_12] [i_13]) : (((/* implicit */unsigned long long int) var_6))))))))));
                        var_30 = ((/* implicit */unsigned long long int) ((signed char) (-(arr_32 [i_11 + 1] [(unsigned char)6] [i_13 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        arr_42 [i_14] [i_14] = ((/* implicit */_Bool) var_7);
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (unsigned char i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) arr_47 [i_14]);
                            var_32 -= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) var_11)), (arr_54 [i_14] [(signed char)4] [i_16] [i_17 + 1] [1U] [i_18] [i_17 - 1])))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
                        {
                            arr_59 [i_17] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */int) arr_39 [i_14] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) / ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-256))) : (arr_53 [i_17 + 3] [i_17] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 4] [i_14])))));
                            arr_60 [i_16] [i_17] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_49 [i_14] [i_16] [i_17 + 2] [(short)3])) ? (((/* implicit */int) ((arr_41 [i_19]) == (((/* implicit */unsigned long long int) var_15))))) : (arr_56 [i_17 - 1])))));
                        }
                        arr_61 [i_17] = ((/* implicit */short) (+((~(var_6)))));
                        arr_62 [i_14] [i_17] [i_16] [i_17 + 2] = ((/* implicit */signed char) arr_51 [i_17] [i_17] [i_17] [i_14]);
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_51 [i_14] [i_14] [i_16] [i_17]))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (short)-24147))));
                            var_35 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (unsigned char)252)), (((((/* implicit */_Bool) (unsigned short)64687)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))))));
                            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_63 [i_14] [i_15] [i_16] [i_14] [i_16])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_16]))))), ((-(var_3))))))));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_58 [i_14] [i_15] [(unsigned char)11] [i_17 - 1] [i_20] [i_14])) : (((arr_52 [i_14] [(signed char)11] [i_16] [(_Bool)1] [(signed char)11]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))))) ? (((unsigned int) (unsigned short)65535)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14] [i_15]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) /* same iter space */
                        {
                            var_38 -= arr_39 [i_14] [i_14];
                            var_39 = (~(((((/* implicit */_Bool) (short)-24134)) ? (((/* implicit */int) (short)483)) : (((/* implicit */int) (_Bool)1)))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [14U] [i_17] [i_17 - 1] [i_17 + 1] [i_21] [i_17 + 4] [(short)2])))))));
                        }
                    }
                } 
            } 
        } 
    }
}
