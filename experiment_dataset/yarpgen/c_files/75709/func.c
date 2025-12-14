/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75709
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
    var_14 = ((/* implicit */_Bool) (+(var_9)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = (+(arr_1 [i_0]));
        arr_2 [20] = arr_1 [i_0];
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            var_16 = (short)-32767;
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                arr_13 [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((var_3) + (9223372036854775807LL))) >> (((var_7) - (2981660912162850709ULL))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) & (var_4)))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [(short)13] [i_2] [i_3] [i_4] [i_5]))) != (arr_7 [i_4]))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_2] [(short)0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))))), (((((((/* implicit */int) arr_8 [i_1] [i_2])) >= (((/* implicit */int) arr_5 [10])))) ? (((arr_4 [i_3 + 1]) ? (((/* implicit */long long int) var_13)) : (arr_7 [14U]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (var_4))))))));
                            arr_20 [i_1] [i_3] [i_3] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_4 [i_3 + 1])), (arr_5 [i_4])))), ((unsigned short)29537)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3] [i_3 - 1] [i_1 + 1] [i_2 - 1] [i_2] [i_3]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */unsigned long long int) var_4)) + (arr_0 [i_2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)9] [i_2] [i_1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 4; i_6 < 14; i_6 += 2) 
                {
                    var_19 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) arr_11 [i_6] [i_3]))), (((arr_18 [i_6] [i_6 - 4] [i_2 + 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_6 + 2])))))));
                    var_20 = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (!((_Bool)1)))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned char) 518171752U)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))))) ? ((-(((/* implicit */int) arr_15 [i_3] [i_1] [i_3])))) : (min((min((var_13), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) arr_4 [i_6])), (var_8))))))));
                    var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((11456820656238024191ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [6LL] [i_2])))))) ? (((((/* implicit */_Bool) var_4)) ? (1943052576U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_3] [i_2] [i_3]))))))), (((/* implicit */unsigned int) (_Bool)1))));
                }
            }
        }
        for (short i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            arr_27 [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) ((arr_7 [i_7]) == (((min((var_9), (((/* implicit */long long int) var_10)))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))))));
            arr_28 [i_1] &= ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_23 [i_1] [i_7 + 2])))));
            var_23 = ((/* implicit */short) ((((((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [(unsigned short)5])) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((signed char) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]))) : (((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_1] [i_7 + 2] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [(_Bool)1] [i_7 + 2] [i_7]))))));
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) arr_4 [i_1])))), (((((/* implicit */_Bool) ((var_0) / (var_0)))) ? (((((/* implicit */_Bool) arr_19 [7ULL] [i_7] [i_1] [(_Bool)1] [(_Bool)1] [(unsigned char)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) -9030777500419309278LL)) : (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_7])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_8])) ? (((/* implicit */int) arr_26 [i_1 + 2] [i_1])) : (((/* implicit */int) arr_26 [i_1 - 2] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [4] [i_8] [i_8]))) : (min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) arr_7 [(_Bool)1])) ? (arr_7 [i_1]) : (arr_18 [i_1] [i_8] [6])))))));
                    arr_33 [8LL] [i_8] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_23 [i_1] [i_1]), (arr_23 [i_8] [(short)6])))) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_9])) ? (((/* implicit */int) arr_23 [i_1] [i_1])) : (((/* implicit */int) arr_23 [i_8] [i_1])))) : ((-(((/* implicit */int) arr_23 [i_8] [16ULL]))))));
                }
            } 
        } 
        arr_34 [12LL] [i_1] &= ((/* implicit */unsigned long long int) min((((arr_32 [i_1] [i_1] [i_1 + 2]) ? (((/* implicit */int) arr_32 [(unsigned char)7] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_32 [(_Bool)1] [(signed char)7] [i_1 + 2])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_1] [i_1] [11U] [i_1] [i_1 - 2] [(signed char)6] [i_1])), (max((arr_29 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1])))))))));
        arr_35 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_17 [i_1] [i_1])))) ? (((long long int) arr_10 [i_1])) : (((/* implicit */long long int) var_6)))));
        arr_36 [16U] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-67)), (max((((/* implicit */unsigned int) (signed char)40)), (2705210712U)))));
    }
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_26 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((arr_16 [i_10] [i_10] [i_10] [i_10]) ? (var_0) : (arr_7 [i_10])))) ? ((+(((/* implicit */int) arr_21 [i_10])))) : (((/* implicit */int) arr_5 [i_10])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                {
                    arr_46 [i_10] [(_Bool)1] [(_Bool)1] [i_11] = ((/* implicit */short) (((~(((/* implicit */int) arr_8 [i_11] [i_12])))) == ((~(((/* implicit */int) (_Bool)1))))));
                    arr_47 [i_10] [i_12] [i_12] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((arr_4 [i_10]) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_5))))), (arr_7 [i_11])))));
                }
            } 
        } 
    }
}
