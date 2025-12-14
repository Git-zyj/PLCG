/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85457
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20476)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (short)-20471)))));
                var_15 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) max((2147483647), (arr_2 [i_0] [(unsigned char)9] [i_0])))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_2 [7ULL] [i_0] [i_0])) ? (((/* implicit */int) (short)20505)) : (-756607693)))))) > (((((/* implicit */_Bool) var_8)) ? (var_6) : (var_0)))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((var_0), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)4] [i_1] [i_1 - 2])))))) ? (((((arr_2 [i_0] [i_0] [i_0]) - (((/* implicit */int) var_9)))) - (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)20476))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), ((+(var_6)))))));
                arr_12 [i_2] [11] = ((/* implicit */unsigned long long int) (short)-20452);
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-65))))) ? ((~(((/* implicit */int) arr_7 [i_2] [i_2])))) : ((~(-1653419571)))));
                arr_13 [i_2] = ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */_Bool) (short)-11637)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_2] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [22U] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7456))) : (15560975005887720498ULL)))) ? (((/* implicit */int) var_8)) : ((-(619359713))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20450))))));
            }
        } 
    } 
}
