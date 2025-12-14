/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63470
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+(var_1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                            {
                                var_17 *= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_1 + 1] [i_0]))));
                                var_18 = ((/* implicit */short) (+(((10839958902061328095ULL) & ((~(10652372362747876216ULL)))))));
                                var_19 = ((/* implicit */unsigned int) max(((-((+(8842556871841319829LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [9LL] [i_4] [i_2] [i_3])))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [15]))) & (var_8))))))));
                            }
                            var_20 |= ((/* implicit */unsigned short) ((18446744073709551615ULL) << (((18446744073709551615ULL) - (18446744073709551597ULL)))));
                            var_21 = ((/* implicit */long long int) var_1);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))))), ((signed char)53)))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))))))));
                            arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_3]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) var_10);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_25 = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) 689355734);
}
