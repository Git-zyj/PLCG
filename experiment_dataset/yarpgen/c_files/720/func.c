/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/720
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), ((~(max((((/* implicit */unsigned int) var_10)), (var_6)))))));
            arr_6 [i_1] [i_0 - 1] [i_0] = (!(((/* implicit */_Bool) var_11)));
        }
        var_17 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_3)), (var_1))), (min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) var_13))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) var_8);
                    var_19 += ((/* implicit */_Bool) ((unsigned short) max((var_12), (var_3))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) var_7);
    }
}
