/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82754
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_2 [i_1]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)17))))) <= (((((/* implicit */_Bool) arr_9 [i_0] [(short)2] [i_2] [11U])) ? (arr_7 [(short)4] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))));
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 1] [i_3])) % (((/* implicit */int) var_8))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_8 [(signed char)10] [i_1] [i_2] [i_4] [(short)10] [i_4]))));
                        }
                        arr_13 [i_0] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0])) << (((var_1) - (56658671U))))))));
                    }
                } 
            } 
            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [(signed char)6] [i_1] [i_0] [i_0]))));
            arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) arr_9 [i_0] [11U] [16U] [i_1]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
            var_20 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_5]))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 1071505201U))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_22 ^= ((/* implicit */unsigned int) arr_5 [i_0]);
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) 2542716858U))))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_2 [i_6]))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    arr_25 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned short) 1071505187U);
                    var_25 = ((/* implicit */signed char) var_11);
                    arr_26 [i_0] [i_6] [i_6] [i_8 - 1] &= ((/* implicit */long long int) var_10);
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_29 [i_6] [i_7] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)63)) ^ (((/* implicit */int) ((8191) != (((/* implicit */int) arr_6 [i_7])))))));
                    arr_30 [10U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_11 [i_9] [i_9] [i_6]);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [7LL])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9] [(short)10] [i_0]))))))))));
                }
                for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_6] [i_7])) > (((/* implicit */int) arr_23 [i_0] [i_6] [i_7] [i_10] [i_7] [i_0])))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((long long int) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        arr_38 [(_Bool)1] [(_Bool)1] [(unsigned short)14] [i_6] [i_11] |= ((/* implicit */signed char) arr_31 [i_11 - 1] [i_11 - 1] [2U]);
                        arr_39 [i_0] [11ULL] [i_7] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    }
                    for (long long int i_12 = 2; i_12 < 16; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) arr_16 [i_12] [i_12 - 1] [i_12])) ? ((+(116933217U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
                        arr_43 [i_0] [i_0] [i_0] [i_12] = arr_34 [i_12 + 1] [0U] [(short)13] [i_0] [i_12];
                        arr_44 [(signed char)10] [i_6] [i_7] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                        var_30 += ((/* implicit */short) ((((/* implicit */_Bool) 1676302744U)) ? (((/* implicit */int) arr_37 [i_12] [4U] [i_7] [i_6] [i_0])) : (((/* implicit */int) arr_42 [(short)14] [(unsigned char)8] [i_6] [i_6] [i_12]))));
                        var_31 = ((/* implicit */int) arr_42 [i_0] [i_6] [i_0] [i_10] [i_12 - 2]);
                    }
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (4178034079U))))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_33 ^= ((/* implicit */_Bool) (short)448);
                            arr_49 [i_0] [12U] [(short)17] [i_0] = ((/* implicit */short) ((int) (short)250));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_22 [(unsigned short)12] [i_6] [i_7]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_15] [i_6])) < (((/* implicit */int) arr_1 [i_6] [i_0])))))));
                arr_52 [i_15] [i_0] [(unsigned short)7] = ((/* implicit */signed char) (+(arr_24 [i_0] [i_6] [i_6] [i_6] [i_6])));
            }
            for (short i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(_Bool)0] [(unsigned short)16] [i_6] [i_6] [(signed char)16] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)12] [i_6] [i_0] [i_16])) : (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)0] [i_6] [i_6] [i_16])))))));
                arr_56 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) arr_40 [i_0] [3ULL] [i_16] [i_0] [(short)7])) : (arr_5 [i_6])));
                arr_57 [(unsigned char)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_16]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 2135157719)) ^ (116933217U)))) : (var_5)));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (long long int i_18 = 3; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_0] [i_18] [i_18 - 2] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)3))));
                            arr_63 [i_0] [i_17] [i_0] [(unsigned char)0] |= ((/* implicit */unsigned short) (short)-27204);
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_17 [i_6] [i_16] [i_0]))));
                            var_39 &= ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                var_40 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_60 [i_0] [i_6] [i_6] [i_0])))))));
            }
        }
        var_41 = ((/* implicit */unsigned int) var_10);
    }
    var_42 = ((/* implicit */unsigned int) var_7);
    var_43 *= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 4178034078U)))));
    var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((int) var_10))) ? (485259504U) : (((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))))));
    var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) var_7))));
}
