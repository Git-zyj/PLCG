/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74277
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(var_10)))) : (max((((((/* implicit */_Bool) -6923976144608266106LL)) ? (((/* implicit */int) (short)-9429)) : (((/* implicit */int) (short)0)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)9429)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                var_12 = (!((!(((/* implicit */_Bool) var_9)))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 164071140U)), (8ULL))) * (13ULL)))) ? (((min((((/* implicit */unsigned long long int) var_8)), (var_9))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 24; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((-(arr_7 [i_2 - 1]))) : (2147483636))))));
                    var_15 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)9445))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)9450)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9419))))))) ? (((((unsigned int) var_10)) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */short) arr_11 [i_3]))))))));
                }
            } 
        } 
    } 
}
