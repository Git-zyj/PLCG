/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63747
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned char)2] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [(signed char)21] [i_0])) : (((/* implicit */int) (unsigned short)22))))) ? (((arr_4 [i_0]) % (arr_4 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023)))))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)248)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_6] [i_2] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_12 [i_6])) >> (((((/* implicit */int) (unsigned char)56)) - (31)))))));
                                arr_18 [i_4] [i_4] [(unsigned char)11] [i_4] [(unsigned short)1] [i_2] = ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) max(((signed char)4), ((signed char)-17)))));
                                arr_19 [i_2] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_14 [i_6] [i_5] [(_Bool)1] [i_3] [i_2])))), (((/* implicit */int) max((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_14 [i_2] [i_3] [i_3] [(_Bool)1] [i_3]))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [(signed char)0]) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_15 [(unsigned short)10] [17] [i_3] [i_3] [(unsigned short)10])) : (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_6])), (((signed char) arr_10 [i_2] [4LL] [i_5] [4LL]))))))))));
                            }
                        } 
                    } 
                } 
                var_19 = arr_2 [i_2];
                arr_20 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((max((((/* implicit */long long int) (unsigned short)22)), (arr_7 [i_3]))), (((/* implicit */long long int) arr_14 [i_3] [i_3] [(_Bool)1] [(unsigned short)7] [i_2])))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_2] [i_2] [i_2])), (arr_12 [i_2])))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)5))));
                            var_21 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [(_Bool)1]))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (signed char)6)))) : (((((/* implicit */_Bool) (unsigned short)33414)) ? (((/* implicit */int) (unsigned short)496)) : (16777215)))))), (var_1)));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_16);
                            var_22 = ((/* implicit */unsigned char) arr_24 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) (~(arr_16 [i_9 - 1] [(unsigned short)14] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                var_24 = (-(((arr_6 [i_9 + 1]) ? (((/* implicit */int) (unsigned short)11199)) : (((/* implicit */int) arr_6 [i_9 + 1])))));
                arr_31 [i_9] = ((/* implicit */short) var_14);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)177)) - (157)))))) | (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_0) : (-9223372036854775776LL)))))));
}
