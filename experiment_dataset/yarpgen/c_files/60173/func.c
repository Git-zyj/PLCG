/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60173
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-54))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 1] = (+(((/* implicit */int) (short)-17827)));
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) (~((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6250))) : (3ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-89)) + (2147483647))) >> (((min((var_8), (((/* implicit */unsigned long long int) var_5)))) - (23ULL))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12705)) ^ (((/* implicit */int) (signed char)92))));
                arr_16 [i_2] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) 378000611)) ? (((/* implicit */int) (short)30549)) : (((/* implicit */int) var_2)))) ^ (1389822037))), (((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */int) min(((short)-1), (((/* implicit */short) var_5))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (short)-15)) * (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) min(((signed char)-105), (var_5))))))));
}
