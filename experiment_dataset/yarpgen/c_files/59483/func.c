/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59483
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_11 [9U] [i_1] = ((/* implicit */unsigned long long int) ((((var_8) * (var_10))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = min((((/* implicit */unsigned long long int) -5LL)), (11608327651098559604ULL));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((min((var_5), (((/* implicit */int) var_6)))), (((((/* implicit */int) var_4)) + (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) var_11)) ^ (((((var_5) | (var_0))) / (((((/* implicit */int) var_11)) << (((((/* implicit */int) var_11)) - (3622)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((6838416422610992013ULL), (1465970769889121299ULL))))));
    var_17 = var_0;
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (var_5)));
}
