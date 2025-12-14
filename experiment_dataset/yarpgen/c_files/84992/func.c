/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84992
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) var_4)), (var_2)))), (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_4)))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_4 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (var_8) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_3]) : (arr_13 [i_3]))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((unsigned short) var_0)))) <= ((~(((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */long long int) var_9)))))));
}
