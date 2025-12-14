/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90221
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
    var_19 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((var_14) % (((/* implicit */int) var_9))))) : (9223372036854775784LL));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 |= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)914))));
                var_21 |= ((/* implicit */int) (unsigned short)64622);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_22 = ((/* implicit */int) var_8);
                    var_23 = ((/* implicit */unsigned short) arr_0 [(short)4]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (-9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [9]))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_7 [i_1] [i_1 + 3] [17ULL]))))))));
                    arr_10 [i_3] [i_1] [i_0 - 2] [i_0 + 3] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [13LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60165))) : (arr_7 [i_0] [(unsigned char)19] [i_0 + 1])))))));
                    var_25 *= ((/* implicit */long long int) (_Bool)1);
                    var_26 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1] [i_0]))) ? (((/* implicit */int) arr_8 [(unsigned short)8] [i_1])) : ((~(((/* implicit */int) (_Bool)1)))))));
                }
                arr_11 [16LL] = ((/* implicit */short) arr_7 [18LL] [i_1 + 1] [(unsigned short)19]);
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_16);
}
