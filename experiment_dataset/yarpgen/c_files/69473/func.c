/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69473
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
    var_16 += ((/* implicit */unsigned int) ((var_9) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) : (var_2))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                var_17 = ((/* implicit */int) arr_3 [i_0 + 1] [8ULL] [8ULL]);
                var_18 = ((/* implicit */unsigned char) arr_2 [i_1]);
            }
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    var_19 = arr_4 [i_0] [i_1] [i_3 + 1];
                    arr_13 [i_3] [i_3] [i_3] [i_3] [(signed char)1] [i_0] = ((/* implicit */short) (+(arr_8 [i_3] [i_1] [i_1])));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3] [i_4 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_3 - 1] [i_4] [i_4 + 1]))));
                }
                /* vectorizable */
                for (short i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */int) arr_14 [i_0] [i_0] [4] [i_0 - 1]);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_6] [i_1] [i_0 - 1])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [(short)0]))))));
                    }
                    var_23 = ((/* implicit */signed char) arr_9 [i_0]);
                    arr_18 [(signed char)0] [i_1] [i_1] [(signed char)0] [(signed char)0] |= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0]);
                }
                for (signed char i_7 = 3; i_7 < 7; i_7 += 4) 
                {
                    arr_22 [i_1] [i_3] = ((/* implicit */unsigned int) ((signed char) ((short) arr_17 [i_0] [i_3] [(unsigned short)4] [i_3] [5ULL])));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0])) && ((!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1] [i_3])))))))));
                }
                var_25 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_21 [i_0] [i_0 + 1] [i_3] [2])))) * (((/* implicit */int) ((short) var_8)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (short i_9 = 1; i_9 < 7; i_9 += 1) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])))), (((/* implicit */int) arr_21 [i_0 + 1] [(short)4] [i_3] [i_0 + 1]))))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_4 [i_3] [i_1] [i_3])))) > (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) var_7)) : (977400495)))))) : (((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [i_3] [i_9])));
                            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_8])) : (((/* implicit */int) arr_0 [i_3 - 1] [(_Bool)1]))))) ? ((~(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_17 [i_0] [i_8] [i_0] [i_0] [i_9])))))) : ((+(((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_15 [i_9 - 1] [i_8] [i_3] [i_1] [i_0 + 1]))))))))));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (+(var_9)))) != (var_12))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_24 [i_0] [i_1] [i_3] [i_8] [i_9 + 3] [i_9 + 1])))))));
                            var_29 = ((/* implicit */short) 4055928063580861808ULL);
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
            }
            var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_9 [i_0 - 1]))) > (((/* implicit */int) ((arr_9 [i_0 - 1]) <= (arr_9 [i_0 - 1]))))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)52902))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
        {
            var_33 |= ((/* implicit */short) ((long long int) (-(4055928063580861808ULL))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                for (int i_12 = 2; i_12 < 8; i_12 += 2) 
                {
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_10] [i_10] [i_11 - 1] [i_11 - 2] [i_0]))))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22383))) | (((((/* implicit */_Bool) ((short) (signed char)77))) ? (1860873111U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_0] [(unsigned char)7] [i_10] [i_10] [i_11] [(unsigned char)7]), (((/* implicit */unsigned short) (signed char)-126))))))))));
                        var_36 = ((/* implicit */unsigned long long int) arr_3 [i_0] [(short)1] [i_0 + 1]);
                        var_37 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_12 + 2] [i_11 + 1] [i_0 + 1] [i_12])), (var_11))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_19 [i_14] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14]))) : (-7047845097672354064LL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_39 -= ((/* implicit */signed char) arr_39 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9] [4U]);
                            var_40 = ((/* implicit */unsigned int) arr_12 [i_14]);
                        }
                    }
                } 
            } 
            var_41 -= ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
        }
        var_42 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_29 [2ULL] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
    }
}
