/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72570
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_0 - 4] [10]))) ? (-346809918915806345LL) : (((arr_4 [i_0 - 2] [i_0 - 4] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                    arr_6 [(signed char)3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_3 [11ULL] [i_0 + 2]))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_14);
    var_20 = ((/* implicit */long long int) var_14);
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 2U)), (max((((((/* implicit */long long int) var_13)) - (445263765666698886LL))), (var_16)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (arr_8 [i_3] [i_3 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_3] [i_3])))))));
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned short) (-(var_15)));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_3 - 1])))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_20 [i_3] [i_3] [i_5] [(short)11] [i_7] = ((/* implicit */unsigned long long int) arr_1 [i_3 - 3]);
                                arr_21 [i_3] [i_3] [i_5] [(unsigned char)3] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((5754761995160957345LL) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3 + 2] [i_4 - 2] [i_7])))));
                                arr_22 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_13 [i_4 - 2])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) arr_17 [i_3] [i_3] [i_4] [i_5] [i_5]);
                }
            } 
        } 
    }
}
