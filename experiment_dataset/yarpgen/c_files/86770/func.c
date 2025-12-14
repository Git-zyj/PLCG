/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86770
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_16)) : (arr_8 [i_0] [i_2] [i_0]))));
                                var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) <= (2ULL)))) : (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) arr_7 [i_1] [(short)6] [i_3] [i_4])) : (((/* implicit */int) arr_7 [i_0] [4ULL] [10ULL] [i_3]))))))));
                                var_19 = ((/* implicit */unsigned short) ((min((1315831569567327692LL), (((/* implicit */long long int) var_1)))) == (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])) - (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3] [(unsigned char)7])) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) 17460292556224797507ULL);
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (unsigned short)65508))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_5 - 1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_7] [i_5 + 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_18 [i_5 + 1] [i_7] [15ULL] [i_5 - 1]))))) : (((min((((/* implicit */long long int) var_11)), (arr_17 [i_7]))) % (((/* implicit */long long int) (-2147483647 - 1)))))));
                }
            } 
        } 
    } 
}
