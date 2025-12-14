/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5937
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
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((/* implicit */signed char) (((~((+(((/* implicit */int) var_5)))))) * (((/* implicit */int) var_7))));
    var_19 *= var_12;
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((arr_3 [(short)14]), (((/* implicit */signed char) var_0)))), (arr_3 [i_0 - 4]))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_3 + 3])) + (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                                var_20 = ((/* implicit */long long int) max((var_20), ((+(min((((/* implicit */long long int) min((arr_10 [(short)13] [(_Bool)1] [i_2] [(_Bool)1]), (((/* implicit */unsigned int) var_0))))), (arr_12 [i_3] [i_1])))))));
                                var_21 |= ((/* implicit */signed char) min((((((((/* implicit */int) arr_0 [i_0 - 3])) > (((/* implicit */int) var_7)))) ? (((((/* implicit */int) var_11)) % (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_2 [i_3])))), (((((/* implicit */int) arr_1 [i_0 - 4] [i_3 + 1])) << (((var_1) - (4097572719U)))))));
                                arr_14 [i_1] [i_3] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] = ((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_1] [(signed char)16] [i_0 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_22 = var_14;
                            arr_22 [i_0] [(signed char)11] [i_2] [15LL] [i_1] = ((/* implicit */short) var_14);
                            var_23 = ((/* implicit */short) (((-(((/* implicit */int) arr_3 [i_6])))) <= (((/* implicit */int) var_0))));
                        }
                        arr_23 [16U] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((long long int) var_8)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_8 [i_0] [i_1] [(_Bool)1] [(_Bool)1]))))));
                        var_24 &= arr_1 [i_2] [i_2];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_27 [9LL] [i_0 - 3] [i_0 - 3] [i_7] [i_8])) * (((/* implicit */int) arr_21 [i_0 + 3] [(signed char)15] [i_0 + 2] [i_0] [i_0])))), (((/* implicit */int) var_9))));
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */int) (~(((((((/* implicit */_Bool) var_9)) || (var_0))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1])))))));
                            arr_31 [i_1] [i_7] [11U] [i_1] [(short)12] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)1342))));
                            arr_32 [(unsigned char)12] [(unsigned char)17] [i_2] [i_1] [16U] [(unsigned char)17] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((_Bool) min((((/* implicit */signed char) var_12)), (var_6))))));
                            var_26 = ((/* implicit */unsigned char) (+((-(arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))));
                        }
                        arr_33 [i_1] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [(_Bool)1] [i_0 + 2] [i_0])) ? ((-(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) var_5))))));
                        arr_34 [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                            arr_37 [i_9 - 1] [i_1] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_20 [i_0 - 4] [i_1] [i_0 - 4] [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [i_0] [i_1] [(_Bool)1] [i_2] [i_9 - 1] [i_2] [i_0 + 1])));
                            arr_38 [i_0] [i_0] [i_2] [10] [i_1] = ((/* implicit */short) (~(arr_12 [i_0 + 3] [i_0 - 1])));
                        }
                    }
                    arr_39 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 4] [(_Bool)1] [(short)2] [i_0 + 3] [i_2])) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_1] [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1] [16] [(_Bool)1] [i_1] [(short)15])))))) ? ((~(var_4))) : (((/* implicit */long long int) arr_11 [i_0 + 1] [i_1] [i_2] [i_2] [i_0] [i_2]))));
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_28 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_1])))) : (arr_10 [i_10] [(signed char)15] [i_10] [i_10])));
                        var_30 -= ((/* implicit */unsigned char) var_2);
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_13 = 1; i_13 < 19; i_13 += 3) 
                        {
                            arr_49 [i_1] [i_1] [9] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_1] [(unsigned char)20] [(unsigned char)1] [i_1] [i_1])) ? (arr_48 [i_1] [i_1] [(unsigned char)12] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [(signed char)16] [i_1] [(_Bool)1])))))));
                            var_31 = ((/* implicit */int) var_10);
                            var_32 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (arr_35 [i_1] [(short)7] [i_12] [i_1] [i_1] [i_1])))));
                            var_33 |= ((/* implicit */unsigned char) (~(var_14)));
                        }
                        arr_50 [i_1] = ((/* implicit */_Bool) var_3);
                        arr_51 [i_1] [i_1] [i_10] [i_12] = (+((-(arr_8 [i_1] [(signed char)10] [i_12] [(unsigned char)8]))));
                    }
                }
                arr_52 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [(_Bool)1] [(signed char)20])) ? (arr_11 [i_0] [i_1] [9LL] [i_0 - 2] [i_1] [i_0]) : (arr_11 [i_0] [i_1] [(unsigned short)19] [i_0 - 3] [i_1] [(unsigned char)16])))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_1] [i_0 - 4] [i_0 + 3] [i_0 + 2]))))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_57 [i_1] [i_0 - 2] [i_0 - 3] [i_0 - 1])) + (((/* implicit */int) arr_57 [i_1] [i_0 + 1] [i_0 + 2] [i_0 - 2]))))));
                            var_35 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                            {
                                var_36 = ((/* implicit */signed char) var_9);
                                arr_61 [i_0] [16U] [i_14] |= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_55 [i_15]))))));
                                arr_62 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (((+(((var_0) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) << ((((-(((/* implicit */int) ((_Bool) var_3))))) + (14)))));
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)0))))))) ? (var_13) : (((/* implicit */int) min((((/* implicit */unsigned short) min((var_5), (var_5)))), (arr_36 [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 3] [i_0]))))));
                                var_38 = ((/* implicit */short) (+((~(arr_35 [i_1] [i_15] [i_14] [i_1] [i_0] [i_1])))));
                            }
                            var_39 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_1] [i_14] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(signed char)10] [(unsigned short)20] [(signed char)10] [i_15] [(signed char)10]))) : (arr_44 [i_1] [(_Bool)1] [(_Bool)1] [i_1]))))));
                            var_40 ^= (-((-(var_14))));
                        }
                    } 
                } 
            }
        } 
    } 
}
