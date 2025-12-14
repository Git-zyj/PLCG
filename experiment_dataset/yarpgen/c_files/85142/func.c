/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85142
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) (~(2147483631)));
                        arr_12 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(2147483635))) | (((var_0) / (((/* implicit */int) (unsigned char)12))))))) ? (((/* implicit */long long int) (-(arr_10 [3U] [i_1 - 1] [3U] [i_3])))) : (min((min((9223372036854775802LL), (((/* implicit */long long int) (unsigned char)128)))), (((/* implicit */long long int) var_1))))));
                        arr_13 [i_0] [i_1] [4U] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_14 [i_3] [i_2] [i_1] [i_0] [i_0] = 2175799853U;
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [(unsigned short)7] [i_1] [1U] [i_2] [i_4] &= ((/* implicit */unsigned long long int) (~(2928243350600338711LL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(-2147483644)))) | (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))))));
                            var_18 = ((/* implicit */signed char) ((unsigned long long int) ((var_11) ? ((-(var_9))) : (arr_6 [i_1 + 1] [i_5]))));
                        }
                        var_19 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 2])) ? (var_7) : (arr_10 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 + 1]))) - ((-(var_10)))));
                        var_20 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 1] [i_2]);
                        var_21 = ((/* implicit */unsigned int) (signed char)-24);
                    }
                    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 - 2] [i_1 + 1])))))));
                    arr_21 [i_0] [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max(((signed char)18), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))) != (var_12))))))), (2670602720334431383LL)));
                }
            } 
        } 
        var_23 *= (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_3)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
    {
        arr_26 [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_6]))))) ? (((((/* implicit */_Bool) var_6)) ? (2147483631) : (((/* implicit */int) arr_25 [i_6 + 2])))) : (((/* implicit */int) (unsigned char)255))));
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_8)))));
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_25 *= ((/* implicit */unsigned short) arr_27 [i_7]);
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((short) var_8)), (((/* implicit */short) arr_28 [i_7] [11ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7]))) : ((-(((arr_28 [2LL] [i_7]) ? (arr_27 [i_7]) : (((/* implicit */long long int) var_0))))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_28 [i_7] [i_7])) : (((/* implicit */int) var_11)))))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((2928243350600338686LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29663)) ? (2147483638) : (((/* implicit */int) (_Bool)1))))))))));
    }
    var_29 = (short)-2851;
}
