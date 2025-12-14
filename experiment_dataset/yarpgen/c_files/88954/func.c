/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88954
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
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 2] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)2] [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [12] [i_2] [i_2]))) == (arr_2 [i_0 - 2] [i_0 - 2] [16LL]))))))) ? (((((long long int) var_12)) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)71)), (var_7)))))))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-68)) == (((/* implicit */int) ((unsigned char) var_5))))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */int) (short)(-32767 - 1))), (var_10))), (((/* implicit */int) ((var_11) > (((/* implicit */long long int) var_8)))))))) || (((/* implicit */_Bool) (((+(-4611686018427387904LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_0] [i_0] [i_0 + 3]))) - (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)9] [i_0 - 2])) ? (arr_5 [i_0 - 1] [i_1] [i_5] [i_6]) : (arr_5 [i_0] [i_0] [i_0] [i_5])))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) min((arr_19 [i_2] [i_2] [(unsigned char)19] [i_2 - 2] [i_6]), (arr_19 [i_1] [i_1] [(unsigned char)18] [i_2 - 2] [18U])))) : ((+(((((/* implicit */_Bool) (short)32767)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (var_2)))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_2 [i_2] [i_2] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) (-((+(var_8))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_6)) <= (((long long int) (-(var_3))))));
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 10; i_7 += 3) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned int) var_9)))));
                                var_22 = ((arr_17 [i_7]) - ((~(((/* implicit */int) (short)32750)))));
                            }
                        } 
                    } 
                } 
                arr_34 [i_8] [i_7] [i_7] &= ((/* implicit */signed char) var_7);
                /* LoopSeq 2 */
                for (int i_12 = 3; i_12 < 10; i_12 += 4) 
                {
                    arr_38 [i_12] [i_8] [i_7] = ((/* implicit */long long int) var_1);
                    var_23 = ((/* implicit */unsigned int) ((var_8) >= ((((!(((/* implicit */_Bool) arr_21 [i_7])))) ? (arr_35 [i_12] [i_8] [3LL] [i_7 + 1]) : (((/* implicit */unsigned int) arr_19 [i_7 - 2] [i_7 + 1] [i_8] [i_8 - 2] [i_8]))))));
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((arr_10 [i_7] [2U] [i_7 - 2] [i_7 - 2] [4U] [i_8]) >> (((arr_17 [i_12]) - (744825203)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 3; i_13 < 7; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 7; i_14 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_14] [i_13 - 3] [i_12])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_9))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))))))))));
                                var_26 = ((/* implicit */int) min((var_26), (min((856422756), (0)))));
                            }
                        } 
                    } 
                }
                for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_27 = ((/* implicit */short) ((((arr_23 [i_15] [i_8 - 2]) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_2) > (arr_14 [i_15] [i_8 - 1] [i_15] [i_15] [i_8 - 1] [i_7 - 1]))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            {
                                arr_53 [i_7] = ((/* implicit */int) ((((arr_42 [i_8] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_17] [i_7 - 1] [i_7] [i_17]))))) - (max((((/* implicit */unsigned long long int) arr_31 [i_17] [i_7 - 1] [i_7] [i_17])), (var_0)))));
                                var_28 += ((/* implicit */int) ((var_10) < (((/* implicit */int) ((short) min((((/* implicit */signed char) var_4)), (arr_30 [(unsigned char)3])))))));
                                arr_54 [i_7] [i_8 - 2] [i_8 - 2] [i_7] [i_8] |= arr_0 [i_17];
                                var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (min((max((((/* implicit */unsigned long long int) arr_35 [(short)4] [i_8 + 1] [i_15] [i_15])), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) arr_12 [i_7] [i_8] [i_15] [i_16] [i_17])) : (3542522393U))))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */short) ((signed char) arr_5 [i_7] [i_8] [i_7] [i_7]));
            }
        } 
    } 
}
