/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78125
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        var_19 &= ((/* implicit */int) 17907187321788214141ULL);
                        var_20 = ((/* implicit */short) (+(((2445185101477541013LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_0])))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-((~(317187028))))))));
                        arr_13 [1] [i_1] [i_2] [1] [i_3 - 3] = ((/* implicit */_Bool) arr_11 [i_3 - 2] [i_2] [i_2] [i_0 - 1]);
                        var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) (unsigned char)94))))));
                    }
                    var_23 &= var_1;
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (((/* implicit */short) var_13)))))) : (min((var_6), (((/* implicit */unsigned long long int) var_9)))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_12)) % (var_3))) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
