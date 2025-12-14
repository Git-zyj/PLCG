/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56808
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
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */int) ((max((((var_8) & (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))), (((/* implicit */long long int) 3694442072U)))) - (((/* implicit */long long int) (+(max((arr_4 [i_3] [i_4]), (((/* implicit */unsigned int) 1300114465)))))))));
                                var_12 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) (unsigned char)5)))))))) - (((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned char)8))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
}
