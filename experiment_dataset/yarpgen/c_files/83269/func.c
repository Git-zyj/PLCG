/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83269
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [0ULL] [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_12) + (5248420362131217615LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) < (var_8))))) : ((~(var_1)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_0] [i_0]) : (var_9))))));
                            arr_14 [i_4] [11U] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10)))))));
                        }
                        arr_15 [0U] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1]);
                    }
                    arr_16 [i_2] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & ((-(var_1))));
                    var_18 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_8)))));
                }
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                arr_31 [i_6] [15U] [i_7] [i_8] [i_5 - 1] = ((((/* implicit */_Bool) max((var_6), (var_11)))) || (((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_0 [(_Bool)0])), (var_8)))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (arr_20 [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_27 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_5 + 1] [i_8 + 2] [i_6])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))))))));
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) < (var_1)))) % (((/* implicit */int) arr_18 [i_5 + 1]))))), (arr_20 [i_7])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (arr_27 [i_5] [i_5] [i_5 + 1] [i_5]) : (((/* implicit */long long int) arr_4 [i_7] [i_6] [i_5]))))))) ? (arr_20 [i_5 + 1]) : (((((/* implicit */_Bool) -7817219437805125120LL)) ? (2563860475U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))));
                }
            } 
        } 
    } 
}
