/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95853
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
    var_12 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38366)))))))));
    var_13 = ((var_9) * (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */_Bool) arr_0 [(_Bool)1]);
        var_15 = ((/* implicit */unsigned int) max((((unsigned long long int) (signed char)94)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)38366), (((/* implicit */unsigned short) var_7)))))) & (arr_0 [i_0 + 1])))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1 - 2])) / (((/* implicit */int) arr_4 [i_1 + 3])))) == (((/* implicit */int) arr_4 [i_1 + 1]))));
        arr_5 [i_1 + 3] = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_3 [i_1 - 1])));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38366)) % ((((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1])))) : ((-(((/* implicit */int) arr_4 [i_1 + 4]))))))));
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] [i_2 + 2] = ((/* implicit */int) min(((-(((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))))), (((/* implicit */unsigned long long int) var_7))));
        var_18 = (-(arr_6 [(unsigned short)15] [i_2]));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_11)))) ? (min((((12153629556462875850ULL) + (6293114517246675770ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_2] [(signed char)8]))))) : ((~(arr_6 [i_2 + 3] [i_2 + 3]))))))));
    }
}
