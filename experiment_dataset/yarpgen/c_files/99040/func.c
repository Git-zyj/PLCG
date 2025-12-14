/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99040
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10159))))) : ((((!(((/* implicit */_Bool) 504403158265495552ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) var_12)))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned char) 6380721637342932323ULL);
                                var_16 = ((/* implicit */short) (-(((/* implicit */int) (!(var_0))))));
                            }
                            var_17 = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                var_18 &= ((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) ((_Bool) var_3)))))));
    var_20 ^= ((/* implicit */unsigned short) ((((max((((/* implicit */int) (short)25791)), (1))) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */_Bool) max((var_5), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((var_5) - (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            {
                arr_15 [i_5] [i_6 + 1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                var_22 = ((/* implicit */unsigned char) 216172782113783808LL);
                var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_12 [i_6])))) * (((/* implicit */int) var_0))))), ((+(arr_14 [i_6 + 1] [i_6 + 1]))));
                var_24 = ((/* implicit */short) ((((long long int) (_Bool)0)) >> (((arr_13 [i_6] [i_6 - 2]) - (arr_13 [i_5] [i_6 - 1])))));
            }
        } 
    } 
}
