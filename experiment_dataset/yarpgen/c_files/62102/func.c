/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62102
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
    var_18 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = var_5;
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (unsigned char)228);
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)26066)) - (((/* implicit */int) (unsigned char)254))));
                }
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))))))) : (((unsigned int) arr_5 [i_0] [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    var_19 = 7243474626636038160LL;
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-4611149184597804768LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (min((((/* implicit */unsigned long long int) -7243474626636038160LL)), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~((~(var_10)))))));
}
