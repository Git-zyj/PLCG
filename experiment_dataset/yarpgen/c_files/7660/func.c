/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7660
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
    var_10 ^= ((/* implicit */long long int) min((1808478972U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-5902443580249684726LL)))) ? (((/* implicit */int) max((var_8), (var_2)))) : (((/* implicit */int) var_0)))))));
    var_11 ^= ((/* implicit */int) (unsigned char)186);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)127)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || ((_Bool)1)))), (((((/* implicit */_Bool) 2896037827U)) ? (arr_1 [i_0]) : (((/* implicit */int) var_6)))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (unsigned short)9691)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27510)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_1]))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 1398929454U))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_1])) ^ (8434955983999023319LL)));
        arr_8 [i_1] [i_1] = ((unsigned char) (-9223372036854775807LL - 1LL));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [7ULL])) ? (((arr_10 [i_2]) ? (((/* implicit */int) arr_9 [i_2])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 50426535))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)92))));
    }
    var_19 = ((/* implicit */_Bool) var_3);
}
