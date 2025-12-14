/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88533
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    var_12 -= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) (short)-6806)) : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 2]))) + (2147483647))) << (((var_8) - (10603655736710335391ULL)))));
                    arr_10 [(short)10] [i_1] [i_1] [i_2] = ((/* implicit */int) var_5);
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_0 [(short)7] [(short)7]);
                }
                for (short i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_13 -= ((/* implicit */signed char) var_3);
                    arr_16 [i_0 + 1] [i_0] [i_0 + 2] [i_0] = ((/* implicit */signed char) ((((arr_9 [i_0 + 2] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6806)))));
                }
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_19 [i_4] [i_1] [i_4] = (_Bool)1;
                    var_14 = ((/* implicit */signed char) ((182483952) << (((/* implicit */int) (!(((/* implicit */_Bool) (+(4096639456U)))))))));
                }
                arr_20 [(short)10] [i_1] = ((/* implicit */signed char) (short)6806);
            }
        } 
    } 
    var_15 = var_7;
    var_16 = ((/* implicit */short) var_1);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
}
