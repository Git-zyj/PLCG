/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92243
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) & (var_16))) - (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_2] [i_1 + 1] [i_0])), (-942007083))))))));
                            arr_11 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)126)))))), (max((((/* implicit */long long int) 1011229591)), (9007199254740991LL)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((2025879474112404613LL), (((/* implicit */long long int) var_8))))) ? (((long long int) 9007199254740986LL)) : (arr_10 [i_0] [i_0] [(unsigned char)6]))), (((/* implicit */long long int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 2] [5LL])))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_10)), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 0U)))))) - (((((/* implicit */_Bool) 287873634U)) ? (-455238140385253952LL) : (-9007199254740988LL)))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        for (unsigned int i_5 = 4; i_5 < 16; i_5 += 4) 
        {
            for (long long int i_6 = 4; i_6 < 16; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4162))) : (9007199254740991LL)))))) != (min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)99)), (var_10)))), (min((15198408738747524269ULL), (((/* implicit */unsigned long long int) (unsigned char)0))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)28176)) & (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned char i_9 = 3; i_9 < 12; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) 2942462076U);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -9007199254740991LL)) ? (9007199254740990LL) : (((/* implicit */long long int) 555310636)))) : (((/* implicit */long long int) min((arr_25 [i_7] [i_7]), (33554432U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((4129139828U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_10)))))) : ((+(var_11)))))) : (((var_12) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_15 [3LL] [i_8]))))))));
                    var_26 = ((/* implicit */int) max(((+(var_14))), (max((var_15), (var_13)))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] &= ((((/* implicit */_Bool) ((min((var_12), (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 28ULL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (var_13)))))))) : (((max((-198997025040477661LL), (arr_35 [i_7] [(signed char)0] [4ULL] [(signed char)0] [i_11]))) | (max((-360554789319023286LL), (((/* implicit */long long int) var_10)))))));
                                var_27 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_35 [i_7 - 2] [i_7 - 2] [i_9 - 3] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7 + 1] [i_7 + 1] [i_9 + 2] [i_11]))) : (var_11))), (max((var_19), (((/* implicit */unsigned int) (unsigned char)18))))));
                                var_28 |= ((/* implicit */unsigned int) 67108863ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (signed char)38)) : (354196927))))));
                                var_30 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_1)))) ? (((((/* implicit */_Bool) 198997025040477658LL)) ? (287873643U) : (954851400U))) : (((arr_25 [i_7] [i_7]) * (((/* implicit */unsigned int) -1557017985)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
