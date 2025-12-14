/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72462
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (-(((long long int) (~(2499039297U))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) ^ (6301059806669435319LL)))) ? (max((var_6), (((/* implicit */long long int) arr_0 [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [4])), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) (+(var_2))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-((+((-(((/* implicit */int) (unsigned char)248)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(var_14)));
}
