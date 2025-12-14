/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76999
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
    var_11 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_5);
        arr_3 [i_0] |= ((/* implicit */long long int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) var_5))));
        var_12 &= ((/* implicit */short) ((var_6) >> (((var_6) - (552202869)))));
    }
    for (int i_1 = 2; i_1 < 7; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_1])), (3ULL))) >> (((max((((/* implicit */int) var_5)), (arr_5 [i_1 - 1] [i_2]))) - (316977680)))))) ? (((/* implicit */int) var_1)) : (((((var_9) != (((/* implicit */long long int) var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_2)))) : (var_8)))));
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (arr_5 [i_1] [i_1 + 1])));
            arr_11 [i_1] = ((/* implicit */unsigned long long int) max((((-62177554) + (62177553))), (-62177541)));
            var_14 = ((arr_6 [i_1] [3]) << (((((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_8 [i_2] [1LL] [i_1]))))) ? (arr_0 [i_1 + 3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) - (3379872004255111324ULL))));
        }
        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) -972173359))) ? (88732317) : (((/* implicit */int) (signed char)-96))));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -62177541)) || (((/* implicit */_Bool) arr_14 [i_3])))) ? (var_9) : (((/* implicit */long long int) arr_13 [i_3]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((arr_0 [i_3] [i_3]) + (((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_0 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_13 [i_3])))))))));
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 62177554)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) arr_1 [i_3]))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [i_3] [i_3])), (var_8)))))), (((/* implicit */unsigned long long int) -62177554))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) (signed char)126)) ? (((((/* implicit */_Bool) 1795900832)) ? (1528486462) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) var_1)));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_8) / ((-2147483647 - 1))))) + (var_9)))) ? (max((((/* implicit */int) ((short) var_0))), (62177541))) : (((((/* implicit */_Bool) (signed char)-72)) ? ((+(88732317))) : (((((/* implicit */int) (signed char)-16)) / ((-2147483647 - 1)))))))))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1528486462)) ? (-3996064660844332935LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))) ? (var_9) : ((~(6783251337324752134LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((var_4) - (((/* implicit */int) (signed char)105))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) % (((arr_0 [i_4] [i_4]) + (((/* implicit */unsigned long long int) var_10))))))));
        var_20 = ((/* implicit */int) max((var_20), (((int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))))));
    }
}
