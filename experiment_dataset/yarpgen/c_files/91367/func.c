/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91367
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
    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_6))) ? (((((/* implicit */_Bool) var_14)) ? (var_15) : (var_9))) : (max((-1), (((/* implicit */int) (unsigned char)209))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) <= (((((/* implicit */_Bool) (signed char)96)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2])) ? (var_13) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2])))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (-(-1)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_3] [i_0]))))) ? (arr_14 [i_0] [i_3] [i_4]) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_9 [(signed char)9] [i_4] [2U] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3]))))))) ? (((((((/* implicit */_Bool) -5)) ? (1632450280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))))) << (((((((/* implicit */_Bool) 3236296908U)) ? (((/* implicit */unsigned int) var_15)) : (var_14))) - (1690231315U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [0U] [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_3] [i_5] [i_6])) == (var_13)))) : (((/* implicit */int) var_2)));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [7] [i_4] [i_4] [i_5] [i_5] [i_4])) ? (((/* implicit */int) ((_Bool) var_12))) : (((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) (unsigned short)32208)))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (max(((unsigned char)231), ((unsigned char)31)))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-52))) && (((/* implicit */_Bool) min((arr_6 [i_3] [i_5] [i_3]), (var_0))))))) : (((((((/* implicit */_Bool) 4165777477U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)0)))) | (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)3])))))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((-(arr_16 [i_0] [i_3] [i_4] [i_4] [i_6]))) + ((((-(((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_3] [3])) : (((/* implicit */int) arr_3 [i_6])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned char) max((((int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) min((arr_7 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_0]), (((/* implicit */unsigned int) (unsigned char)222))))) ? (max((((/* implicit */int) (_Bool)1)), (var_15))) : (((((/* implicit */int) (signed char)77)) * (((/* implicit */int) (short)-8444))))))));
        var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_17 [i_0] [4U] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
}
