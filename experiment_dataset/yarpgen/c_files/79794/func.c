/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79794
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
    var_19 = ((/* implicit */short) (((+((+(((/* implicit */int) var_13)))))) ^ (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (523012423502218336LL)));
    var_21 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65262))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_8 [i_1] |= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (3531075289767604875LL));
        var_22 = ((/* implicit */signed char) max((arr_5 [i_1]), (((arr_5 [i_1]) / (arr_5 [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_18 [i_3] [i_2] = ((/* implicit */_Bool) var_16);
                        arr_19 [i_4] [i_3] [i_1] [i_4] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_20 [(signed char)15] [(signed char)15] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((~(9223372036854775790LL)))));
    }
}
