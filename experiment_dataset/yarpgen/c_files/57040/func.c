/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57040
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 0ULL);
                arr_5 [(unsigned short)0] [i_1] = ((/* implicit */signed char) 18446744073709551615ULL);
                arr_6 [i_1] = ((/* implicit */short) -4645718957204724527LL);
                arr_7 [2LL] |= (unsigned short)65535;
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) (signed char)40);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */unsigned long long int) (signed char)-46);
                                var_14 &= (unsigned short)32768;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */short) var_9);
}
