/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80929
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [7] [i_1 - 1] [i_2] [(signed char)19])) ? (((/* implicit */unsigned long long int) 21323737U)) : (arr_9 [0] [i_1] [i_2] [i_3])))) ? ((~(max((21323731U), (21323731U))))) : (((/* implicit */unsigned int) min((((int) var_7)), (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2 + 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_12 -= ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_3])), ((~((-(((/* implicit */int) (short)32748))))))));
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (max((max((arr_9 [i_1 - 3] [i_1] [i_1] [i_1 - 2]), (var_3))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)49)))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            arr_16 [i_5] [i_5] = ((/* implicit */unsigned int) ((long long int) arr_7 [i_5] [i_5] [i_5]));
            arr_17 [i_0] [i_5] = arr_9 [i_0] [i_0] [i_0] [(_Bool)1];
        }
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((((/* implicit */_Bool) arr_18 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_18 [i_0]), (arr_18 [i_7 + 1])))))));
                var_15 = arr_8 [i_0] [i_6 + 1] [i_6] [i_0] [i_6 + 1] [i_0];
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_14 [(_Bool)1] [i_6] [i_6 - 1]);
                            var_17 &= (~((+(((/* implicit */int) arr_4 [12])))));
                            arr_28 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1] = ((/* implicit */int) max(((-(arr_8 [i_0] [i_0] [i_6] [i_6] [i_8] [2LL]))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_6] [i_7] [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))))));
                            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_6 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15)))))), ((-(arr_1 [i_6 - 1] [i_6 - 1])))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                var_19 *= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_10])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                /* LoopSeq 4 */
                for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) var_11);
                    arr_34 [i_6] [i_6 + 1] [i_10] [i_11] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0])) ? (4273643558U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6913185245659992525LL)) ? (((/* implicit */int) arr_32 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_32 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_9 [10LL] [i_6 - 1] [i_10] [i_11]))) ? (max((((/* implicit */unsigned long long int) var_9)), (arr_9 [i_0] [i_6] [i_10] [i_11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_10] [i_11])) ? (((/* implicit */int) arr_23 [i_11] [i_10] [i_6 + 1] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_6 + 1] [i_10] [i_11])))))));
                    var_22 ^= ((/* implicit */unsigned long long int) 4273643558U);
                    var_23 *= (~(((((/* implicit */_Bool) arr_14 [i_0] [i_11] [i_6 + 1])) ? (21323737U) : (21323737U))));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)4))))) ? (arr_8 [i_0] [i_0] [i_10] [i_10] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_6 - 1] [(signed char)11])) ? (arr_8 [i_10] [i_12] [i_10] [i_10] [0ULL] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))))))))));
                    arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_6] = ((/* implicit */short) ((unsigned int) (~(arr_3 [i_0] [i_6 - 1] [i_10]))));
                    var_25 *= ((/* implicit */unsigned int) (~(arr_36 [i_10] [i_0] [18U] [i_10])));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_42 [i_13] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */int) arr_39 [i_0] [i_6] [i_13]);
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 + 1] [i_6 - 1]))) : (4273643564U)));
                }
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_45 [i_6] [i_0] [i_0] [i_6] = ((unsigned int) ((((/* implicit */_Bool) arr_43 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_15 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_35 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]))));
                    arr_46 [i_0] [i_0] [i_6] [i_6] [i_14] = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) 4273643537U)))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (arr_1 [i_10] [i_10]))) : (((/* implicit */long long int) arr_43 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6]))))));
                    arr_47 [i_14] [i_6] [i_10] [i_14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (unsigned char)235)), (21323737U)))))) ? ((-(21323737U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? ((+(((/* implicit */int) (signed char)-76)))) : ((+(((/* implicit */int) (_Bool)0))))))))))));
            }
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_35 [i_6 - 1] [16U] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1])))) : (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_4 [i_6]))))));
        }
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (~(((unsigned long long int) arr_2 [i_0] [i_0])))))));
        var_30 = ((/* implicit */long long int) var_10);
        arr_48 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-((+(var_4)))))));
    }
    var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_10)))));
    var_32 = ((/* implicit */signed char) ((long long int) var_4));
}
