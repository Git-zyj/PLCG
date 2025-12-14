/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99834
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1 - 1])), ((+(((/* implicit */int) var_9))))))) ? ((-(((((/* implicit */_Bool) (unsigned short)36592)) ? (((/* implicit */int) (short)-32173)) : (((/* implicit */int) (short)-16965)))))) : (((/* implicit */int) ((unsigned short) (short)-32196)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (signed char)-33);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)36592)) ? (((/* implicit */int) (unsigned short)3994)) : (((/* implicit */int) (short)32161))))))) ? (((/* implicit */int) ((min((var_4), (var_6))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)26579)) : (((/* implicit */int) (_Bool)1)))))))) : (((((((/* implicit */int) (signed char)54)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_3)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))));
}
