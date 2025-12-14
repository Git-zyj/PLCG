/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63112
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)401))) / (arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_4 [i_1] [i_1])))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4087975282053449911LL)))))) ? (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-4087975282053449890LL))) : (((/* implicit */long long int) ((arr_7 [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)54)))) : ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0])))))))));
                var_19 = ((/* implicit */_Bool) arr_6 [4] [i_1] [(_Bool)1] [(_Bool)1]);
            }
        } 
    } 
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_16))))))))));
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
    var_22 |= ((/* implicit */unsigned short) var_3);
}
