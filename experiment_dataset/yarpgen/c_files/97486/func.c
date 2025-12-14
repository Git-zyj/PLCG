/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97486
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
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 += ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0 + 1]))))) && (((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (((((_Bool)0) ? (3155375787U) : (3241599896U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_2 [9] [i_0])))) >= (-444204000))))))))));
                var_16 = ((/* implicit */int) 3155375756U);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                var_17 &= ((/* implicit */unsigned char) var_7);
                                var_18 = var_3;
                            }
                            var_19 *= ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (signed char)-91))))) << (((var_4) + (736537968369216153LL)))))), (((max((((/* implicit */unsigned int) (short)2236)), (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
}
