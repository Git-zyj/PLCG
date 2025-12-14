/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65032
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_11))))))), (var_3)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_4 [4U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((-78130580), (78130580))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-48)) || (((/* implicit */_Bool) 78130580)))))))) ? (-78130581) : (var_12)));
        arr_5 [i_0] = ((/* implicit */int) ((arr_3 [i_0 - 1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */int) var_9)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 78130580)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 78130580)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (51061529U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13959)) ? (((/* implicit */int) (short)-13959)) : (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)0)), (-7591258124168514694LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) 24U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (1906384396U))))))));
    }
    for (long long int i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1 + 1] = ((/* implicit */unsigned int) var_7);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */long long int) var_12)) + (-7591258124168514687LL)))))) - (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_3 [i_1 + 1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)26793), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4243905744U)))))))) && (((/* implicit */_Bool) -7591258124168514694LL))));
        var_23 ^= ((/* implicit */signed char) ((_Bool) 1906384385U));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (((((/* implicit */_Bool) var_2)) ? (7591258124168514686LL) : (arr_7 [i_2])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
        var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((78130565) - (var_0)))))), (var_11)));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                arr_21 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-78130579), ((+(var_0)))))) ? (min((arr_20 [i_4]), (var_14))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-32577)))))))));
                arr_22 [i_4] [i_5] [(short)7] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 78130565))))) + (78130580)))));
            }
        } 
    } 
}
