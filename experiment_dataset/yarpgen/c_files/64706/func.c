/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64706
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
    var_11 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(18446744073709551602ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 481565863)), (1283432478U)))) : (6619677193931049403ULL))), (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (~(((2147483647) & (((/* implicit */int) (signed char)84))))));
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(2142697515U))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) -1742160659)) ? (((481565863) - (1741669241))) : (((/* implicit */int) var_0)))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((2011521996) < (((/* implicit */int) var_0)))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (max((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_2)))) : (((unsigned long long int) 1741669241)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((267310347U) != ((-(1422161979U)))))))));
        arr_13 [i_2] = ((/* implicit */long long int) max((11570175246735271081ULL), (((/* implicit */unsigned long long int) max(((unsigned short)61982), (((/* implicit */unsigned short) (short)6667)))))));
    }
    var_14 = ((/* implicit */_Bool) (+(((((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
