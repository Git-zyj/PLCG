/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87836
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) / (max((var_9), (var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) < (arr_1 [i_0]))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) min((9223372036854775802LL), (((/* implicit */long long int) (_Bool)1)))))))) ? (min((((/* implicit */long long int) arr_3 [i_0 + 2] [i_0])), (-6747169420814160630LL))) : (((/* implicit */long long int) max((arr_3 [i_0 - 2] [i_0 - 1]), (min((1095735217), (((/* implicit */int) (short)26049)))))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551604ULL)));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) -2034184913)))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) : (((/* implicit */int) (((+(arr_3 [8U] [i_2]))) > (arr_6 [(signed char)0] [i_1] [i_2] [i_1]))))));
                    var_19 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned long long int) ((3511624523141498065ULL) == (11245729849173660378ULL)))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])) : (5454497357741039327ULL))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */int) (short)-32765)) == (((/* implicit */int) (short)26049)))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)26078))))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_21 *= ((unsigned char) arr_8 [6]);
        arr_10 [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (short)-91)) : (((/* implicit */int) (signed char)42)))));
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned char) max(((+(2034184912))), (((int) ((unsigned int) 11245729849173660366ULL)))));
        var_23 = ((/* implicit */unsigned short) -6747169420814160620LL);
        arr_13 [i_4] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46044))) > (16841907071444659595ULL))));
    }
}
