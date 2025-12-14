/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57771
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) == (((/* implicit */int) (unsigned char)226))))) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0 + 1])), (arr_3 [i_0] [i_1]))))));
                var_15 |= ((/* implicit */short) ((arr_0 [i_0]) / (-31LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_3] = ((/* implicit */short) ((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) -29LL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_10 [i_0 + 2] [1ULL] [i_2] [i_3]))))))) : ((-(arr_2 [i_0 + 3])))));
                            arr_15 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(-31LL))))));
                            arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) -28LL);
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? ((-(var_6))) : (((unsigned long long int) (unsigned char)227))))) ? (7706387423430928075LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_17 += (-(arr_2 [i_4]));
            var_18 = ((/* implicit */long long int) ((unsigned short) arr_22 [i_4] [i_5] [i_5]));
            arr_23 [i_4] [i_5] = ((((/* implicit */_Bool) arr_21 [i_5] [i_4] [i_4])) ? (((/* implicit */long long int) 13U)) : (((((/* implicit */_Bool) 4611686018427387903ULL)) ? (2111813775890721054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_4] [i_4]))))));
            var_19 -= ((/* implicit */_Bool) ((short) (signed char)1));
        }
        for (signed char i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            arr_26 [i_4] |= ((/* implicit */unsigned char) arr_24 [i_6 + 2]);
            /* LoopSeq 2 */
            for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_6] [i_7]))) / (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (772686145973605698LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 40LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))))));
                arr_30 [i_4] [i_6 - 2] = ((/* implicit */unsigned short) arr_29 [i_7 - 3] [i_6] [i_4] [i_4]);
                var_21 = ((/* implicit */unsigned long long int) var_8);
            }
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                arr_35 [i_4] = ((/* implicit */unsigned char) var_11);
                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_8])) ? (((arr_6 [i_6 - 2] [i_6 - 2]) ? (((/* implicit */int) arr_6 [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 2])))) : (((((/* implicit */int) arr_18 [i_4])) / ((+(((/* implicit */int) (unsigned char)63))))))));
                var_23 = ((/* implicit */short) arr_0 [i_6]);
                arr_36 [i_8] [i_6] [i_6] [i_4] = (-(((((/* implicit */unsigned long long int) arr_0 [i_6 + 1])) & (((((/* implicit */_Bool) arr_1 [i_4])) ? (4611686018427387903ULL) : (((/* implicit */unsigned long long int) arr_0 [i_4])))))));
            }
            var_24 = ((/* implicit */long long int) arr_20 [i_4]);
            arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_27 [i_4] [i_4] [i_6])) + (2147483647))) >> (((/* implicit */int) arr_13 [i_6]))))));
        }
        arr_38 [i_4] [i_4] = ((/* implicit */signed char) var_6);
        var_25 = ((/* implicit */long long int) arr_13 [i_4]);
        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4]))));
        arr_39 [i_4] [i_4] = ((/* implicit */long long int) arr_3 [i_4] [i_4]);
    }
}
