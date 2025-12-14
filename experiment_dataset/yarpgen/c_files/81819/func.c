/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81819
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (min((((/* implicit */unsigned int) 939819740)), (arr_0 [i_0]))) : ((-(arr_0 [i_0]))));
        arr_2 [7] = (!(((/* implicit */_Bool) (((((_Bool)1) ? (1493829082U) : (1620422656U))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) var_6);
        arr_6 [3] [i_1] = ((/* implicit */_Bool) var_9);
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) var_7)) : (min((((((/* implicit */_Bool) 2710527942U)) ? (1049507817U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_8 [i_2])))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((6593541757191773236LL) / (((/* implicit */long long int) 1023329091))));
        var_20 += ((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1538764376U))))) > (((/* implicit */int) ((3302299775U) == (3562959270U))))));
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_16))))) >= (((arr_15 [12U] [12U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [4U] [i_2] [i_4] [i_2]))) : (var_15)))));
                    arr_16 [i_2] [10U] [i_2] [19U] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (992667521U)));
                }
            } 
        } 
        var_24 = ((unsigned int) min((min((((/* implicit */unsigned int) (_Bool)1)), (1042221880U))), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6)))))));
    }
    var_25 = var_1;
}
