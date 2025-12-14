/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80989
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = min((1553805692U), (2741161601U));
                    var_12 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (2797835365U)))) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17))))))), (((min((arr_7 [i_0 + 4] [i_0 + 4] [i_2]), (((/* implicit */long long int) var_5)))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2]))))))));
                    var_13 = ((/* implicit */unsigned char) (short)-3484);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) min(((-(18446744073709551605ULL))), (((15687651543652262299ULL) + (((/* implicit */unsigned long long int) var_6))))));
                                arr_16 [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)24208))) != (arr_2 [i_3] [i_4]))))) * (((long long int) var_8)))) >> (((max((((/* implicit */unsigned int) (_Bool)0)), (1402606842U))) - (1402606832U)))));
                                var_15 = ((/* implicit */unsigned char) max((arr_9 [i_0] [(unsigned char)8] [i_1] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) (-(((((/* implicit */int) ((_Bool) (unsigned char)34))) + (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (-2129647991) : (((/* implicit */int) arr_0 [i_0 + 4]))))), (((unsigned int) arr_0 [i_0 + 4]))));
    }
}
