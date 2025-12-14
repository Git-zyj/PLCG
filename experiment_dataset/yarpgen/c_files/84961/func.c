/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84961
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (signed char)-46);
                                var_21 = ((/* implicit */unsigned char) -2615627402194500061LL);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_18))))))) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                arr_13 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (min((((/* implicit */unsigned long long int) var_18)), (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_5])))))) ? (((/* implicit */long long int) ((((2147483647) >= (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) ((unsigned short) var_12))) : (min((var_4), (var_9)))))) : (((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(7535305434764147519ULL))), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) min(((unsigned short)1260), (((/* implicit */unsigned short) arr_6 [i_7 - 1] [i_6] [i_5]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (min((var_5), (var_5))))))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) var_18)), (var_8)))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                arr_27 [i_5] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) min(((unsigned short)1260), ((unsigned short)1260)));
                                arr_28 [i_5] = ((/* implicit */_Bool) (((+(arr_8 [i_6] [i_6] [i_7 + 1] [i_8]))) << (((((long long int) var_6)) - (73LL)))));
                                arr_29 [i_5] [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] = ((/* implicit */long long int) (+((~(((((/* implicit */int) arr_19 [i_5] [i_9])) % (var_4)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                            {
                                arr_42 [i_5] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_6] [i_6] [i_6]))) - (((((/* implicit */_Bool) arr_33 [i_5] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_16 [i_5] [i_5])))));
                                var_25 = ((/* implicit */long long int) var_9);
                                arr_43 [i_5] [i_6] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)255))))) ? ((~(arr_24 [i_5] [i_6] [i_11] [i_12]))) : (((((/* implicit */int) (unsigned short)64276)) << (((((/* implicit */int) var_6)) - (83)))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_12])) : (((/* implicit */int) (unsigned char)224))));
                                arr_44 [i_5] [i_10] [i_12] = ((/* implicit */unsigned short) arr_40 [i_5] [i_5] [i_5] [i_5] [i_5]);
                            }
                            /* vectorizable */
                            for (long long int i_13 = 3; i_13 < 10; i_13 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned short) ((var_13) == (((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11] [i_11] [i_11] [i_11] [i_5])))))));
                                var_28 &= ((/* implicit */long long int) arr_36 [i_13] [i_11] [i_6] [i_6] [i_6] [i_5]);
                                arr_49 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_13);
                            }
                            /* vectorizable */
                            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 3) 
                            {
                                arr_54 [i_5] [i_6] = ((/* implicit */unsigned char) arr_19 [i_5] [i_14]);
                                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56067))));
                            }
                            arr_55 [i_5] [i_5] [i_10] [i_10] [i_11] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_50 [i_5] [i_5] [i_6] [i_10] [i_10] [i_11])) : (((/* implicit */int) arr_50 [i_5] [i_5] [i_6] [i_6] [i_10] [i_11])))));
                            var_30 = arr_14 [i_11];
                        }
                    } 
                } 
                var_31 = ((((long long int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_2)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_5] [i_6]))))))))));
            }
        } 
    } 
}
