/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74235
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [19] [i_0] [19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) < (min((-142719456623907653LL), (((/* implicit */long long int) (unsigned short)2047))))));
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (var_0)));
                            var_21 = ((/* implicit */_Bool) 1681551052U);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) arr_1 [i_0 - 1]))), ((+(734844260U))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((short) (signed char)58));
                        }
                        for (unsigned char i_5 = 3; i_5 < 19; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) (signed char)-69)))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551612ULL) & (0ULL)))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_2 - 2] [i_3 - 3] [i_3] [i_3] [i_5 - 3]) ? (arr_15 [i_2 - 3] [i_0] [i_5] [i_5] [i_5 - 1]) : (((/* implicit */int) arr_12 [i_2 - 1] [i_3 + 3] [i_2 - 1] [i_2 - 1] [i_5 + 1]))))) : (0ULL)));
                        }
                        var_26 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((signed char) (unsigned short)22850))) ? (((/* implicit */unsigned long long int) -1LL)) : (0ULL)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_12 [i_0] [i_2] [i_6 - 1] [i_6 - 1] [i_6])));
                                var_28 = ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 0LL)));
                                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                                arr_23 [i_0] [i_1] [i_0] [i_6 + 2] [i_1] = ((/* implicit */unsigned char) (short)30720);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) var_16);
                    arr_24 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_21 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) var_18);
}
