/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94030
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
    var_20 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = (signed char)-70;
                    arr_9 [i_1] [i_1 + 2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) -591607082)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 2]))) : ((-(4294967284U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71)))));
                    var_21 *= ((/* implicit */_Bool) ((int) 5900552651347979523LL));
                    arr_10 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_1] [i_1])), (((((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) + (2888))) - (15)))))))) : (((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_1] [i_1])), (((((((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) + (2888))) - (15))) - (20204))))))));
                }
            } 
        } 
    } 
}
