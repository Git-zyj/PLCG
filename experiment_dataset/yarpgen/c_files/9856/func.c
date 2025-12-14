/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9856
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) % (((long long int) var_8))));
        var_14 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_2 [i_0 + 1]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) arr_5 [i_1]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */short) (~(arr_9 [i_4 - 2])));
                        var_18 = ((/* implicit */signed char) ((arr_11 [i_1] [i_3] [i_3 + 1]) / (arr_11 [i_1] [i_3] [i_3 + 1])));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned char)3)))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_10 [i_3 + 1] [i_4 - 2] [i_3 + 1]))));
                            var_21 += ((/* implicit */int) var_4);
                        }
                    }
                    var_22 = ((/* implicit */int) (signed char)127);
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_9 [i_1])) == (-1061014839703002028LL)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((signed char) (-9223372036854775807LL - 1LL)));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) arr_23 [i_6] [i_7] [i_8] [i_8])) : (((/* implicit */int) arr_8 [i_6]))))) > (-6418804900575381854LL)))))))));
                    arr_25 [i_6] [i_6] [i_6] [i_6] = ((unsigned char) max((var_3), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_7] [i_8] [i_6]))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 24; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            {
                                arr_30 [i_6] [i_6] [i_8] [i_9] [i_10 + 1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((2450780277U) | (max((arr_9 [i_8]), (((/* implicit */unsigned int) arr_14 [i_6] [i_10] [i_10] [i_9] [i_9]))))))), (((unsigned long long int) max((arr_17 [i_7]), (((/* implicit */unsigned long long int) var_1)))))));
                                var_25 = ((signed char) (~(arr_27 [i_10] [i_10] [i_10] [i_10 + 3] [i_10 - 1] [i_10])));
                                var_26 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_6))));
    }
    var_28 = ((/* implicit */short) ((_Bool) (short)(-32767 - 1)));
    var_29 = ((/* implicit */long long int) ((_Bool) ((long long int) min((((/* implicit */unsigned int) var_8)), (var_11)))));
}
