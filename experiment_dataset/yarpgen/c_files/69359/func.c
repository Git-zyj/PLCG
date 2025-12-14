/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69359
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [11LL] [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)76)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [(signed char)2]))))) : ((-(var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)237), (((/* implicit */unsigned char) (signed char)28))))) || (((/* implicit */_Bool) (signed char)-123))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_13 [5] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)28);
                    var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_10 [i_2] [i_1 + 2] [2LL])) && (arr_3 [i_0] [i_0]))), (var_4)));
                    var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (short)16993)) / (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))) : (18446744073709551615ULL));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned int) var_1);
        var_15 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [3U])) ^ (arr_11 [(unsigned char)8] [(_Bool)1] [3U])))) : (var_9))), (((/* implicit */unsigned long long int) arr_6 [5ULL] [i_0]))));
    }
    var_16 = ((var_4) ? (var_11) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (var_12)))) : (var_9))));
}
