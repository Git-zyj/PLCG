/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8710
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) (unsigned char)52);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])), (arr_4 [i_0] [i_1]))), (((arr_4 [i_0] [i_1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) arr_3 [9] [i_1] [9])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) (short)17988);
        var_14 |= ((/* implicit */unsigned short) (_Bool)0);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14670)) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned char)52))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (unsigned char)55);
            var_16 = arr_8 [i_2];
            arr_15 [i_3] = ((/* implicit */_Bool) -5);
            arr_16 [i_3] [(signed char)4] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (arr_13 [i_2] [4U]) : (arr_14 [13LL] [i_3] [i_3])))) ? (arr_14 [i_2] [i_2] [i_2]) : (((((/* implicit */int) arr_10 [i_3])) % (((/* implicit */int) arr_10 [i_2]))))));
        }
        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))));
    }
    var_18 = ((/* implicit */signed char) var_1);
    var_19 &= ((/* implicit */_Bool) (unsigned char)2);
}
