/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74671
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)18164))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-18167)))))));
    var_11 = ((/* implicit */signed char) min((var_11), (var_5)));
    var_12 &= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 794205597U)) + (281200098803712LL))), (min((((/* implicit */long long int) ((794205591U) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2338387366300399434LL)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -2064497156)) || (((/* implicit */_Bool) 2963911558U)))))) * (((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) arr_3 [i_0] [i_2]))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)1)), (281200098803712LL))) + ((-9223372036854775807LL - 1LL))))) ? (max((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */long long int) 3500761716U)))) : (min((8615312172406762341LL), (((/* implicit */long long int) -433211755)))))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3370844595U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26760))) : (4181702416U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), ((unsigned short)27)))) : ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))) ^ (((long long int) (unsigned short)0))));
                }
            } 
        } 
    } 
}
