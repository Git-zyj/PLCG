/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97903
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_2));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((((/* implicit */short) var_8)), (arr_2 [i_0 + 1] [24] [(short)16]))))) ? (((((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))) / (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1] [23U] [i_0 + 1]))))))) : (((/* implicit */long long int) 1925472326U))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? ((+((~(arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))));
                    var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) max((arr_6 [i_0 + 1] [i_1] [i_2] [i_2]), (((/* implicit */unsigned char) arr_0 [i_0 + 1] [(signed char)9]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_10))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_2 [12] [12] [i_3]);
                                arr_18 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_14 [i_3] [i_1] [i_3] [i_4] [i_3]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 1] [i_0 + 1] [(signed char)15] [i_0 + 1])) : (((/* implicit */int) arr_12 [i_0] [i_3] [i_3] [i_5])))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (short)32767))) ^ (((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_0]))));
                                arr_19 [i_0] [i_4] [i_3] [i_1] [i_0] = arr_8 [i_0 - 1] [i_4] [i_5];
                                arr_20 [i_0 - 1] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_3 [i_1] [i_3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) (short)-13010)) ? (var_4) : (((/* implicit */long long int) arr_3 [i_0] [(unsigned char)24])))) : (var_2)));
                                var_16 = ((/* implicit */short) (!(arr_4 [(short)15])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_3] [i_0] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1]))) ^ (arr_31 [i_9] [i_9] [i_8] [i_3] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) != (((/* implicit */int) arr_15 [i_0 - 1] [(short)0] [(short)0] [i_8] [i_1]))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16197))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_12 [i_12] [i_12] [i_0 + 1] [(short)16])), (arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))), (var_10))))));
                                var_20 &= ((/* implicit */long long int) arr_28 [i_0 + 1] [i_0 + 1] [i_11] [i_0] [18]);
                                var_21 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((min((((/* implicit */int) var_9)), (arr_29 [i_0 + 1] [i_1]))) <= (((/* implicit */int) arr_1 [4])))) ? (((/* implicit */int) max((((unsigned char) arr_27 [i_0] [i_0] [i_0 + 1] [i_0])), (var_3)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0 - 1])), (arr_25 [i_10] [i_10] [i_10] [i_1] [i_0] [i_0]))))) > (((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
                }
            }
        } 
    } 
}
