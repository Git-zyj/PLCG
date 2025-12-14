/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75828
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3168382535U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162)))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [15])) : (((unsigned long long int) var_1))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-18134)) && (((/* implicit */_Bool) (signed char)64)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)95)) % (((/* implicit */int) (_Bool)1))))))));
                var_11 = ((/* implicit */int) var_5);
                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (max((((var_3) >> (((/* implicit */int) var_5)))), (((/* implicit */unsigned long long int) var_9))))));
                arr_6 [i_0] = ((/* implicit */_Bool) var_0);
                arr_7 [i_0] = ((/* implicit */signed char) 3525477485U);
            }
        } 
    } 
    var_13 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)24656))) ^ (var_9))), (((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) (unsigned char)120)), (738308594U)))))));
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    for (int i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (var_6) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((var_1) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-7894600056761093089LL))))) < (((/* implicit */long long int) ((/* implicit */int) (short)16)))));
        var_17 = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) -140504480)), (1057354872U))));
    }
    for (int i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) max((min((arr_4 [i_4 + 1] [i_4 - 1]), (arr_4 [i_4 - 1] [i_4 + 1]))), (((/* implicit */unsigned short) (short)9716))));
        arr_17 [i_4 - 1] = (unsigned short)49643;
    }
    for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((int) -177670641))) ? (16652629273974114927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 2] [i_5 - 2]))))), (((/* implicit */unsigned long long int) ((unsigned int) (short)-349)))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_1 [i_5 - 1]))));
    }
}
