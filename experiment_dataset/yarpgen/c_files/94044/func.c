/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94044
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)24846))))), (min((arr_3 [i_1 + 1] [7ULL]), (3631412100U)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3631412100U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (0ULL)))))) || (((/* implicit */_Bool) (unsigned short)59955))));
                        arr_9 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (min((arr_2 [i_1 + 1] [i_1 + 1] [i_3 + 3]), (min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]))))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 3])) ? (arr_3 [i_3 - 1] [i_3 - 1]) : (arr_3 [i_3 + 1] [i_3 - 1])))), (((unsigned long long int) arr_1 [i_0]))));
                    }
                    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(unsigned char)9] [i_2]))) & (var_9)))) ? (arr_5 [i_0] [i_1 + 1]) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (var_4))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17494871731341676885ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-4912484094764383185LL))))))))));
                }
            } 
        } 
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5431438542154984122LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [3ULL]))) : (4294967280U)))) : (13407074662629901384ULL)))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_2 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max(((+(arr_5 [i_0] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_14 &= arr_11 [i_4];
        var_15 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_11 [i_4]))))));
    }
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_3))))) <= (((((((/* implicit */_Bool) -1689017461)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11))) : (2666863788003663362ULL))) * (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 1448096983)) : (13407074662629901399ULL))))));
}
