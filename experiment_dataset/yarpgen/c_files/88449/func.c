/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88449
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-4675)), (((arr_3 [i_0]) % (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (12645262149643663122ULL)))));
                arr_6 [(unsigned short)11] [i_1] [i_0] |= ((/* implicit */unsigned int) ((unsigned char) ((1017209382) & (arr_3 [i_0 + 1]))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((long long int) arr_0 [i_0 + 1]))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) min((min((((long long int) var_8)), (((/* implicit */long long int) ((arr_2 [i_0]) * (((/* implicit */unsigned int) -177718300))))))), (((/* implicit */long long int) arr_1 [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            arr_18 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_3 + 1] [i_4])) ? (((/* implicit */unsigned long long int) arr_1 [i_4])) : (14708821484577917279ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)535)), (var_6)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2 - 1] [i_3 + 1])) ^ (arr_1 [i_3 + 1]))))));
                            var_11 |= ((/* implicit */int) ((long long int) arr_13 [i_3 + 1]));
                            var_12 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((var_7) != (((/* implicit */long long int) arr_2 [i_2 - 1]))))), (((((/* implicit */_Bool) 3577919730U)) ? (arr_2 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2])) : (var_6)))) ? (((/* implicit */unsigned int) min((8388607), (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2]))))) : (((arr_15 [i_3 + 1] [i_2 + 1] [i_2 - 1]) + (((/* implicit */unsigned int) 12288))))));
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_1 [i_2 - 1]) + (((/* implicit */int) arr_11 [i_2 + 1]))))), (((unsigned int) min((((/* implicit */long long int) (short)-2099)), (arr_12 [i_3] [(short)13]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_25 [i_7] [i_6 + 1] [i_3] [i_2 - 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_7 + 4]))))), (min((arr_19 [i_2 - 1]), (arr_19 [i_2 + 1])))));
                            var_15 = ((/* implicit */short) (~((+(min((var_1), (((/* implicit */unsigned int) arr_9 [i_3] [i_3]))))))));
                            arr_26 [i_2 - 1] [i_2 - 1] [i_6] = ((/* implicit */unsigned short) ((min((arr_10 [i_2 - 2] [i_6 + 1]), (arr_10 [i_7 - 2] [i_2 - 2]))) > (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_7] [i_6] [i_3])), (var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
