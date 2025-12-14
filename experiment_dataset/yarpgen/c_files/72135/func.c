/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72135
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
    var_11 -= (unsigned char)58;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    var_12 *= ((/* implicit */signed char) ((((/* implicit */int) ((2251799813685247ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) + (((/* implicit */int) ((31LL) > (((/* implicit */long long int) 3552194654U)))))));
                    var_13 *= ((/* implicit */signed char) (+((~(((/* implicit */int) var_10))))));
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) 564131257U)) && (((/* implicit */_Bool) var_4)))))));
                    var_14 = ((/* implicit */int) ((signed char) arr_1 [i_0 - 1]));
                    var_15 = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 + 4]));
                }
                var_16 -= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2731)) ? (((/* implicit */int) (unsigned short)14785)) : (((/* implicit */int) var_2))))), (((unsigned long long int) arr_1 [i_1]))))));
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (1589237259U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
    var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), ((unsigned char)15))))));
    var_20 += (signed char)1;
}
