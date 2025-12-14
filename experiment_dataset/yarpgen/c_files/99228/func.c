/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99228
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3441974844U)))) ? ((-(16892126836074313948ULL))) : ((+(18400963164079381841ULL))))))));
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(var_3)))), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))) ? (min((((/* implicit */long long int) (signed char)34)), (-1192520023548059191LL))) : (max((((/* implicit */long long int) var_0)), (var_4)))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-13383)), ((+(((/* implicit */int) var_6))))))) ? (max((1505473696U), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) < (((var_3) / (((/* implicit */unsigned int) 766375574))))))))));
    }
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_2))));
}
