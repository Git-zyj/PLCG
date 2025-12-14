/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82505
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_3 [i_0] [i_0 + 1])) : (3079444480192633679LL)))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_2))))) == (arr_6 [i_0] [i_0 + 2] [i_0])));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~(((unsigned long long int) arr_2 [i_0 + 3]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_9);
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((((unsigned short) ((((/* implicit */_Bool) 1924711750U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2143289344U)))) && (((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_2]) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_11 [i_2] [i_3]))))) : (2370255554U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)68)) : ((-(((/* implicit */int) (unsigned char)188)))))), ((-(((/* implicit */int) (_Bool)1))))));
}
