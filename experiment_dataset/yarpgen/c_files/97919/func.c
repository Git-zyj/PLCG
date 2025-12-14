/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97919
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3 + 2] [i_1] [i_3 + 2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 2] [i_4 + 4] [i_4 + 4] [i_4] [i_4 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 2]))))) / (((((/* implicit */_Bool) (signed char)22)) ? (arr_9 [i_4] [i_4 + 1] [i_4 - 2] [i_1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 - 1])))))));
                                arr_14 [i_4] [i_1] [i_1] [i_3 + 2] [i_1] [i_1] [i_2 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (-2172112614823229964LL)))) ? (max((((/* implicit */long long int) (signed char)-23)), (5626943547510867781LL))) : (((long long int) arr_5 [i_3] [i_3] [6]))))));
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_3])) : (((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_2 - 1]))))));
                                arr_16 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((var_0) <= (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) (unsigned short)10031)) ? (9020059979145036372LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))))) < (arr_6 [i_1] [i_3] [i_1])));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */short) (unsigned char)205);
                var_14 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */long long int) (~(2529248968U))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_20 [i_0] [11LL] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_1]))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_21 [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)7))));
                    arr_22 [i_1] [6] [i_5] [i_1] = ((/* implicit */unsigned char) var_10);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) (+((~(4095U)))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6))), (((/* implicit */long long int) (~(var_9))))))));
}
