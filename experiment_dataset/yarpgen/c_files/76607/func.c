/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76607
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21198)))))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                arr_7 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3 + 1] [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1198010534) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned short)61649)) ? (((/* implicit */int) var_12)) : (-1750365634))) : ((~(((/* implicit */int) var_0))))))));
                    arr_17 [i_2] [i_3] = ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_3)), (-5244319568345993291LL))), (var_9)))) ? (min((max((((/* implicit */long long int) (signed char)-1)), (var_9))), ((~(-7344588868556264186LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (-5423726239906211085LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1172342760)), (-6896615787415622047LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_10)))) ? (max((((/* implicit */long long int) var_1)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
}
