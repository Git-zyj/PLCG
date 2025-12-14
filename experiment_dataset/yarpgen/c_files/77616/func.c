/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77616
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_11)), (var_7)))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)157)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */short) (-(-1414892630)));
                    arr_7 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) max((max((3221225472LL), (((/* implicit */long long int) var_12)))), (((((/* implicit */_Bool) -4736962925542446974LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            {
                arr_14 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_4 - 3])) || (((/* implicit */_Bool) arr_9 [i_4 + 1])))) ? (max((((/* implicit */long long int) arr_9 [i_4 - 2])), (70368710623232LL))) : (min((((/* implicit */long long int) var_5)), (4948000748697276391LL)))));
                var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_13)))) || (((/* implicit */_Bool) var_12))))));
            }
        } 
    } 
}
