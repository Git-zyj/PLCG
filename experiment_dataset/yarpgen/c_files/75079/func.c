/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75079
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
    var_17 = min(((~(min((3925366503317601158ULL), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (1959631331)))) ? (min((1281093365), (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (short)-551))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(33285996544ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((982528920011977661ULL), (((/* implicit */unsigned long long int) 2005422051183633938LL))))) || (((/* implicit */_Bool) arr_1 [i_2] [i_1])))))) : (((((/* implicit */long long int) arr_1 [i_0 + 1] [i_1])) + ((-(var_7)))))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2013265920), (((/* implicit */int) min(((short)-11872), ((short)11871))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)670)) ? (((/* implicit */int) (unsigned short)54535)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-3082))))))) : (((/* implicit */long long int) (~(var_1))))));
                    var_19 = ((/* implicit */unsigned char) -7956091465808688234LL);
                }
            } 
        } 
    } 
}
