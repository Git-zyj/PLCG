/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89510
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
    var_10 = ((/* implicit */int) (-(var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (unsigned char)248);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)2176))))) && ((!(((/* implicit */_Bool) (unsigned char)39))))));
                                var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)28346))) < (-7323208424777078513LL)));
                            }
                        } 
                    } 
                } 
                arr_13 [9ULL] [i_0] = (+(max((8904791871283532398LL), (-4308137827307895578LL))));
                var_12 = max(((-(arr_1 [i_1] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) + (26899))))))));
}
