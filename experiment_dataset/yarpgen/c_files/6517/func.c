/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6517
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -19LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 574576203U)) ? (arr_2 [i_0]) : (arr_3 [i_0])))) ? ((~(var_7))) : ((~(2440650208U))))) : (((/* implicit */unsigned int) arr_1 [i_0]))));
        arr_5 [i_0] = ((short) ((((/* implicit */_Bool) ((unsigned int) 574576216U))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (-19LL)));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) || ((_Bool)0))) ? (((/* implicit */int) min(((short)(-32767 - 1)), (arr_0 [i_0] [i_0])))) : (arr_1 [i_0]))) : ((-(-1615271805)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((-14) >= (arr_8 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) (-(arr_8 [1U]))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1743673491)) : (-32LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62836))) : (var_10))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28620)) ? ((+(19LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_7 [i_2]))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */long long int) arr_8 [i_2])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1871544575)) : (var_6)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((int) ((int) -9LL)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36920)) ? (((/* implicit */long long int) 540700348)) : (9061299696336457430LL)));
                    var_21 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)75))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) var_3);
                        var_23 = ((/* implicit */long long int) (~(min((-1), ((~(((/* implicit */int) arr_19 [10LL] [i_4] [i_4]))))))));
                        arr_23 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((arr_14 [i_3]) >= (((/* implicit */unsigned int) ((((/* implicit */int) (short)32759)) + (((/* implicit */int) var_9))))))))));
                        arr_24 [i_3] [i_4] [0U] [i_4] = ((/* implicit */int) ((arr_20 [i_4] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-32751))))))) >= (var_12)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((arr_27 [i_4] [i_7 + 1] [i_7] [i_7] [i_7 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220)))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7] [i_7 - 1] [i_5])) ? (arr_26 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_3]) : (((/* implicit */int) var_8))));
                        var_27 = ((/* implicit */int) (+(arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1])));
                        arr_29 [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_28 [i_7] [i_4] [i_4] [i_3]))));
                    }
                    var_28 = ((/* implicit */int) min((((/* implicit */long long int) -444192774)), (arr_27 [i_4] [i_5] [i_4] [i_4] [i_4])));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -1407491469)) ? (((((/* implicit */_Bool) var_3)) ? (-5904242598980236438LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))));
}
