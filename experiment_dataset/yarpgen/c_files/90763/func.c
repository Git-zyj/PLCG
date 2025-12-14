/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90763
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
    var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (var_3)))))))));
    var_21 |= ((/* implicit */unsigned short) var_1);
    var_22 = max((((((/* implicit */_Bool) 1044499516U)) ? (1044499516U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116))))))), (((/* implicit */unsigned int) (_Bool)1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)79))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */int) (unsigned short)65522))))) : ((~(var_18))))))));
        var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */long long int) ((var_10) / (((/* implicit */int) arr_1 [i_0]))))) : (((long long int) (-2147483647 - 1))))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3250467779U)))) : (((((/* implicit */_Bool) 4239678114594369341ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)17])))))));
        var_26 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_19)), (202208003U)))) / (((((/* implicit */_Bool) arr_0 [(unsigned short)16] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) : (((((/* implicit */_Bool) 1624779983)) ? (18005777272560569458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_27 = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) (+(arr_3 [i_0] [(_Bool)1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) (signed char)113))))) : (arr_3 [i_0] [i_0 - 1])))));
            arr_4 [i_0] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)126)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [(signed char)17] [i_0 - 1])))))) : ((((!(((/* implicit */_Bool) arr_2 [i_0] [1U] [(unsigned short)5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [1LL])) ? (((/* implicit */int) arr_2 [0] [i_1] [11])) : (var_3)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) 13540058060517030916ULL)))));
            var_28 *= ((/* implicit */long long int) (~((+(((/* implicit */int) var_17))))));
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        }
    }
}
