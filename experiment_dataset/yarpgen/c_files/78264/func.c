/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78264
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
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (((2554880745544902730LL) >> (((2554880745544902730LL) - (2554880745544902693LL)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) var_3);
        var_17 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_18 = ((((unsigned long long int) arr_2 [i_1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 ^= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)2]))), (((((/* implicit */int) arr_4 [i_1] [i_1] [i_2])) + (var_9)))));
            var_20 = ((/* implicit */unsigned char) (-(901439593U)));
            var_21 = ((/* implicit */int) min((((((var_0) >> (((((/* implicit */int) (unsigned char)217)) - (213))))) - (min((3393527703U), (((/* implicit */unsigned int) (signed char)127)))))), (((/* implicit */unsigned int) ((arr_3 [i_1] [i_2]) < (arr_3 [i_1] [i_1]))))));
            arr_7 [(unsigned short)22] [i_2] [i_2] |= ((/* implicit */unsigned char) min((var_8), (max((arr_2 [i_2]), (arr_2 [i_2])))));
        }
        for (short i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            var_22 -= ((/* implicit */short) var_3);
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_13 [i_3 - 1]))));
                        arr_14 [i_4] = ((/* implicit */short) ((((13769078719482830376ULL) ^ (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_4 [i_3 - 2] [i_3] [i_5])))))));
                        var_24 += ((/* implicit */unsigned int) (+(((var_1) + (((/* implicit */unsigned long long int) var_14))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) ((((unsigned int) arr_10 [i_3 + 3] [i_3] [i_3 + 3])) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3 + 3] [i_3] [i_3 + 1])) & (((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 + 3])))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((((unsigned int) var_6)) < (((32U) ^ (4294967264U)))));
            var_27 = arr_8 [i_1] [(short)6];
            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_6] [i_6]))));
            var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (2842740293052728070LL)));
        }
        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) (-(511)));
            arr_20 [i_1] [i_7 - 2] = ((/* implicit */unsigned int) (~(((1714349331) - (((/* implicit */int) var_7))))));
            var_31 = ((/* implicit */_Bool) ((((arr_16 [i_7 + 2] [i_7] [i_7]) << (((arr_16 [i_7 + 1] [i_7] [i_7]) - (8567854240365109701ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) -8842209222382225161LL)))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 2) 
            {
                {
                    var_32 = (+(max((((/* implicit */unsigned long long int) (short)-24161)), ((-(4677665354226721240ULL))))));
                    var_33 = ((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_6 [i_9]))))))));
                    var_34 = ((min((((/* implicit */unsigned long long int) var_8)), (arr_12 [20U] [i_9] [i_9] [6U] [i_10] [i_10]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_8 + 2] [i_9])))))));
                    var_35 = ((/* implicit */unsigned int) ((min((13769078719482830375ULL), (((/* implicit */unsigned long long int) ((unsigned int) 2554880745544902730LL))))) & (((/* implicit */unsigned long long int) (~(4294967295U))))));
                }
            } 
        } 
    } 
    var_36 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & ((-(4103709846U)))));
}
