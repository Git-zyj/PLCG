/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59876
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned long long int) (~(var_8)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            {
                var_16 = 1675946189;
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) var_3)) : (var_6)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [4ULL])) ? (((((/* implicit */int) arr_6 [14LL])) + (((/* implicit */int) (short)32029)))) : (((((/* implicit */_Bool) -1675946187)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_13))))))))))));
                var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) (unsigned short)11))))));
                var_19 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(_Bool)0])) && (((/* implicit */_Bool) arr_1 [i_2 - 1])))))));
                var_20 = ((/* implicit */int) var_0);
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1469885057U)));
    var_22 = ((/* implicit */unsigned int) (-(var_8)));
    var_23 = ((/* implicit */_Bool) var_10);
}
