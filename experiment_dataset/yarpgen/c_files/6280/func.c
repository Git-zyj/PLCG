/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6280
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
    var_19 = var_4;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned int) ((unsigned long long int) min(((~(-1929510009))), (1929510009))));
                    var_21 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)31)))) + (((((/* implicit */_Bool) 12696970036333834987ULL)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)-10414))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = (-(((/* implicit */int) min(((unsigned short)44220), (((/* implicit */unsigned short) arr_8 [i_4 - 2]))))));
                            var_22 = ((/* implicit */unsigned char) (-((-(4026531840U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) var_18)))))));
                            var_24 = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
}
