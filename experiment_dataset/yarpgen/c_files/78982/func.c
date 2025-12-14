/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78982
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [0U] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)(-127 - 1))), (-1LL)))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (4611686018427387902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                                var_12 = (!(((_Bool) var_0)));
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) 1906161713350823077LL);
                                var_13 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((arr_13 [i_5] [(short)11]) ? (((/* implicit */int) arr_13 [i_5] [8])) : (((/* implicit */int) var_6))));
        var_16 += ((/* implicit */unsigned long long int) var_7);
        var_17 = 1906161713350823077LL;
    }
}
