/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84467
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(_Bool)1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)60033)) : (((/* implicit */int) (unsigned short)16841)))) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned short)58689)) - (58673)))))))) ? (max(((+(((/* implicit */int) (unsigned short)5498)))), (((/* implicit */int) min(((unsigned short)46383), (((/* implicit */unsigned short) arr_0 [(signed char)19]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_17 = var_6;
        var_18 += ((/* implicit */short) ((((/* implicit */int) var_12)) % (max((((/* implicit */int) max(((short)18915), (((/* implicit */short) var_16))))), (((arr_2 [5U]) & (((/* implicit */int) (signed char)-102))))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_3)) >> (((var_8) - (3083538160071379609ULL))))) : (((/* implicit */int) max((var_10), (arr_1 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)42458)) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) (short)17567)) - (17562)))))) : (max((((/* implicit */long long int) (short)17563)), ((-9223372036854775807LL - 1LL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] &= arr_5 [i_1];
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) 1123700883587072LL)) ? (((/* implicit */int) arr_1 [5ULL] [i_1])) : (((/* implicit */int) (_Bool)0)))) - (57591)))))) ? (((/* implicit */int) max((max((var_15), (((/* implicit */signed char) var_13)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))) : (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [3ULL] [i_1] [i_1] = (+(max((((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17567))) : (arr_11 [i_3] [i_2] [i_2] [i_1])))), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)1] [i_2 + 1]))))))));
                    arr_14 [i_2 + 1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_16)) & (((/* implicit */int) arr_8 [5LL] [i_2] [i_2])))), (((/* implicit */int) var_10))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)30)));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((var_7) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3790817684U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1920))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))) + (((/* implicit */int) (short)18146)))))));
}
