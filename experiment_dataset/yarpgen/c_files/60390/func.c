/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60390
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) 1092909264);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 11705565218254007949ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (-1))), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6207451861636737614LL)))))) : (1U)));
                            var_18 = ((/* implicit */signed char) ((20) < (((/* implicit */int) max(((short)31744), ((short)31730))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)15))))))));
                            var_20 = max((((/* implicit */unsigned long long int) 9)), (min((218833147146141570ULL), (((/* implicit */unsigned long long int) var_7)))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_12 [(_Bool)1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) 931584735));
}
