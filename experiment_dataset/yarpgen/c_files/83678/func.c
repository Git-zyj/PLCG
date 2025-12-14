/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83678
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
    var_16 = ((/* implicit */signed char) min((var_1), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1998052097)) ? (((/* implicit */int) (short)23781)) : (-1998052097)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5053689216275191780LL))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_11)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((-1998052116), (1998052097)));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_2 [i_0] [i_0]) : (((((/* implicit */_Bool) 1998052116)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)-80))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 11476777554849768102ULL)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-97))))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) min((((/* implicit */int) max(((unsigned short)47617), (((/* implicit */unsigned short) (signed char)-22))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22351)))))))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6072723679252557738LL)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (signed char)-70))))) ? (((((/* implicit */int) (unsigned char)247)) * (((/* implicit */int) arr_10 [i_1] [i_2 - 1])))) : (((/* implicit */int) ((17021730407096458585ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))))));
            arr_12 [i_1] = ((/* implicit */signed char) max(((unsigned char)231), (((/* implicit */unsigned char) (signed char)122))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-17795)) || (((/* implicit */_Bool) (signed char)-122)))) ? (arr_8 [i_1] [i_3]) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_3 - 1]))) : (var_6)))));
            var_20 = (~(9223372036854775796LL));
            var_21 = ((long long int) max((min((arr_6 [i_3 + 2] [i_1]), ((signed char)96))), ((signed char)-22)));
        }
        for (signed char i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
            var_22 ^= ((/* implicit */long long int) 576460477425516544ULL);
            var_23 = ((/* implicit */unsigned short) arr_13 [(short)3] [i_1]);
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            arr_30 [i_1] [i_4] [i_1] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-16)) + (((/* implicit */int) (signed char)-43))));
                            var_24 = ((/* implicit */short) max((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)70)), (var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (-6986620768862744476LL))))));
                            var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (short)6297)) : (((/* implicit */int) min(((signed char)77), (arr_24 [i_6] [i_7])))))), (((/* implicit */int) (signed char)-122))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */int) (+(min((((/* implicit */long long int) (signed char)-92)), (var_14)))));
        }
        var_27 = ((/* implicit */short) var_11);
    }
    var_28 = ((/* implicit */unsigned short) var_12);
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((long long int) (short)-18638)))) || (((/* implicit */_Bool) var_6))));
    var_30 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(1023936035)))) != (var_9)));
}
