/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56743
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && ((_Bool)0))))))))));
                    var_20 &= ((1885898281090464588ULL) >> ((((~(((/* implicit */int) arr_8 [i_0 - 2])))) + (22))));
                    var_21 = ((arr_8 [i_0 - 2]) || (((/* implicit */_Bool) (((!(var_7))) ? (((((/* implicit */_Bool) arr_2 [10LL])) ? (arr_3 [i_0 + 2] [10]) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_4))))))));
                    arr_9 [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_1 - 3] [(unsigned char)1] [(unsigned char)14])) + (((/* implicit */int) arr_2 [i_0 + 1])))) >> (((((((/* implicit */_Bool) (-(var_5)))) ? ((~(arr_6 [(unsigned char)1] [(unsigned short)13] [i_1 - 1]))) : (((/* implicit */long long int) ((arr_4 [i_0 - 3] [(unsigned char)0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) - (6703334229865300343LL)))));
                    var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967295U)))), (max((((/* implicit */long long int) (unsigned char)4)), (-1LL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_24 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (signed char)-4))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [3] [i_3 + 1] [i_3 + 1])), (arr_10 [i_3 + 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_9))))))))));
        var_25 = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)1] [i_3 + 1]);
    }
    var_26 *= ((/* implicit */unsigned int) var_12);
    var_27 = ((/* implicit */unsigned char) var_8);
}
