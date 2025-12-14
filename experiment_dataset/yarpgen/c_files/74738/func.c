/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74738
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
    var_18 = ((9065777003117891773LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-6148))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_7))));
    var_21 = ((/* implicit */short) min(((_Bool)1), ((_Bool)0)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */short) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                    var_24 *= ((/* implicit */unsigned int) (_Bool)1);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
                /* vectorizable */
                for (long long int i_3 = 4; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_3 - 3] [i_4] [i_3 - 1] [i_3 + 1] [i_5] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))));
                                var_28 = ((/* implicit */signed char) (_Bool)1);
                                arr_18 [i_4] [i_1 - 2] [i_3 + 1] [i_4] [i_1 - 2] = ((/* implicit */unsigned char) (_Bool)1);
                                var_29 = ((/* implicit */unsigned char) (+(((arr_4 [4U] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_3 [i_3])))));
                            }
                        } 
                    } 
                    var_30 -= ((/* implicit */short) ((_Bool) (_Bool)1));
                }
                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_9 [i_0]) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1 - 2]))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) (~(arr_11 [(_Bool)1] [(signed char)3])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_5 [i_0] [(unsigned char)3]), (((/* implicit */signed char) (_Bool)1))))))) - (42575)))));
            }
        } 
    } 
}
