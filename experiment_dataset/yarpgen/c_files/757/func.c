/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/757
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
    var_16 = ((/* implicit */long long int) -279807891);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((unsigned char) (+(min((var_12), (((/* implicit */long long int) var_9)))))));
                                var_18 = (signed char)124;
                                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) | (5739735124552377751LL)))) ? (6954396252170679220LL) : (((/* implicit */long long int) 1023))));
                                var_20 *= (~(((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) (unsigned char)145)) - (110)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17494), (((/* implicit */unsigned short) var_15)))))) : (min((((/* implicit */long long int) (unsigned char)255)), (arr_11 [i_0] [i_0] [(short)0] [i_4] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_21 *= ((short) var_13);
                                var_22 = ((/* implicit */int) min((arr_3 [i_0] [i_0]), (var_14)));
                                arr_18 [i_1] [i_0] [i_5] [i_6 - 2] = ((/* implicit */short) arr_17 [i_6] [i_6] [i_5] [i_2] [i_1] [i_1 - 1] [(unsigned short)0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
