/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92221
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
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((((unsigned int) (signed char)-10)), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_1 - 1]))));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_2 - 1]));
        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_8 [i_2] [i_2 - 2])) / (((/* implicit */int) arr_8 [i_2] [i_2 - 1])))), ((-(((/* implicit */int) arr_8 [i_2] [i_2 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_10 [i_2 + 1]), (arr_10 [i_2 + 1]))))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_6] [i_3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2 + 1] [i_3]))))), ((+(((unsigned int) arr_16 [i_2 - 1] [i_3]))))));
                            var_22 = ((/* implicit */unsigned char) arr_10 [i_6]);
                        }
                    } 
                } 
            } 
        }
    }
    var_23 = (+(((/* implicit */int) (signed char)79)));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_13))));
}
