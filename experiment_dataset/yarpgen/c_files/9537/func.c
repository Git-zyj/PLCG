/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9537
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [(unsigned char)4]);
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_15 = ((/* implicit */signed char) ((_Bool) arr_1 [i_2 - 1]));
                }
            } 
        } 
        var_16 -= ((/* implicit */unsigned int) (+(arr_5 [i_0])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (+(max((var_10), (arr_9 [i_4 - 1] [i_4])))));
                arr_13 [(signed char)18] [i_3] = ((/* implicit */_Bool) var_2);
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_4 - 2])) : (((/* implicit */int) (unsigned short)22065)))));
                                var_19 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), ((-(11932333015116524213ULL)))));
                                var_20 += ((/* implicit */unsigned short) var_2);
                                var_21 += ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (max((var_12), (var_13)))));
}
