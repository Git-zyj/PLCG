/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62682
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
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned short)65535))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) < (arr_7 [i_1] [i_1 + 1] [i_1]))) ? (((int) (unsigned short)65521)) : (((/* implicit */int) arr_2 [i_1] [i_1 + 1]))));
                    var_22 &= ((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_0 + 2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] [i_1 + 1] [21LL] = ((/* implicit */unsigned char) ((long long int) (unsigned short)65530));
                        arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) - (arr_3 [i_0])));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */short) var_12);
}
