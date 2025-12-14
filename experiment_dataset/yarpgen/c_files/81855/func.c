/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81855
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
    var_18 = var_9;
    var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned long long int) var_14))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_14);
        arr_3 [i_0] = ((/* implicit */unsigned char) -1508583065914437216LL);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((max((arr_1 [16U]), (arr_1 [6ULL]))), (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) 16383)) : (var_9))), (((/* implicit */unsigned int) arr_5 [i_1]))))));
        var_22 = ((/* implicit */int) (short)24498);
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_23 = (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1])) <= (((/* implicit */int) arr_6 [i_2 - 3]))))));
                        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_1 [i_2]) < (arr_1 [i_2]))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) var_3);
    var_26 = ((/* implicit */unsigned short) var_14);
}
