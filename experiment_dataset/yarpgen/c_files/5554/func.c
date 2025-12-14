/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5554
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) 221674276)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)37378)), (-1))))))) ? (((((/* implicit */int) var_11)) & (((((/* implicit */_Bool) 4)) ? (((/* implicit */int) (short)-1707)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (min((-2147483646), (2147483645)))))) : (((long long int) ((var_14) / (((/* implicit */int) arr_1 [i_0])))))));
        var_20 = ((/* implicit */short) max((var_20), (min((((/* implicit */short) arr_1 [i_0])), (((short) min((((/* implicit */unsigned long long int) var_16)), (var_6))))))));
        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13568))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (var_5)))) : (var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (arr_6 [i_0] [(unsigned short)6] [(_Bool)1] [(unsigned short)6]))))));
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)38351))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))) : (arr_4 [i_0] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) 8796093021952ULL);
                                var_25 = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6429)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4]))))), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3 + 1] [i_4 + 1] [i_4]))));
                                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_8 [i_0] [i_4 + 1] [i_4] [i_4] [i_4 + 1]))))));
                                var_27 *= ((/* implicit */short) max(((~((~(arr_8 [i_2] [10] [i_2] [i_1] [i_2]))))), (((/* implicit */int) arr_9 [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1]))));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_17)))))) + (min((((/* implicit */int) ((((/* implicit */_Bool) -17)) && ((_Bool)1)))), (((((/* implicit */_Bool) (short)-1711)) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) arr_1 [i_5]))))))));
        var_29 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)120)), ((unsigned short)38352)));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-1706), (((/* implicit */short) arr_13 [i_5] [i_5])))))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
    }
    var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-1709)) : (((/* implicit */int) (short)-1713))))), (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    var_32 = (~(((((/* implicit */int) var_8)) ^ (var_15))));
}
