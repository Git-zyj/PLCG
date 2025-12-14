/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73979
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
    var_10 = ((/* implicit */unsigned char) var_3);
    var_11 -= ((/* implicit */unsigned int) (+(((long long int) min((-751500152), (((/* implicit */int) (unsigned char)191)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) -3193581221618974710LL);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_1] [15] [i_3 - 2] [i_4] = ((/* implicit */_Bool) arr_1 [i_2]);
                                arr_16 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 751500151)) + (max((35504618263975323LL), (3193581221618974710LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
