/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83224
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
    var_15 |= ((/* implicit */int) (short)-8882);
    var_16 = ((/* implicit */unsigned short) (short)-1047);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min(((-(var_5))), (((/* implicit */long long int) ((unsigned int) (short)-8882)))));
                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : ((+(((/* implicit */int) var_10)))))), (((((/* implicit */int) var_13)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_14))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)27932)))) : (arr_7 [i_2])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) arr_7 [i_3])))) != (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (var_14)))));
        arr_13 [i_3] = ((/* implicit */unsigned int) var_8);
    }
    for (int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) var_7);
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)50953);
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(min((63LL), (((/* implicit */long long int) 2265583719U)))))))));
        var_24 = ((/* implicit */unsigned short) min((793665844U), (4294967295U)));
    }
}
