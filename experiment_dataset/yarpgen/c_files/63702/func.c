/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63702
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1 - 4] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                var_18 &= ((((/* implicit */_Bool) 1022257775)) ? (8227776776675813572LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))));
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)200)), ((unsigned short)65528)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_21 = ((((/* implicit */int) min((arr_9 [i_2] [i_3]), (var_15)))) & (((((((/* implicit */int) (unsigned char)94)) >> (((((/* implicit */int) (unsigned char)253)) - (224))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) == (((/* implicit */int) var_2))))))));
                var_22 = ((unsigned char) (+(((/* implicit */int) (unsigned short)9188))));
            }
        } 
    } 
}
