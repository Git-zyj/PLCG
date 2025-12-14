/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57911
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((((((/* implicit */_Bool) 33423360U)) ? (33423384U) : (((/* implicit */unsigned int) 0)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                var_15 = ((/* implicit */int) 2909943572507510729ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_12 [i_3] [i_2] [i_2 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_8 [i_2])))) ? (min((((/* implicit */unsigned int) var_8)), (4261543935U))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2])))));
                arr_13 [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -228010136)) ? (((/* implicit */unsigned int) max((((((var_8) + (2147483647))) >> (((((/* implicit */int) var_4)) + (3488))))), (((((var_1) + (2147483647))) >> (((/* implicit */int) arr_7 [i_2]))))))) : (((((/* implicit */_Bool) (signed char)20)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-7861))) / (var_9))) : ((-(33423384U)))))));
            }
        } 
    } 
}
