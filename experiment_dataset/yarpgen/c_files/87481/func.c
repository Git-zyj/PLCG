/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87481
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [i_0 - 1] = min((((/* implicit */unsigned long long int) ((((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1]))) && (((/* implicit */_Bool) max((1694905777U), (arr_1 [i_0] [i_0]))))))), (((((1ULL) >> (((-6390262259241173743LL) + (6390262259241173797LL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((918094555) != (((/* implicit */int) (signed char)-7)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) 4182480096U);
                    var_12 = ((/* implicit */unsigned char) arr_1 [(signed char)2] [i_0]);
                    var_13 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (((int) (unsigned short)45409)))) + (2147483647))) << (((min((max((5860690858681825513ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))))) - (5516ULL)))))) : (((/* implicit */long long int) ((((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (((int) (unsigned short)45409)))) + (2147483647))) << (((((min((max((5860690858681825513ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))))) - (5516ULL))) - (34048ULL))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) + (4294967284U))))) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1])) - (115)))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((signed char) arr_9 [i_3]))), (((unsigned short) arr_10 [i_3])))))));
        var_15 = ((short) ((unsigned long long int) ((long long int) (short)-17416)));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_5 + 1]));
                    var_17 = ((/* implicit */unsigned int) max((max((arr_16 [i_4] [(short)9] [i_5] [(short)9]), (((/* implicit */int) max(((short)2250), ((short)-31518)))))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_16 [i_5] [i_5] [i_5] [i_3])) ^ (arr_10 [i_4]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_4] [i_4]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) max((arr_16 [i_3] [i_3] [i_3] [i_3]), (arr_16 [i_3] [i_3] [i_3] [i_3])))));
    }
    for (int i_6 = 4; i_6 < 18; i_6 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)121))));
        arr_20 [i_6] [i_6 - 2] = ((/* implicit */int) (signed char)-106);
    }
    var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((min((-5290237603452319862LL), (((/* implicit */long long int) 0)))) + (9223372036854775807LL))) << (((min((4294967295U), (((/* implicit */unsigned int) (unsigned char)34)))) - (33U))))));
}
