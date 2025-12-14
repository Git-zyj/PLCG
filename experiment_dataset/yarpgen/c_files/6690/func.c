/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6690
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
    var_14 |= ((/* implicit */unsigned short) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36486))) : (((unsigned long long int) (signed char)51))));
    var_15 ^= ((/* implicit */unsigned int) (~((~(((576460752303423487ULL) | (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) / (arr_1 [(short)14])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [22])))) ? (max((4095U), (((/* implicit */unsigned int) (unsigned short)18266)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) var_0);
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(signed char)20] [(signed char)20]), (((/* implicit */short) (signed char)-63)))))) | (((max((var_2), (((/* implicit */unsigned int) var_7)))) & ((~(2783953208U)))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) % (arr_1 [i_0])));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >= ((~(((/* implicit */int) var_11))))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_19 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) 0U)))));
                            var_19 ^= max(((+(((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) var_13)));
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))) : (arr_14 [i_0] [i_3] [i_5] [i_6])))) % (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) || (((/* implicit */_Bool) 0U))))), (var_8)))));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] = ((/* implicit */unsigned char) (~(max((max((arr_14 [i_3] [i_3] [i_0] [i_0]), (((/* implicit */unsigned int) var_13)))), (var_2)))));
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
        {
            arr_25 [(signed char)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10)))))) ? (7U) : (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_5)))) | (((/* implicit */int) var_6)))))));
            arr_26 [i_0] [i_7] = ((/* implicit */signed char) (-(max((((/* implicit */int) (unsigned char)244)), ((~(((/* implicit */int) var_11))))))));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9986))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) % (7U)))));
}
