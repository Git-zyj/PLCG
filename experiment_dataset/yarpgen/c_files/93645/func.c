/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93645
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
    var_10 = ((/* implicit */_Bool) (~((~(min((((/* implicit */long long int) 296785U)), (9079256848778919936LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(21U)))) ? (((((/* implicit */_Bool) 1062234854U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (arr_6 [i_0] [i_1] [i_2]))) : (min(((+(((/* implicit */int) (unsigned short)46380)))), (((/* implicit */int) var_9)))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (~(3232732422U)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)49010)), (296785U)))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) 3232732442U)) : (var_1))) : (((/* implicit */unsigned long long int) (-(3232732440U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19023)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)0)))))) : ((+(9223372036854775807LL))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((((/* implicit */_Bool) 9223372036854775786LL)) ? (9223372036854775796LL) : (-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        arr_12 [17ULL] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)15])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))));
        var_14 ^= ((/* implicit */unsigned long long int) arr_11 [i_4]);
        arr_15 [i_4] = ((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_4])) : (((/* implicit */int) var_2)))) % (((/* implicit */int) arr_9 [i_4] [i_4])));
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_4]))))));
    }
}
