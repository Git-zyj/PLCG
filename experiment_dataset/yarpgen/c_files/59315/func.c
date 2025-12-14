/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59315
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_14) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)14792)) - (14792)))))) ? (min((3737821792U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_2 [i_1] [i_2])), ((unsigned short)50743)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) var_2)))) << ((((~(var_4))) - (1689630816U)))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 3737821792U)) : (-7034508350106900315LL)))))));
    var_16 = ((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(var_2))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) ((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1]))) : (var_11))))));
                    var_18 ^= ((/* implicit */signed char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50743))) | (0U))), (((/* implicit */unsigned int) arr_0 [i_4 - 3])))) * (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_3 [i_5] [i_3])))))))));
                }
            } 
        } 
    } 
}
