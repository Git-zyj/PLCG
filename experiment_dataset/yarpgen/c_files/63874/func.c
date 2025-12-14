/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63874
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
    var_12 |= ((unsigned char) ((((/* implicit */unsigned int) -485110192)) == (1351447775U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2 - 1] = ((/* implicit */long long int) var_8);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) 16942896078784864815ULL);
                                arr_17 [i_0] [i_0] [(unsigned char)7] [i_3] = ((/* implicit */short) var_11);
                                arr_18 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] = ((/* implicit */_Bool) (-2147483647 - 1));
                                arr_19 [i_0] [i_0] [i_1] [(signed char)4] [i_3] [14LL] [12] |= var_7;
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */long long int) max((1351447775U), (((/* implicit */unsigned int) (unsigned short)65522))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_2 + 1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((var_1) * (((/* implicit */unsigned long long int) -485110192)))) + (0ULL)));
                                arr_29 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) -7))) - ((~(((/* implicit */int) (unsigned short)65527))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
