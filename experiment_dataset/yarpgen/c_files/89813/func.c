/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89813
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
    var_13 = ((unsigned long long int) (-(var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) 2732507523U)) ? (7094606104426162587LL) : (((/* implicit */long long int) 1562459767U))))));
                    var_15 = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) max((var_1), (arr_6 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_0 [i_3 - 1]);
                                var_17 -= ((/* implicit */_Bool) var_8);
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) % (((long long int) arr_5 [i_3] [i_3 - 1] [i_3] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) arr_5 [i_0 + 2] [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
