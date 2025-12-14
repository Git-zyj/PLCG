/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84316
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_14))))))), (((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_16);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)125);
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned int) max(((unsigned char)124), ((unsigned char)132)));
        var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_1] [i_1])) ^ (((/* implicit */int) arr_0 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_1] [12] [i_2] [i_3])), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (max((((/* implicit */unsigned long long int) min((var_12), (arr_10 [i_1] [i_1] [i_1] [i_1])))), (arr_8 [i_2] [i_2])))));
                    arr_13 [i_1] [i_2] = max(((-(((/* implicit */int) (unsigned char)135)))), (((/* implicit */int) (unsigned char)112)));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            {
                                arr_20 [0U] [i_2] [i_3] [i_2] [i_5] = var_0;
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1]), (arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1]))))));
                                var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_16)) ? (arr_5 [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (arr_5 [i_1])))))));
        var_24 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_15) != (((/* implicit */int) (short)-14331))))) << (((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_0)) : (arr_18 [i_1] [i_1] [i_1] [i_1]))) - (55481)))))), (arr_8 [i_1] [(unsigned char)14])));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 22; i_7 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(arr_0 [i_7 - 2] [i_7 + 2]))))));
            arr_26 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)28))));
            arr_27 [2U] [2ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)132)) / (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [8] [i_6])) : (((/* implicit */int) var_1)))))));
            arr_28 [i_6] [6U] &= ((/* implicit */unsigned long long int) (signed char)44);
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    {
                        arr_34 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned char) arr_23 [i_6] [21]);
                        var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [(short)22] [i_7] [(short)22])) && (((/* implicit */_Bool) arr_23 [20U] [20U]))));
                        var_27 *= ((/* implicit */unsigned short) (!(((((/* implicit */int) var_6)) == (((/* implicit */int) var_9))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_6])) & (((/* implicit */int) arr_32 [i_6]))));
                    }
                } 
            } 
        }
        var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [(unsigned char)8])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_6] [(_Bool)1])))))));
        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_6]))));
    }
    var_31 &= ((/* implicit */signed char) -1513845866);
}
