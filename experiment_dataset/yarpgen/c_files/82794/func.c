/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82794
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */int) ((((unsigned int) ((var_4) - (((/* implicit */long long int) var_9))))) != (((/* implicit */unsigned int) var_9))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((var_1) | (var_9)))) != (((long long int) var_2)))));
                            var_12 -= ((/* implicit */unsigned long long int) ((var_4) != (((/* implicit */long long int) var_3))));
                        }
                        arr_14 [i_1] &= ((/* implicit */unsigned short) ((16388083985505136339ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) ^ (var_3)))) | (((long long int) 1047232304U)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */short) ((unsigned char) ((var_2) != (var_9))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned char) var_9)))));
                        }
                    }
                    var_14 = ((/* implicit */long long int) var_6);
                }
                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52597))) | (0ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((var_2) != (((/* implicit */int) ((short) ((unsigned int) var_5))))));
}
