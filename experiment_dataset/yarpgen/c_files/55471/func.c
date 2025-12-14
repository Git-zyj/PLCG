/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55471
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
    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9893354290517101019ULL)) ? (4246868020804457449LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) -4246868020804457445LL)) ? (((/* implicit */unsigned long long int) -1691142332)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((var_4) - (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4246868020804457450LL)) ? (2642241753770508027LL) : (max((-8846410003988110960LL), (-4246868020804457425LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] |= ((((/* implicit */int) (!(((/* implicit */_Bool) -8546092933758554353LL))))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-86)), ((unsigned short)20243)))) : (((/* implicit */int) (unsigned char)195)))));
                    var_14 = ((/* implicit */unsigned char) min((((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0 + 1] [1LL]) != (((/* implicit */unsigned long long int) arr_1 [3ULL])))))))), (((((/* implicit */int) arr_7 [9] [i_0 - 1] [i_0 - 1] [i_0 + 1])) <= (((/* implicit */int) arr_7 [i_1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
                    var_15 -= ((/* implicit */unsigned short) var_2);
                    var_16 = ((/* implicit */unsigned short) ((unsigned int) min((-4246868020804457468LL), (((/* implicit */long long int) min((arr_1 [i_2]), (((/* implicit */int) arr_5 [i_2] [i_1]))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((int) -8989967029499097447LL)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((5570380383559242013ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
}
