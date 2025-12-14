/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6818
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) arr_4 [i_0] [i_1] [i_4]))));
                                arr_13 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0])) : (((int) 3630189220274851139ULL))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), (var_17)))), ((+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
                    var_21 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_11)), (var_16))))), (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [12ULL] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [(signed char)12] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                }
            } 
        } 
    } 
    var_22 |= (+(((/* implicit */int) var_19)));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_23 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7 + 2])))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_5] [i_5] [i_8] [i_7 + 1]), (((/* implicit */unsigned short) arr_17 [i_6 - 1] [i_6 - 1] [i_6])))))) / ((-(min((var_11), (((/* implicit */unsigned int) (signed char)22))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_5] [i_8]))))), (min((((/* implicit */unsigned long long int) arr_24 [i_5] [i_6 - 2] [i_8] [i_7] [i_8] [i_9 - 2])), (var_2)))))));
                            arr_29 [i_5] [i_6] [i_6] [i_7] [i_8] [i_9 - 3] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) ((unsigned short) arr_28 [i_5] [i_8] [i_9 + 1] [i_8] [i_9]))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_8))))))));
                            arr_30 [i_8] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_26 [i_8] [i_9 - 3] [i_9 - 3] [i_9 + 1]))) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_8)))) - (57059)))));
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_5] [i_5] = ((/* implicit */_Bool) arr_20 [i_9 - 1] [i_6 - 2] [i_7 + 3] [3ULL]);
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (arr_19 [i_6 + 2]) : (((/* implicit */int) arr_16 [i_6 + 2])))))));
                            var_27 = ((/* implicit */unsigned short) ((short) (~(var_11))));
                            var_28 &= ((/* implicit */int) (signed char)-22);
                        }
                    }
                    var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((unsigned long long int) arr_4 [i_6] [i_6] [(unsigned short)12])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2146147655) >= (((/* implicit */int) arr_17 [i_5] [i_6] [i_7])))))))), (arr_26 [i_6] [i_5] [i_6] [i_7])));
                    var_30 = ((/* implicit */short) (-(((/* implicit */int) ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    arr_34 [i_5] [i_6] [i_5] [i_7] = min((((/* implicit */unsigned int) ((_Bool) arr_21 [i_7] [i_7 + 1] [i_7]))), (min((((unsigned int) var_9)), (((/* implicit */unsigned int) arr_23 [9U] [i_6])))));
                }
            } 
        } 
    } 
    var_31 = var_7;
}
