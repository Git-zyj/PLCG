/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87323
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (((-(((var_0) * (var_1))))) % (((((/* implicit */_Bool) var_4)) ? (((18446744073709551607ULL) + (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) 9223372036854775791LL))))));
                                arr_16 [i_0] [3LL] [3LL] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((var_10) != (((/* implicit */int) var_11))))))) & (((/* implicit */int) arr_13 [i_4] [i_0] [i_2] [i_0] [i_0]))));
                                arr_17 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_12 [6LL] [6LL] [i_2] [i_2])))), (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) >= (var_5)))) : ((-((+(((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_5 [i_5] [i_5]);
                    arr_29 [i_5] [i_5] = ((/* implicit */signed char) arr_15 [i_5] [i_6] [i_6] [i_7 - 2] [0LL]);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((arr_15 [i_5] [i_7] [i_6] [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_25 [i_5] [i_6] [i_7] [i_8 - 2])))))) <= (arr_21 [i_7 - 2])))))));
                        arr_34 [i_5] [(unsigned short)8] [i_7] [i_7] [(short)4] |= ((/* implicit */unsigned int) ((((((-1) * (((/* implicit */int) arr_9 [i_5] [i_6] [i_7])))) <= (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_7 + 1] [(short)6] [i_7])) : (((/* implicit */int) var_13)))))) ? (var_1) : (((/* implicit */unsigned long long int) (+(arr_10 [14ULL] [i_7 + 1] [i_6] [14ULL]))))));
                        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [6U])))))))));
                        var_24 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_8 - 2] [4ULL] [18ULL] [6] [i_8 - 3]))))) == (((((/* implicit */_Bool) ((short) var_1))) ? (((arr_4 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [(_Bool)1]))) : (var_5))) : (arr_30 [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1])))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) arr_35 [i_5] [15ULL] [i_5] [17]);
                        arr_38 [i_5] [i_5] [(short)16] [i_5] = ((/* implicit */signed char) ((arr_4 [i_5]) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) arr_12 [i_9 - 1] [i_7] [i_6] [i_5]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned int) (-(min((arr_40 [15LL] [i_10 + 3]), ((~(12)))))));
                arr_44 [(signed char)0] &= ((/* implicit */unsigned int) arr_43 [i_10] [4U]);
                /* LoopSeq 3 */
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    arr_47 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) 31);
                    var_27 = ((/* implicit */unsigned int) min(((short)28672), (((short) (~(arr_39 [i_10] [i_11]))))));
                    var_28 = (unsigned char)21;
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_0) < (var_7)))))))));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 3; i_15 < 17; i_15 += 1) 
                        {
                            {
                                var_30 = arr_54 [(signed char)17] [6ULL] [i_13];
                                arr_55 [i_10] [i_11] [i_11] [i_13] [4LL] [i_14] [i_11] = ((/* implicit */long long int) (~(arr_48 [i_11] [i_11])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            {
                                var_31 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [(unsigned short)15] [i_11] [i_16] [i_17]))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_11] [(signed char)2] [i_16] [0U]))) : (arr_41 [(signed char)10] [(signed char)10] [i_17])))));
                                var_32 = ((/* implicit */unsigned short) arr_39 [i_13] [i_13]);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    var_33 = ((/* implicit */short) arr_61 [i_10] [i_11]);
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((((var_17) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (short)-32766)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_51 [i_10 + 3] [i_11] [i_10 + 2] [i_11])), (arr_53 [i_10] [i_10] [i_10] [i_10 + 1] [i_11] [i_10])))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_18] [i_18] [i_11] [i_11] [i_10] [i_10])) / (((/* implicit */int) (unsigned char)21)))))))) ? (((((long long int) arr_59 [i_10])) * (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) & (((long long int) var_9))))));
                }
            }
        } 
    } 
}
