/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89476
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
    var_13 = ((/* implicit */long long int) var_12);
    var_14 -= ((/* implicit */signed char) ((var_9) | (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_11)))) & (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(arr_0 [(_Bool)1])))) > (((/* implicit */int) ((unsigned char) max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)3] [(_Bool)1])) || (((/* implicit */_Bool) arr_5 [i_0]))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((3352787985U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) / (((((/* implicit */int) var_1)) + (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) (+(var_9))))));
}
