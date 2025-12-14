/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94509
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [12ULL] [i_2] [i_1] [i_2] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)73)))) != (((/* implicit */int) arr_3 [16] [16]))));
                    var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)61646))))));
                    var_16 = min((((/* implicit */unsigned long long int) (_Bool)1)), (230875986104769836ULL));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) ? ((-(((/* implicit */int) (unsigned char)121)))) : (((/* implicit */int) arr_8 [i_4]))));
                var_18 -= ((/* implicit */int) (_Bool)0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_23 [i_5 - 2] [i_3] [i_3] [(signed char)18] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [18] [i_4])))))));
                                var_19 += ((/* implicit */int) var_6);
                                var_20 -= ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) arr_6 [i_5 - 1] [i_7 - 1])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_7 - 2])));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_6] [i_3] [i_3])) ? (1024150292) : (((arr_0 [i_5 + 1] [i_6]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)117))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((445922946) + (1226388533))))));
                    var_22 = ((/* implicit */unsigned long long int) ((8885739657262043929LL) / (5158269340593423388LL)));
                    arr_25 [i_3] [i_4] [i_5] = (((~(((/* implicit */int) var_1)))) % (((/* implicit */int) arr_8 [i_5 + 2])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((var_5) + (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) << (((/* implicit */int) var_2))))))))));
}
