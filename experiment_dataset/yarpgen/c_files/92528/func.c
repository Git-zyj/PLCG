/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92528
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((var_9) << (((var_7) - (3171383748610073700LL))))) >> ((((~(((/* implicit */int) var_1)))) + (128)))))) / (min((((/* implicit */long long int) var_2)), (var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 2] [i_2] [i_0 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) == ((~(0U)))))) : ((((-(((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0])))) % (((((/* implicit */_Bool) -4892078238844683207LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                    var_13 ^= ((/* implicit */unsigned long long int) ((short) var_0));
                    arr_9 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((short) min(((unsigned short)47314), (((/* implicit */unsigned short) (short)-8192)))));
                }
            } 
        } 
    } 
    var_14 = min((var_3), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5)))))) < (var_8)))));
}
