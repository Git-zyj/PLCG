/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99707
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (_Bool)1))))) ? (2147483647) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_6)) - (217))))))))));
                arr_4 [i_0 + 2] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned short)56698))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_18 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_2] [i_3] [i_4])) % (((/* implicit */int) (unsigned short)15655)))) / (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_17 [i_3] [(signed char)0] [(signed char)0] [(signed char)0] [i_6 - 1] [i_3] |= ((/* implicit */unsigned int) arr_15 [i_2] [(unsigned char)24] [i_2] [i_2] [i_2]);
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_6 - 2] = ((/* implicit */short) (+(((int) (_Bool)1))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)56698)) + (((/* implicit */int) arr_9 [i_4] [i_5])))))) ? (((long long int) ((((/* implicit */unsigned long long int) arr_1 [i_3])) + (arr_6 [i_5])))) : (arr_16 [i_5 + 1] [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_4] = ((/* implicit */unsigned short) max(((((-2147483647 - 1)) % (((/* implicit */int) (unsigned short)36513)))), (arr_7 [i_2])));
                }
            } 
        } 
    } 
}
