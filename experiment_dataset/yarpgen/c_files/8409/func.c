/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8409
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) - (7555861809690719470ULL))) - (((/* implicit */unsigned long long int) ((961635164322186318LL) - (((/* implicit */long long int) ((/* implicit */int) (short)3366))))))));
                    var_18 = ((/* implicit */int) ((((((var_16) - (((/* implicit */long long int) 4229183747U)))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) (signed char)75))))))) - (((((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) -1))))) - (((((/* implicit */long long int) 1270229000U)) - (-2779151774166394285LL)))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((10596390670476798106ULL) - (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (-536870912)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_1 [4] [i_1 + 1]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (arr_6 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (9766213408720655266ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3528254908U)) - (var_13)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((2811576739U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) - (((-2779151774166394285LL) - (4595135650825207306LL))))))));
}
