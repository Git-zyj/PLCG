/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76436
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
    var_18 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0])))));
                    var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) - (15830107214310301062ULL)))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) + (2147483647))) >> (((((/* implicit */int) (short)-21598)) + (21602)))))) ? (max((16592098007785708816ULL), (683454874230707661ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)27375), ((short)0)))))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(signed char)10]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) : (arr_5 [i_0] [i_0]))))) << (((((int) -931520183)) + (931520207)))));
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)21579), ((short)21606))))) : (((((/* implicit */_Bool) (unsigned short)32764)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52409)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1132045410)) && (((/* implicit */_Bool) arr_2 [i_1] [i_2])))) ? (((/* implicit */int) arr_3 [2] [i_0] [i_2])) : (((/* implicit */int) (short)21579))))) : (((((/* implicit */_Bool) (~(18ULL)))) ? (((2828601246U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (short)32640)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2435147609U)))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_4] [i_0] [i_4 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-106)) >= (((/* implicit */int) (unsigned short)32772)))))));
                        var_22 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) arr_11 [i_4] [i_4 - 1]))), (((11349125448740879255ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [(unsigned short)10] [i_4 + 1])))))));
                        var_23 -= ((((((/* implicit */_Bool) (~(9223370937343148032ULL)))) ? (((((/* implicit */_Bool) 4491044069565177551ULL)) ? (3928794753356635608ULL) : (arr_9 [i_0] [2] [2] [2] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) 20U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3422584438U)))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
}
