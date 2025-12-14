/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5563
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(var_10))) : (((/* implicit */int) max((var_5), (var_4))))))), (var_8)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) ((((((arr_1 [i_0]) - (arr_3 [i_1] [i_0 - 1] [i_0 + 1]))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) var_0)), (var_6))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) <= (arr_1 [i_0]))))))));
            var_16 = ((/* implicit */_Bool) ((long long int) var_1));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) -1LL);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((arr_3 [i_0 - 3] [i_0 + 3] [i_0 + 2]) - (7926338041051720592LL)))))) > (max((((/* implicit */long long int) var_4)), (arr_3 [i_0 + 3] [i_0 + 2] [i_0 + 2])))));
            var_19 = ((/* implicit */signed char) min((((unsigned char) ((((/* implicit */int) (signed char)100)) > (var_11)))), (((/* implicit */unsigned char) ((signed char) arr_7 [i_0])))));
        }
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            var_20 -= ((((/* implicit */int) max(((unsigned char)255), (arr_0 [i_0 + 3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_0])), (arr_0 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0]))) : (max((((/* implicit */long long int) arr_9 [i_0 + 3] [i_0])), (var_8)))))) ? (arr_10 [10] [10] [10]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)0)), (1234980321))))));
            var_22 |= ((/* implicit */int) min((((arr_8 [i_0 + 1] [i_3]) & (arr_8 [i_0 - 1] [i_0 - 2]))), (((/* implicit */long long int) ((unsigned short) arr_2 [i_0 + 3])))));
        }
        var_23 = ((/* implicit */signed char) arr_3 [i_0] [i_0 - 2] [i_0]);
        var_24 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_2))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) (unsigned char)255))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0 - 3] [i_0 + 2] [i_0 + 3]) : (arr_1 [i_0])))) ? (((var_3) & (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_0))))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) min((min((((/* implicit */int) var_13)), (var_6))), (var_12)))) | (((long long int) min((var_12), (var_11))))));
}
