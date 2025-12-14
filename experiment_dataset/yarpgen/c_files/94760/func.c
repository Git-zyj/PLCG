/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94760
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)106));
                var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned char) -1LL)), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */unsigned long long int) min((155371569), (((/* implicit */int) (unsigned char)46))))) : (((((17918907830354325331ULL) < (17918907830354325331ULL))) ? (min((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((-1) * (-155371574))))))));
                var_13 = ((/* implicit */unsigned long long int) max(((unsigned char)210), (var_6)));
                var_14 = max((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) 16334012257978520009ULL)) ? (arr_0 [i_0]) : (arr_0 [i_1]))) : (max((16334012257978520009ULL), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) var_5)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) arr_6 [i_2]);
        var_16 = ((/* implicit */int) (unsigned char)149);
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_5 [i_3]);
                    var_18 += ((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_3] [i_4 + 1]);
                }
            } 
        } 
        var_19 += ((/* implicit */unsigned int) (+(min(((-(arr_11 [i_3] [4LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 135963405)) ? (2337517137U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) var_0)), (max((731868348107672666ULL), (arr_11 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)0)))) : (arr_9 [i_3])));
        arr_17 [i_3] = ((/* implicit */unsigned char) arr_13 [i_3] [5LL] [i_3] [i_3]);
    }
}
