/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81392
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
    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (4925826399209497307ULL) : (((/* implicit */unsigned long long int) 7628545254434707911LL)))), (((/* implicit */unsigned long long int) (unsigned short)65504))));
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [(short)21] [(short)21] [i_2] [i_4] [i_4] [i_3] [i_0 - 2] = ((-1157199443669008285LL) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 4] [i_1] [i_2] [i_2] [i_4] [i_1]))) : (-6446341862694670133LL)))) ? (((/* implicit */long long int) 1756216137)) : (((((/* implicit */_Bool) (unsigned short)55446)) ? (9223372036854775807LL) : (-6446341862694670139LL))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min(((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3905521509684867556LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 3]))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (+(var_13)))), (arr_7 [i_0 + 4] [i_0 + 4]))) - ((~(max((((/* implicit */unsigned long long int) (short)4)), (arr_9 [i_0] [(unsigned short)18] [i_1] [i_1])))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 6446341862694670138LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [(_Bool)1] [i_0 + 1] [15] [i_0 - 1])) ? (694723430U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [13ULL] [i_0 + 3] [i_0] [i_0 - 1])))))) : ((((_Bool)1) ? (arr_12 [i_0 + 3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -2131966082)))))))));
            }
        } 
    } 
}
