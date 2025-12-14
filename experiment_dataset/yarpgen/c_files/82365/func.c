/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82365
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0] [i_2]);
                    arr_7 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((_Bool) var_3)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4521529362373741817ULL)) || (((/* implicit */_Bool) -3535092495074081218LL))));
                var_21 -= ((/* implicit */unsigned char) (unsigned short)54932);
            }
        } 
    } 
    var_22 = min(((+(((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)209)))))), (((/* implicit */int) var_14)));
    var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((-2091235680) - (((/* implicit */int) var_2))))) || (((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)57)))))));
    var_24 = ((/* implicit */unsigned long long int) var_15);
}
