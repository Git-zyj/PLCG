/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79679
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_10))))))))));
    var_14 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 477111955796172602ULL)) ? (893576749) : (((/* implicit */int) (unsigned short)10392))))) % ((+(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) >= (var_9))))) : (min((((/* implicit */unsigned int) ((unsigned short) var_10))), ((+(var_10))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1747911165U)))) ? (-2788105890878072132LL) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (~((-(((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10643552720976169834ULL)) ? (((/* implicit */int) (short)13955)) : (((/* implicit */int) (short)16264))))) ? (2413637474U) : (((/* implicit */unsigned int) arr_3 [i_0])))) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 4] [i_0] [i_0 - 1])))))));
                    arr_7 [i_0] [i_0] [i_0] = ((unsigned long long int) var_9);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned int) var_8))) ? (arr_1 [i_1 - 2] [i_0]) : ((~(arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((short) 264272988)))) <= (((/* implicit */int) var_7))));
}
