/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92124
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
    var_15 += ((/* implicit */unsigned char) 4203197087330766895LL);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */long long int) min((-1869101634), (((/* implicit */int) (unsigned short)27926))));
                                var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)32821)), (1781459053U)));
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_10)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_18 [14ULL] [(unsigned short)0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(min((arr_9 [(unsigned char)11] [i_6 - 1] [2ULL] [7U]), (arr_9 [4ULL] [i_6 - 1] [i_6] [4ULL])))));
                                var_19 = ((/* implicit */signed char) (-((~(var_14)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_0);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_13))));
}
