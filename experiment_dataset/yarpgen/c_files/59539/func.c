/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59539
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 776550013U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (4294967295U)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 16U)) != (arr_4 [i_0] [i_0] [i_0]))))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) % (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0]))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1]);
            var_20 *= ((unsigned char) (short)-8064);
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [2LL] [i_0]))))) * (((/* implicit */int) ((unsigned short) (unsigned char)0)))));
        }
        for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_5 [i_0] [10U] [6ULL]) ? (((/* implicit */int) arr_5 [i_3] [(short)8] [(signed char)10])) : (((/* implicit */int) arr_5 [i_3] [0U] [(unsigned char)8])))))));
                        arr_20 [i_4] [i_0] = ((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) var_16);
            var_24 = ((/* implicit */unsigned short) arr_18 [i_3 + 3] [10U] [i_3 + 3] [i_3 - 1] [i_3] [3]);
            var_25 = ((/* implicit */unsigned char) arr_3 [0] [i_0] [i_0]);
        }
        arr_21 [i_0 + 2] [i_0] = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 + 1] [i_0]);
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) var_3);
                        var_27 &= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) * (arr_7 [i_0 - 1] [i_0 - 1] [i_8]));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */signed char) ((unsigned short) ((((long long int) var_10)) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_16)))))));
    var_29 += ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (var_12)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)129)))))))));
    var_30 = ((/* implicit */short) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_7)))) || (var_10)));
}
