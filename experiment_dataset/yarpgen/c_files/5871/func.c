/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5871
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_1] [(unsigned char)4] [i_0]))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (35)))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)15)), (min((((/* implicit */int) (unsigned char)241)), (arr_5 [i_1] [i_0])))))) / (arr_3 [i_1] [i_1] [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))))) ? (((/* implicit */int) max(((signed char)-124), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) arr_10 [i_2] [i_0] [i_2] [i_2]))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17))))) < (((/* implicit */int) min(((short)-22), (((/* implicit */short) arr_10 [i_0] [i_1] [i_1] [i_0])))))));
                                arr_15 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) min(((!(((/* implicit */_Bool) -2147483642)))), (((((/* implicit */int) arr_4 [i_2] [i_1] [0U])) < (((((/* implicit */int) var_5)) >> (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)223)), ((+(((/* implicit */int) (signed char)1))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_18 &= ((/* implicit */signed char) min((((/* implicit */long long int) arr_13 [i_5] [i_5] [i_6] [i_5])), (arr_19 [8])));
                arr_21 [i_5] [i_5] [(unsigned short)4] |= ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) + ((~(((int) arr_20 [6LL]))))));
                arr_22 [i_5] [i_6] [i_6] = ((/* implicit */int) arr_8 [i_5]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_6])), (((((/* implicit */int) (unsigned char)2)) << (((((/* implicit */int) (unsigned char)238)) - (226)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_9))))) : (arr_3 [i_5] [i_5] [i_5])));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(var_7)));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            {
                arr_27 [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)255)))), (var_7)))) & (max(((~(((/* implicit */int) arr_24 [i_8])))), (((/* implicit */int) var_7))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (var_7)));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_22 -= (+(((arr_30 [i_7 + 2] [i_10 - 1]) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) - (((/* implicit */int) arr_32 [i_10 - 1] [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_7]))))))));
                            var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_30 [1LL] [i_8])) <= (((/* implicit */int) (unsigned char)13)))));
                            arr_33 [i_9] [i_9] = (+(((/* implicit */int) ((unsigned short) arr_29 [i_10] [i_9] [i_8] [i_7 + 2]))));
                            arr_34 [i_10 - 1] [i_9] [i_9] [i_7 - 1] = ((/* implicit */signed char) (unsigned char)240);
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) var_8);
                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) arr_29 [i_7] [2] [i_8] [i_8])) : (((/* implicit */int) arr_32 [i_7 + 2] [i_7] [i_7] [i_8] [i_8] [i_8])))))), ((((!(var_7))) ? (((/* implicit */int) max((var_4), ((unsigned char)245)))) : (((/* implicit */int) (short)32762))))));
            }
        } 
    } 
}
