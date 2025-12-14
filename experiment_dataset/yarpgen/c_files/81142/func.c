/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81142
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) min((max((var_2), (((/* implicit */unsigned char) (signed char)-119)))), (((/* implicit */unsigned char) max(((signed char)68), (arr_5 [i_0] [i_0])))))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), (1814623341U)));
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116))))), ((-(((/* implicit */int) ((unsigned short) arr_0 [15])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 4; i_2 < 13; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_17 = (~(((/* implicit */int) (signed char)-114)));
                    arr_14 [i_2] &= ((/* implicit */unsigned short) var_7);
                    var_18 = ((/* implicit */signed char) ((((int) arr_5 [i_4] [(unsigned char)19])) - ((+(((/* implicit */int) arr_11 [i_3]))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */int) var_9);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (var_7)))))));
}
