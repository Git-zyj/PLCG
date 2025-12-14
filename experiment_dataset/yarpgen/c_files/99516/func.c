/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99516
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) var_4);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2 + 1] [i_2] [i_2] = ((/* implicit */signed char) arr_0 [i_2] [i_2]);
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (short)10346))));
                            var_16 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 3] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 4] [i_0]))))));
                            var_17 = ((/* implicit */unsigned short) ((((long long int) var_5)) > (((long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_15 [(signed char)7] [i_6]);
                    arr_19 [i_4] [i_4] [i_6] = max((((/* implicit */long long int) arr_11 [i_4])), ((-(((long long int) arr_14 [i_4 + 2])))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_6 [i_6])));
                                var_19 -= ((/* implicit */unsigned int) 5058826717022953524ULL);
                                arr_25 [i_4] [i_5] [i_6] [i_6] [i_7] [(signed char)4] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
