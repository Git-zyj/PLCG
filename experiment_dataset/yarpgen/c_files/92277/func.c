/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92277
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((int) var_5));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_21 = ((/* implicit */signed char) var_19);
                    var_22 = max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-4181)) : (((/* implicit */int) var_7))))))), (((var_9) ? (((((/* implicit */_Bool) 2ULL)) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4181))))) : (((/* implicit */unsigned long long int) max((459891676), (((/* implicit */int) (short)-30652))))))));
                    var_23 = (~(((/* implicit */int) (short)-4181)));
                }
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])))));
                /* LoopNest 3 */
                for (short i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            {
                                arr_15 [i_0] [(short)13] [i_3] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((18446744073709551613ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53795)))));
                                arr_16 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [(_Bool)1] = (short)-4205;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (short)-5586)) : (-1252050703))))));
                var_25 -= ((/* implicit */unsigned short) var_16);
                arr_24 [i_6] [i_6] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)14414)), (-2042799022))) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)11)))))) : (((((/* implicit */int) var_18)) / (((/* implicit */int) arr_19 [i_6] [i_7]))))));
            }
        } 
    } 
}
