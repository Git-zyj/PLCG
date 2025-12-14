/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63589
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -3907388504861059342LL)) ? (-3907388504861059342LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (_Bool)1))));
                    var_16 *= ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1])) ? (arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]) : (arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]))), (((arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]) / (arr_10 [(unsigned char)13] [i_3 - 1] [i_2] [i_3 - 1])))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_1 [i_2 + 1])))))) / (((((/* implicit */unsigned long long int) 8595315449705201102LL)) ^ (arr_11 [i_0] [22ULL] [i_2])))));
                            }
                        } 
                    } 
                    arr_13 [i_2 + 1] [(signed char)13] [i_2] = ((/* implicit */unsigned int) (~(arr_11 [i_0 - 3] [i_1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_22 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6] [i_5] [i_6])) ? (arr_10 [i_6 - 3] [i_6] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_19 [i_6 + 1] [i_6] [i_5] [(unsigned char)8]))))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        var_19 = ((((/* implicit */_Bool) arr_8 [i_6])) ? (max((((/* implicit */unsigned int) var_0)), (arr_19 [i_5 - 1] [i_6 + 2] [i_5] [i_6 - 3]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62368))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (arr_24 [6] [i_6 - 1] [(signed char)13] [i_7 + 1])))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 1] [i_5] [i_9]))) : (arr_3 [i_7 + 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6 - 2] [i_5] [i_9])))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_22 = var_11;
                        var_23 = ((/* implicit */unsigned char) (signed char)-21);
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -5341019042165272221LL)) && (((/* implicit */_Bool) ((unsigned char) -8595315449705201103LL)))));
                            arr_36 [i_5 + 1] [i_6] [i_7] [i_11] [(unsigned char)3] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_6] [i_6 - 3] [i_6] [i_6 - 2]))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_5] [1] [13ULL] [i_5]))) % (var_9)))) ? (((/* implicit */int) ((signed char) arr_5 [(_Bool)1] [(unsigned short)20] [i_7]))) : ((((_Bool)1) ? (((/* implicit */int) arr_32 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5])) : (((/* implicit */int) var_2)))))))));
                        }
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (signed char)27))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_13))));
}
