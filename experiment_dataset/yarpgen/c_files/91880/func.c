/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91880
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
    var_18 += var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2 + 1] [i_1] [i_1 - 4] [i_0 + 3]))) ? (((((/* implicit */int) arr_4 [i_2 - 2] [i_1 - 2] [i_1 - 1] [i_0 - 2])) % (((/* implicit */int) arr_4 [i_2 - 1] [5U] [i_1 - 2] [i_0 + 3])))) : (((/* implicit */int) min((arr_4 [i_2 - 1] [i_1] [i_1 + 1] [i_0 + 2]), (arr_4 [i_2 - 2] [i_1] [i_1 - 4] [i_0 - 3]))))));
                    var_20 = ((/* implicit */unsigned short) min((((arr_5 [i_1 - 3] [i_1 - 4] [i_0] [i_0 + 2]) ? (((/* implicit */int) arr_5 [i_1 - 4] [i_1] [i_0] [i_0 + 3])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1] [i_0] [i_0 + 3])))), (((/* implicit */int) (signed char)-40))));
                    arr_6 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */long long int) var_9);
}
