/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62244
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */long long int) ((((/* implicit */_Bool) 1315940279)) ? (1315940279) : (((/* implicit */int) (signed char)-64))))) | ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0 - 1] [i_0]) : (((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (30687)))))))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((-1315940280), (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_5)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    var_12 ^= ((/* implicit */unsigned char) var_0);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                    var_13 += ((/* implicit */short) (+(var_7)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_6);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(-1315940280))))));
    var_16 = ((/* implicit */unsigned short) ((max((max((((/* implicit */int) var_1)), (-1315940280))), (((((/* implicit */_Bool) -512)) ? (((/* implicit */int) (short)10182)) : (((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))))))));
}
