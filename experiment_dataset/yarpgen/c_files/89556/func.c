/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89556
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1 + 2])) >= (arr_8 [i_1 - 2] [i_1])))) == (((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((arr_4 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) ? ((-(var_4))) : (3992848010U)));
}
