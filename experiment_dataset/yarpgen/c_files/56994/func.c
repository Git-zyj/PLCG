/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56994
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(arr_0 [i_0 - 1]))))));
        var_16 |= ((/* implicit */_Bool) arr_1 [5]);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (arr_7 [i_1] [i_2] [i_2]))))))))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_5))));
            var_19 -= ((/* implicit */int) var_8);
        }
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            var_20 &= ((/* implicit */int) (~(((arr_9 [i_3 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((-6169868836657636496LL) != (-6169868836657636493LL))))) : (3973023568215596300LL)))));
            var_21 += ((/* implicit */unsigned short) (-(-4611686018427387904LL)));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_22 -= ((((/* implicit */_Bool) 6169868836657636493LL)) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_1])) : (((/* implicit */int) (unsigned short)512)));
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-3376))) | (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (3973023568215596300LL)))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (signed char)(-127 - 1)))));
        }
        var_25 ^= ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [(signed char)20]);
        arr_14 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1])) <= (((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [(unsigned short)20] [i_1] [i_1])) < (arr_5 [i_1]))))))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_5))));
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((/* implicit */int) var_3)))))));
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
}
