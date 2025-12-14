/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92527
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (short)-8489)));
                        arr_13 [i_0] = ((/* implicit */int) ((arr_2 [i_0]) != (arr_2 [i_3])));
                        var_15 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]);
                        arr_14 [i_3 - 2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (2147483647))) >> (((arr_7 [i_3] [i_1 + 2] [i_3] [i_3 - 3]) - (2391706835U))))) + (((/* implicit */int) (!(((((/* implicit */int) var_11)) != (((/* implicit */int) arr_0 [i_2])))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19)) ^ (((/* implicit */int) (short)-2821))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-2821), (((/* implicit */short) (signed char)-16)))))) : (max((arr_7 [i_1 - 2] [i_1 - 2] [i_1 + 1] [1LL]), (((/* implicit */unsigned int) ((_Bool) (short)254)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (signed char)-2));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_0]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) >> (((/* implicit */int) min((arr_20 [i_0] [i_1 - 2]), (arr_20 [i_1] [i_2]))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((~(((/* implicit */int) var_14)))) - (min((((/* implicit */int) arr_20 [i_0] [i_0])), (3)))))) ^ (arr_17 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_5] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_22 [i_1] [i_6] [i_0];
                                arr_30 [i_0] [i_0] = ((/* implicit */long long int) ((short) max((((/* implicit */short) ((unsigned char) (signed char)16))), (min(((short)-2816), (arr_0 [i_1]))))));
                                arr_31 [i_0] [i_0] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((119503826365508583LL) - (119503826365508553LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_8 = 3; i_8 < 16; i_8 += 3) 
                    {
                        arr_36 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(var_4)))) : ((+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_8 - 3] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [16])))))))));
                        arr_37 [i_0] [i_0] [i_1] [i_1] &= max((((/* implicit */long long int) ((_Bool) arr_35 [i_8] [i_0] [i_0] [i_0]))), ((~(((((arr_17 [i_0] [i_8] [i_2] [i_8] [i_0] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_38 [(signed char)10] [i_1] [i_2] [i_0] [(signed char)10] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)-8489)) <= (((/* implicit */int) (_Bool)1))));
                    }
                    var_19 = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2])) * (((/* implicit */int) (short)-8477)))) + (((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_2])))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < ((((~(-1))) << ((+(((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_9] [i_9 + 1] [i_9] [i_9] [i_9])) + (2147483647))) << (((((/* implicit */int) arr_1 [i_10])) - (20113)))))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)42304))))))) << (((((/* implicit */int) max((max((((/* implicit */short) arr_20 [i_9] [i_9])), (arr_45 [i_9] [i_9] [i_10]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_9 + 1] [i_9 + 1])))))))) - (18510))))))));
                arr_46 [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)-29039))))) << (((/* implicit */int) ((((/* implicit */int) arr_45 [i_10] [i_10] [i_9 - 1])) != (((/* implicit */int) (short)8489))))))) <= (((/* implicit */int) ((short) arr_44 [i_9 - 1] [i_9 - 1])))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_9] [i_10]) >= (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9])))))) + (((((((var_3) ^ (arr_39 [i_10]))) + (9223372036854775807LL))) << ((((((+(((/* implicit */int) (signed char)-2)))) + (40))) - (38)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_11);
}
