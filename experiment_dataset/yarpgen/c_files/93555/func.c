/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93555
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9180059218993042836ULL)) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [14] [i_0]))) : ((((!(((/* implicit */_Bool) var_2)))) ? (7154386800473280933LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && ((_Bool)0)))))))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_0 - 1]))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 764346420))));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? ((+(max((((/* implicit */unsigned int) (signed char)32)), (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [(_Bool)1]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [15ULL] [i_1])) ? (-2036467937) : (((/* implicit */int) (_Bool)1)))))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 1])) % (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1])))) : (((((/* implicit */_Bool) 11675830955653919831ULL)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 2]))))));
    }
    var_14 = ((long long int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)77)) : (-1476478696)));
    var_15 = ((/* implicit */short) ((signed char) var_10));
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-30295)) ? (((/* implicit */int) (short)20012)) : (2036467921)))), (arr_8 [i_2] [i_2 + 1])));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29655)) % (1554702635)));
                    var_17 = (-(((((-1416858241) + (2147483647))) >> (((((/* implicit */int) var_0)) - (8580))))));
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))))) ? (((/* implicit */int) arr_4 [i_2])) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) arr_3 [i_2] [i_2])))))), ((-(((/* implicit */int) arr_1 [i_2 - 2] [i_3 + 1]))))));
                    var_19 += ((/* implicit */signed char) max((((long long int) 20)), (((/* implicit */long long int) arr_1 [i_2 + 1] [i_3 + 1]))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) max((var_2), (-1083505557)));
}
