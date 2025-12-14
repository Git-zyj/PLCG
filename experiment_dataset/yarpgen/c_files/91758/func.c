/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91758
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) ((short) (signed char)-1));
                    var_17 += ((/* implicit */unsigned char) 3597918011982693651ULL);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 13698882391307218454ULL)) ? (((/* implicit */unsigned int) ((var_5) << (((/* implicit */int) var_15))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_11)))));
                    var_18 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_14) : (4294967285U)))) ? (((/* implicit */int) (signed char)-92)) : ((+(var_10))))), (((((/* implicit */_Bool) (-(8872741466217530772LL)))) ? (((/* implicit */int) ((5595024361554232707ULL) < (((/* implicit */unsigned long long int) 0U))))) : ((~(((/* implicit */int) (signed char)32)))))));
                    var_19 = ((/* implicit */_Bool) (-((-(2614938355216469981ULL)))));
                }
            } 
        } 
    } 
}
