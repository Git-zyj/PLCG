/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93529
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
    var_20 = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) (short)15329)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19)))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (var_18)))) ? (var_6) : (((/* implicit */unsigned long long int) var_16))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)48724)) : (((/* implicit */int) arr_1 [i_2]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (var_10)))))) ? (((unsigned long long int) (~(((/* implicit */int) (short)-10692))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) >> (((((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) - (31773))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (364068438U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (short)-30925)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (9019538225430837401LL))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_2] [i_3] [i_4])) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_2] [i_1])))))));
                                arr_15 [i_1] [i_3] = ((/* implicit */signed char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48341))) / (18446744073709551612ULL))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1] [i_2])), (var_5)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0 + 2]))) <= (3267767466U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1995)) ? (((/* implicit */int) (unsigned short)6089)) : (((/* implicit */int) (short)-10692))))) : (((((/* implicit */_Bool) var_18)) ? (arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 2]) : (var_15))))))));
                                var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) (+(var_13))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 3] [i_0 - 4] [i_0 - 2]))) : (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0 - 2])), (var_18)))))));
                            }
                        } 
                    } 
                }
                var_26 ^= ((/* implicit */unsigned int) min((((((arr_12 [(unsigned short)6] [(unsigned short)6] [i_1] [i_1 - 1] [i_1 - 1]) ? (var_6) : (((/* implicit */unsigned long long int) var_18)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))))), (((/* implicit */unsigned long long int) ((((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0])))) : (((/* implicit */int) arr_13 [i_0 - 3])))))));
                var_27 = ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1] [i_1 - 1]);
            }
        } 
    } 
    var_28 += ((/* implicit */signed char) ((unsigned int) ((_Bool) min((var_5), (((/* implicit */unsigned int) var_4))))));
}
