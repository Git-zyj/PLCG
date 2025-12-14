/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92360
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
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */unsigned short) (-2147483647 - 1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((int) ((unsigned char) 9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_22 = (-(((/* implicit */int) ((_Bool) -1136155488))));
                                arr_11 [i_4] [i_3 - 2] [i_2] [(unsigned short)13] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) 8797267320588316957ULL)))))) <= ((~(arr_9 [i_3] [i_1 - 1] [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [9ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-1);
                                arr_17 [i_0 + 2] [i_1 - 2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (~((~((~(-1475432002003518097LL)))))));
                                var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((arr_7 [i_0 + 2] [i_1] [i_2]) << (((1011786829U) - (1011786829U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (arr_6 [i_1] [i_0]) : ((-(2147483624))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
