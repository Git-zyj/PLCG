/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65414
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)255))))));
                                var_21 = ((/* implicit */short) max(((~(arr_5 [i_4] [i_4] [i_4]))), (((/* implicit */long long int) arr_2 [i_0]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) || ((!(((/* implicit */_Bool) arr_7 [i_5] [(unsigned char)6] [7U]))))));
                                var_23 = ((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [(short)9] [(short)9] [i_2] [i_3]))))) & ((-(arr_7 [i_0] [i_0] [i_5]))));
                                var_24 = ((/* implicit */short) (~((~(arr_15 [4U] [i_0])))));
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) 3710828820U)) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_2 + 2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))) : (arr_5 [i_0] [i_3] [i_3]))) : (((long long int) (short)-1))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned char) min((((max((arr_7 [i_2] [i_3] [i_6]), (((/* implicit */long long int) 1330423317)))) * (((/* implicit */long long int) ((unsigned int) arr_15 [i_0] [i_3]))))), ((-(-8092954416823000460LL)))));
                                arr_20 [i_6] [i_3] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (~(var_9)));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 1; i_7 < 8; i_7 += 1) 
                            {
                                arr_25 [i_0] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_18))));
                                arr_26 [i_0] [i_0] [i_3] = ((/* implicit */short) arr_2 [i_0]);
                                var_28 = ((/* implicit */int) (short)-8561);
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                            {
                                arr_29 [i_0] [i_8] [i_2] [i_3] [i_8] &= ((/* implicit */int) var_2);
                                arr_30 [i_3] [i_3] [i_3] = ((/* implicit */short) (~(-1751833216)));
                            }
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                            {
                                var_29 ^= ((/* implicit */unsigned int) (short)20722);
                                var_30 = ((/* implicit */unsigned int) (short)19396);
                            }
                            /* vectorizable */
                            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                            {
                                arr_35 [(unsigned char)4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */short) arr_7 [2U] [i_1] [i_1 - 1]);
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((240LL) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [3U] [i_2] [9LL] [9LL] [i_10] [9LL])))))) ? (((/* implicit */int) (short)8557)) : (arr_12 [i_10] [i_3] [i_2] [i_1] [i_0] [(unsigned char)2])));
                            }
                            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((int) var_18)) & (((((/* implicit */_Bool) (short)-8584)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (short)29041))))))) ? (((((/* implicit */_Bool) ((short) arr_9 [i_3]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)146))))) : (((long long int) arr_9 [(short)6])))) : (((/* implicit */long long int) var_8))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (796149476U)))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) min((arr_9 [i_1]), (arr_31 [i_0] [i_0])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */int) (-(var_6)));
}
