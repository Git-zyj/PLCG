/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82382
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
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_5))))))), (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_13 += ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) var_5);
                    var_15 = ((/* implicit */short) arr_2 [i_1]);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))));
        arr_9 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
        var_16 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 + 1]))))))));
                arr_15 [i_4 + 4] [i_4 + 4] [i_3] = ((/* implicit */signed char) (unsigned short)65535);
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3] [i_4 + 1] [i_4 + 4])) ? (max((arr_10 [i_4] [i_4]), (-1669876423))) : (((/* implicit */int) (short)6039))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_12 [i_3 + 2] [i_3 + 2] [i_3 - 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) var_10);
                                arr_28 [i_8] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 1669876423)), (18446744073709551596ULL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((-1669876424) - (((/* implicit */int) (unsigned short)1023))));
                }
                var_22 = arr_24 [i_5] [i_6] [i_6] [i_6] [i_5] [i_5];
            }
        } 
    } 
}
