/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69730
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
    var_14 = max((((var_10) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) 1854001782))))), (((((/* implicit */int) (unsigned short)65534)) ^ (((/* implicit */int) (short)15456)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = min((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18))))), (arr_4 [i_0 + 1]))), (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) == (arr_6 [(short)6] [i_1] [i_2] [i_0 + 1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)143)), (98304U)));
                                var_17 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_3])), (((max((arr_3 [i_0] [i_0] [i_3]), (10191734445035024915ULL))) / (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_0]) / (arr_0 [i_0] [i_3]))))))));
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_7 [i_0] [6U] [i_3])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18446744073709551615ULL))))))) : (((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)-1)))) ? (((/* implicit */long long int) arr_7 [i_0] [i_3] [i_4 + 1])) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1] [4LL] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
