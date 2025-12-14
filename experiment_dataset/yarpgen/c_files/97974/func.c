/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97974
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = arr_4 [i_0] [2U] [i_1];
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)4);
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4)) >> (((/* implicit */int) (_Bool)1)))))))) ? (min((min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)47)) < (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) var_11)))))))));
                arr_8 [i_0] [i_1] [i_1] = ((_Bool) (+(((/* implicit */int) ((signed char) -2746149832200950802LL)))));
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) > (18446744073709551615ULL)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_6))))))));
    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) 828417377336927867LL));
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 9635166514384867267ULL)) ? (((/* implicit */int) (unsigned short)13064)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_2))))) : ((+(var_1)))));
}
