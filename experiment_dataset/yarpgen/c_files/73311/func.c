/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73311
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) 9223372036854775806LL);
                arr_6 [i_0] = var_2;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39551))) : (-7294994485560673727LL)))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                    var_16 = min((((/* implicit */unsigned long long int) (unsigned short)65535)), (1996855692577925642ULL));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))))))));
}
