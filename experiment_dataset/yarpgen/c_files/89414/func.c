/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89414
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
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((((((/* implicit */int) (short)16826)) / (((/* implicit */int) (short)-16827)))) == (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [14U])) : (((/* implicit */int) (unsigned short)685)))))));
                var_15 = var_4;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (short)-16826)) : (((/* implicit */int) (short)-16826)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((unsigned short) var_6)))));
}
