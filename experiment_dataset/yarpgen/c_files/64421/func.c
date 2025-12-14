/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64421
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(arr_3 [i_2] [i_2])))) ? ((+(4U))) : (((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 2] [i_2 - 1]))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_1 - 3] [i_2]))) ? (((/* implicit */int) min((arr_6 [i_0] [i_1 - 3] [i_2]), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) min((arr_6 [(signed char)12] [i_1 + 3] [i_2]), (arr_6 [i_0] [i_1 - 1] [i_2 + 2])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)9581), (((/* implicit */unsigned short) (short)-7181)))))) * (((((/* implicit */_Bool) var_2)) ? (9748713042918332634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) (short)1503)) : (((/* implicit */int) var_3))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_12)) : ((+(var_4)))))) == (((unsigned long long int) (+(((/* implicit */int) var_7)))))));
    var_16 -= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (12629584401460423396ULL)))) ? (min((((/* implicit */unsigned long long int) var_2)), (15910029172951367473ULL))) : (((((/* implicit */_Bool) (short)1511)) ? (8698031030791218979ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */short) (((-2147483647 - 1)) >= (var_4)))))))));
}
