/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57750
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
    var_18 += ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) & (((unsigned long long int) var_7))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_5 [i_2 + 2] [i_2 + 3] [i_2 + 1]))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_4 [i_1] [8LL] [i_0] [i_1]), (arr_4 [i_1] [(unsigned char)15] [(unsigned char)15] [i_1])))) ? (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */signed char) var_7))))) : (((/* implicit */int) min((var_2), (var_3)))))) * (((((((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_2])))) + (2147483647))) >> (((((/* implicit */int) var_16)) - (26679)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned char) ((unsigned char) (+(((/* implicit */int) (short)28478))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
    {
        var_22 = (~(((((/* implicit */_Bool) (short)-28478)) ? (-874384388) : (((/* implicit */int) arr_6 [i_3 + 1])))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) % (arr_2 [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -874384388)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_4 [i_3 - 2] [(unsigned short)16] [i_3 + 1] [i_3])))))));
        arr_8 [i_3] = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_3 - 1])))));
        arr_9 [i_3 - 1] [i_3] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3 - 2]))));
        var_24 = ((/* implicit */signed char) var_1);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_13 [i_4] [i_5] [i_5]) >= (((/* implicit */int) arr_15 [i_4] [i_4] [i_5]))))), (((((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)29297)))) << (((((/* implicit */int) (unsigned short)65277)) - (65263)))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_4])))))), (arr_2 [i_5] [i_6] [(unsigned short)15]))))));
                            var_27 &= ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_6 - 3])) || (((/* implicit */_Bool) var_15))))), (arr_3 [i_7]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_3 [i_4]))))));
            }
        } 
    } 
}
