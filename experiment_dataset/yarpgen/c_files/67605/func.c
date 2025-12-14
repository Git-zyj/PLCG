/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67605
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0])))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_8 [i_0])))) ^ ((~(arr_0 [i_1] [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 194853628))))) : (((/* implicit */int) (!(arr_4 [i_1]))))));
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */int) min(((_Bool)0), (arr_4 [i_0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) (signed char)55)) ? (4677285935540608241ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_2]))))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((unsigned short) var_8));
    var_15 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((-698126143) + (698126146)))))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_1))))) - ((~(var_4)))))));
}
