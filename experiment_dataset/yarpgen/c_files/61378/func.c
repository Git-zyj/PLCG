/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61378
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1])) ? (arr_0 [20LL] [20LL]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))));
            var_12 = ((/* implicit */unsigned int) (~(((14261018135198365061ULL) / (((/* implicit */unsigned long long int) var_8))))));
        }
        for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61020))) : (arr_3 [i_0 - 1]));
            arr_11 [i_0] [i_2 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)118))));
        }
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((arr_6 [i_0 + 1] [(unsigned char)9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_0 + 1] [(unsigned short)22] [(unsigned short)22]) < (1048575))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_3 - 1])) == (arr_6 [i_0 + 1] [i_3 + 3])));
            arr_16 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 2] [i_0 + 1]))) >= (arr_5 [i_0 + 1])));
            arr_17 [i_0] = ((/* implicit */long long int) (~(arr_3 [i_3])));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_3] [i_3 + 3]));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            arr_27 [i_4] [8U] [i_4] = ((/* implicit */unsigned long long int) var_9);
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4148877726423012666LL)) ? (720346440U) : (2923920970U)))) ? (4185725938511186538ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)5443)) : (((/* implicit */int) var_2))))));
        }
        arr_28 [i_4] = ((/* implicit */long long int) ((arr_22 [i_4]) % (((/* implicit */unsigned long long int) arr_0 [i_4] [i_4]))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3377))) <= (830215473U)))) - (((int) (unsigned short)65535))));
                arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_30 [i_6])))))));
            }
        } 
    } 
}
