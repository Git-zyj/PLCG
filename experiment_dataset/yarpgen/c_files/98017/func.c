/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98017
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
    var_19 = ((/* implicit */unsigned short) ((((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_20 = ((/* implicit */long long int) max((var_20), (((long long int) 18196463076907084948ULL))));
    var_21 = ((/* implicit */unsigned short) ((short) var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((-1) / (((/* implicit */int) ((short) -7LL))))) + (min((arr_2 [i_1]), (arr_2 [i_1]))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_23 = ((/* implicit */int) ((signed char) (-(((arr_4 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [(unsigned short)4]))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(arr_8 [i_2] [i_1] [i_0])))), (((unsigned long long int) (short)-27773)))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) (short)11235))) * (0U))), (((/* implicit */unsigned int) var_14)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [(unsigned short)14] [i_2] [(unsigned short)14] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_0 [i_1] [(unsigned char)18])) : (((/* implicit */int) arr_5 [i_2] [i_0])))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (arr_1 [i_1])));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((int) ((arr_3 [i_3]) & (((/* implicit */int) arr_0 [i_0] [i_3]))));
                    }
                }
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_17 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) arr_6 [i_0])) || (var_7))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [(_Bool)1] [i_4])) : (18196463076907084965ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_7))))));
                    arr_18 [i_4] [i_1] [(signed char)10] [i_4] = ((/* implicit */short) var_1);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((short) min((var_14), (min(((signed char)127), ((signed char)4))))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_13) ? (var_0) : (arr_3 [i_1]))), ((((_Bool)1) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [(short)18])) : (min((((long long int) arr_2 [i_4])), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (~(((unsigned int) arr_2 [i_0])))))));
                                arr_25 [i_6] [i_4] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_19 [i_6] [i_0] [i_1] [i_0])))) : (arr_15 [i_0] [21U] [i_0])))));
                            }
                        } 
                    } 
                    var_30 |= ((/* implicit */_Bool) var_18);
                }
                for (int i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((-221917157), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (((((/* implicit */_Bool) 17031256370887981907ULL)) ? (8988912831919491071ULL) : (((/* implicit */unsigned long long int) 117440512))))))));
                                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [14ULL] [i_1] [17ULL] [7U] [i_7] [21] [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_7 + 1] [i_7 + 2])) - (((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7 + 1] [i_7]))))) : (((unsigned int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (-(min((min((var_4), (((/* implicit */long long int) arr_31 [i_7] [i_7])))), (((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_7]))))))))))));
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_10] [i_10 + 1] [i_12] [i_12])) : (((/* implicit */int) arr_36 [i_12] [i_12] [(short)16] [i_10 + 1] [i_12] [i_1]))));
                                var_35 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((var_11) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)-27)))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_40 [i_0] [i_0] [i_1] [i_1] [1U] [i_10 + 2])))) : (1153002766U)));
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (+(((int) (_Bool)1)))))));
                }
            }
        } 
    } 
}
