/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60351
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
    var_11 = ((/* implicit */long long int) ((1615453626U) - (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = var_8;
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 *= (~((~(2041227670U))));
                                var_14 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                } 
                var_15 |= ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 2253739626U))))))) >> (((((((-2460051132211594532LL) > (((/* implicit */long long int) var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_0))))) : (max((2474979439U), (arr_14 [7U] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) - (3055544891U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_7);
}
