/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70337
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((6651370634417733793LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))))), (var_7)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_3] = ((/* implicit */short) (signed char)7);
                            arr_12 [i_0] = ((/* implicit */int) ((-6651370634417733793LL) + (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_0 + 1])))))));
                            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_0 + 1]))) : (9223372036854775790LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) <= (var_12)))) : ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)250)))))));
                            var_17 *= ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551603ULL)) || (((/* implicit */_Bool) var_14))))))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 1])) != (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_3 + 2] [i_3 + 2])))))));
                        }
                    } 
                } 
                arr_13 [i_1 - 1] [i_0] [i_0] &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)21961)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7178))) : (-6651370634417733791LL))), (((/* implicit */long long int) (unsigned short)43574))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(((((/* implicit */_Bool) (unsigned short)43571)) ? (arr_8 [i_0] [i_0] [i_1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (max((((long long int) -6651370634417733793LL)), (((/* implicit */long long int) 4294967295U))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_15);
}
