/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98914
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 14013001280650772033ULL)) && (((/* implicit */_Bool) 0ULL)))))) && (((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_3] [i_4 - 2])) || (((/* implicit */_Bool) arr_6 [i_1] [i_4] [i_3] [i_4 + 2]))))));
                            var_14 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) 1372228235)) : (arr_8 [i_4 - 1] [i_1] [i_1] [i_0])))) * (((arr_5 [i_4] [i_1] [12U]) / (((/* implicit */long long int) arr_8 [i_2] [i_1] [i_2] [i_2 - 3])))))));
                            var_15 ^= ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */int) min(((((-(var_4))) != (((unsigned int) arr_10 [i_0] [10ULL])))), (((((/* implicit */_Bool) -1372228242)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_0] [i_0] [i_0]))), (((((((/* implicit */_Bool) arr_13 [i_0 + 1] [(unsigned short)2])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) && (((/* implicit */_Bool) var_12))))))))));
            var_18 *= ((((/* implicit */_Bool) min((arr_12 [i_5]), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (((unsigned long long int) ((((/* implicit */unsigned int) arr_10 [i_0 - 2] [i_5])) + (arr_8 [i_0] [i_5] [i_5] [(short)16])))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */short) max(((-(((/* implicit */int) arr_16 [i_0 - 3] [i_5 + 1] [i_5 - 2])))), (((((/* implicit */int) arr_16 [i_0 + 1] [i_5] [i_5 + 1])) - (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_5 - 2]))))));
                            var_20 ^= ((/* implicit */short) (~(((((((/* implicit */_Bool) var_5)) ? (arr_5 [i_7] [i_6] [i_7]) : (((/* implicit */long long int) 1934978775U)))) + (((/* implicit */long long int) ((-1630943255) + (((/* implicit */int) arr_1 [i_7])))))))));
                            arr_21 [i_7] [i_5] [i_7] [i_8] [i_7] |= ((/* implicit */int) (-((~(min((((/* implicit */unsigned int) var_1)), (arr_2 [i_0 - 1])))))));
                            var_21 = ((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_6] [i_0 + 1]);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((3672499130153975265ULL), (((/* implicit */unsigned long long int) var_12)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_10 [i_0] [12]) : (arr_3 [i_0] [i_5 - 1] [i_5])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_5 + 1]))) : (arr_5 [i_0] [12U] [i_5 + 1]))) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1502727209U)) ? (-1372228223) : (((/* implicit */int) arr_16 [(short)15] [i_5] [i_5 - 1])))))));
        }
        /* vectorizable */
        for (short i_9 = 2; i_9 < 15; i_9 += 2) 
        {
            arr_24 [i_0] [16ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned int) (+(arr_3 [i_0] [2LL] [i_0])))) : (arr_8 [i_9] [i_0] [i_0] [i_9])));
            var_23 += ((/* implicit */unsigned long long int) ((signed char) var_8));
            var_24 *= ((/* implicit */signed char) -1372228236);
        }
        arr_25 [i_0] = ((/* implicit */short) (+(var_4)));
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [6ULL])) ? (1372228235) : (((/* implicit */int) arr_22 [i_0 - 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) + (arr_8 [i_0 + 2] [14U] [i_10] [i_0 + 2])))))) ? (((((((/* implicit */_Bool) -1372228255)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1146104625)) || (((/* implicit */_Bool) arr_12 [(unsigned char)0]))))) : ((+(((/* implicit */int) (short)-23992)))))) : (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [(short)14] [(short)14])) ? (arr_10 [i_0] [i_10]) : (((/* implicit */int) var_7)))))))))));
            var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_10 - 3])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_10 - 3])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0] [13] [i_10 - 2])))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            arr_34 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (signed char)61)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_0])) : (-1372228243))) : (arr_12 [i_0])));
            arr_35 [i_0] [i_0] [i_0 + 2] = ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_11])) ? (arr_17 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        }
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) var_8);
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 + 1])) ? (((/* implicit */int) (((~(arr_2 [i_0 - 3]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_4 [i_0] [i_0])))))))) : (((/* implicit */int) arr_26 [i_0]))));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 2) 
            {
                for (signed char i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) var_0);
                            var_29 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_0] [i_14] [i_13])) / (arr_38 [i_0] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_15] [i_14 - 1] [i_15])) >= (arr_17 [i_0] [i_0] [i_12] [i_13] [i_12] [i_0]))))) : (max((((/* implicit */unsigned int) arr_7 [i_0] [(short)0] [i_0] [i_14] [i_12] [(short)0])), (var_4))))) == (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)40)) ? (var_8) : (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_30 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((int) ((signed char) var_2)))) : (((((/* implicit */_Bool) ((short) (signed char)-99))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))));
    var_31 ^= ((/* implicit */unsigned long long int) var_4);
}
