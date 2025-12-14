/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80347
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
    var_13 += ((/* implicit */unsigned int) (signed char)28);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147483647)) ? (5370421341794941130ULL) : (((/* implicit */unsigned long long int) -2147483647)))) * (((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (arr_1 [i_0 + 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) max((min((arr_0 [i_0] [i_0 - 2]), (arr_0 [11ULL] [11ULL]))), (487503277632151510LL))))));
        var_14 = ((/* implicit */unsigned long long int) max((487503277632151510LL), ((+(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)53))))))));
        arr_3 [(_Bool)1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9848))) / (arr_1 [i_0] [i_0 - 1])))));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [(signed char)14] [i_1])), ((~(((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)9848))))))));
        var_16 = ((/* implicit */unsigned long long int) max((max(((signed char)-4), (arr_4 [i_1 - 2]))), (min((arr_4 [i_1 - 2]), (arr_4 [i_1 + 1])))));
        var_17 = ((/* implicit */unsigned short) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_8 [i_1 - 2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
            arr_9 [i_1 - 1] [i_2] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) 1240279669)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)(-32767 - 1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (arr_7 [i_2] [i_2])))) ? ((~(((/* implicit */int) (signed char)-23)))) : (arr_7 [(signed char)14] [(signed char)14])))));
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (-2335297329005778817LL))) + (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) - (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        }
    }
    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) (~(arr_10 [i_3 - 2])));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (var_9)))) ? (max((2713095733U), (((/* implicit */unsigned int) (unsigned short)21180)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_3]) <= (arr_10 [i_3]))))))) + (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3077041456740137922LL)) ? (((/* implicit */int) var_3)) : (arr_10 [i_3 - 2]))))))));
        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_11 [i_3 - 2])))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_12 [i_3 + 1] [i_3])))), (arr_10 [i_3])))) ? (var_1) : (min((5370421341794941124ULL), (((/* implicit */unsigned long long int) (signed char)3))))));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_12))));
    var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)-8924)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)17)), ((unsigned char)70))))))) + (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
}
