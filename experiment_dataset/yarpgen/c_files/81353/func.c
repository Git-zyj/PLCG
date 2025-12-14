/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81353
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_4)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-4564)))))));
                            var_17 &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                    } 
                } 
                arr_11 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) 134217727U);
                var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_19 = ((((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_12)) - (10700))))) <= ((~(max((((/* implicit */int) var_8)), (var_11))))));
}
