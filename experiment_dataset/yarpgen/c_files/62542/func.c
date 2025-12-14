/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62542
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
    var_14 -= ((unsigned long long int) (((+(var_7))) + (((unsigned long long int) 928047764U))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))))));
                var_16 = min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))), (((arr_4 [i_1] [i_1] [i_0]) ? (arr_3 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((min((arr_6 [i_0 - 1]), (var_5))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1])), (max((var_10), (((/* implicit */unsigned char) var_6))))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */_Bool) -163113323)) || (((/* implicit */_Bool) 8005910681414013832LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
