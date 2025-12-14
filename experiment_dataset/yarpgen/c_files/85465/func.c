/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85465
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [8] [i_1] = ((/* implicit */long long int) (unsigned short)36290);
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (unsigned short)16383);
                            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 2] [i_1 + 2] [i_0] [i_1] [i_0] [8ULL])))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_13)))))) : (((77740813) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
