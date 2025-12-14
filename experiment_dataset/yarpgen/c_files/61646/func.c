/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61646
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((unsigned char) ((unsigned short) arr_9 [i_0] [i_1]))));
                    arr_11 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((9395913453547772836ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2377859792485886953LL)))) : (arr_0 [i_0 - 1]))));
                    var_17 &= ((/* implicit */signed char) ((unsigned short) ((arr_4 [i_0 - 1] [i_0 - 1] [(unsigned char)12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_15)), (var_8))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) ((short) 1554718286U))) >> (((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_2))) - (4294967157U))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) (((_Bool)0) ? (-8594067415082859494LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_13 [i_3]))))))) - (56614ULL)))));
                var_19 ^= ((/* implicit */unsigned char) arr_16 [i_3] [i_3]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47086)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (var_15) : (var_15))))), (((/* implicit */int) var_13))));
}
