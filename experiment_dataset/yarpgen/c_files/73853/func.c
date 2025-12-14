/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73853
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_1 [i_0]))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((signed char) max((max((1951684201), (var_7))), (((/* implicit */int) var_8))))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */short) arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)50943)) ? (((((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (arr_0 [i_0])))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (-(var_9)))))) : (max(((-(5015325547228560047LL))), (((/* implicit */long long int) (signed char)107))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_9 [i_0] = ((/* implicit */int) var_11);
                arr_10 [i_2] [i_2] [18] = ((/* implicit */short) arr_0 [i_0]);
                arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) 1951684201);
                var_15 = (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])));
            }
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
            {
                arr_14 [i_0] [i_0] = (-(arr_5 [i_0] [i_1]));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4] [i_1] [i_0])) ? (arr_19 [i_5] [i_5] [i_4] [i_3] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_1] [i_3] [i_4] [i_5] [i_3]))))))));
                            var_17 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_1] [i_3 - 1]))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_3]))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_12 [i_0 - 2] [i_0] [i_0])) : (-3597606471750361262LL)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)94)) ? ((+(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_3] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_7)) : (var_2))))) : (((/* implicit */long long int) max((1951684201), (((/* implicit */int) (signed char)94))))))))));
            }
            for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) max((((/* implicit */int) (unsigned short)44823)), ((+(((/* implicit */int) (signed char)15)))))))));
                var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)8582))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_32 [i_7] [i_1] [i_1] [i_1] [8] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2])) ? (arr_17 [i_8 - 1] [(short)18] [i_8 - 1]) : (((/* implicit */int) arr_8 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2]))))));
                            arr_33 [i_7] [i_7] = ((/* implicit */short) (signed char)-94);
                            var_21 = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (short i_10 = 3; i_10 < 22; i_10 += 4) 
                {
                    {
                        arr_38 [i_1] [i_1] [i_9] [i_10 + 1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_30 [13LL] [i_10 + 1] [i_9] [i_10] [i_0 + 1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1951684201)), (var_4))))))) : (((/* implicit */int) ((unsigned short) (signed char)94))));
                        arr_39 [i_0 - 1] [(short)6] [i_9] [i_10] = ((/* implicit */short) (-(((var_1) | (((/* implicit */int) ((short) arr_31 [i_0] [i_0] [i_0 - 1] [i_1])))))));
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)102))) ? (((long long int) arr_5 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_0 - 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15)))))));
                    }
                } 
            } 
        }
        for (short i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            arr_42 [i_0 - 1] [6LL] [i_11] = (~(((/* implicit */int) arr_6 [(unsigned short)1] [i_11] [i_11] [i_0])));
            arr_43 [(unsigned short)12] = min((((((/* implicit */int) ((unsigned short) (signed char)93))) >> (((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(signed char)9] [i_11] [i_11] [(unsigned short)13] [(unsigned short)20] [(signed char)3]))) : (arr_25 [i_0] [i_0] [i_11] [i_11]))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_0] [i_11])) || (((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0]))))), (arr_31 [i_0 - 1] [i_11] [i_11] [(short)18])))));
        }
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -7262197875862991314LL)))) ? (var_7) : (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (signed char)94)) != (((/* implicit */int) (signed char)94))))))) : ((-(var_7)))));
}
