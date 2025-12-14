/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65851
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
    var_12 = ((/* implicit */long long int) (unsigned short)511);
    var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_14 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -165309326077774625LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) 165309326077774602LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-165309326077774627LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_7))))))), (((/* implicit */long long int) ((unsigned int) (short)10607)))));
                    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) arr_6 [i_1] [i_1] [i_1]));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned short) arr_6 [i_4] [i_0] [i_2])), (arr_9 [i_3] [i_4] [i_2] [i_0]))))))) != (7960916672780542308ULL)));
                                var_17 = ((/* implicit */long long int) (signed char)75);
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)59), (arr_6 [i_1] [i_1] [i_1])))))))));
                var_20 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)182)))) | ((~(((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_1 + 1] [i_0])), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65250)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672))) : (165309326077774625LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [i_1 + 2] [i_5])) : (((/* implicit */int) var_3))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_7] [i_6] [i_7] [i_1 + 1])) || (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_5] [i_6] [i_7] [i_1 - 1]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_5] [i_6] [i_7] [i_5])) >= ((~(((/* implicit */int) var_6))))));
                        }
                    }
                    arr_22 [i_1] [(short)0] [i_5] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((998840119), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))));
                    var_26 = ((/* implicit */long long int) arr_0 [i_5]);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (_Bool)1)) : (215328966)));
}
