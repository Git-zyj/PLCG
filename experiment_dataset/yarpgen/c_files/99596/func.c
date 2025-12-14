/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99596
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)19)), (1024ULL))) != (((/* implicit */unsigned long long int) var_3))))) > (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */_Bool) ((int) ((unsigned char) var_14)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = min((((((/* implicit */_Bool) 18446744073709550593ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (10ULL))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) & (511ULL)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [(unsigned short)6] [i_4] = ((/* implicit */unsigned long long int) -1391899530);
                            arr_14 [(signed char)9] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) ((unsigned short) 502ULL)));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1618815359)) ? (min((var_2), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)16688)) != (((/* implicit */int) var_7)))))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((18446744073709551596ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            arr_17 [i_0] [i_5] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((10ULL) | (((/* implicit */unsigned long long int) arr_9 [i_5] [i_0] [i_1] [i_0])))))));
                            arr_18 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((arr_3 [10ULL] [i_0]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)0)))) - (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2] [i_0] [i_5])) ? (((/* implicit */int) (signed char)74)) : (var_8))))))));
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] = ((/* implicit */unsigned long long int) ((int) ((unsigned short) var_5)));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -1618815359))) ? (((/* implicit */int) ((unsigned short) -1))) : (((/* implicit */int) var_0))));
                            var_23 = ((/* implicit */unsigned char) var_12);
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 18446744073709551605ULL)))));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) ((((unsigned long long int) 18446744073709551615ULL)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)286)))));
                            arr_24 [i_2] [i_0] [i_2] [i_0] [(unsigned short)15] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551606ULL)));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_2] [i_8])) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) > (2980901663190025353ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [8ULL] [i_1] [i_1] [i_8] [i_8] [(_Bool)1])) <= (((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-92)) ? (1618815359) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)4095))))));
                        arr_27 [i_0] [12ULL] [0] [i_0] [11ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (1052ULL)))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (unsigned char)205)), (var_15))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1618815365)) || (((/* implicit */_Bool) var_1))))))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned long long int) var_8);
                        arr_31 [i_0] [i_1] [i_0] [i_1] [i_0] = (((~(((/* implicit */int) (unsigned short)1841)))) & (((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9])));
                        arr_32 [i_0] [i_0] [i_1] [i_2] [i_9 - 1] [i_9] = ((((/* implicit */_Bool) 1618815372)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                    }
                }
            } 
        } 
    } 
}
