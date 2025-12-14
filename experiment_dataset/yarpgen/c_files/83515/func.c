/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83515
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
    var_18 = ((/* implicit */_Bool) var_17);
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) var_3)) - (1)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (3579691363U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) (short)32))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_0] [(_Bool)1] [16U])), (var_12)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)19))))) <= ((+(arr_3 [i_2])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned char) ((((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) (unsigned char)145)))) ? (((/* implicit */int) ((((unsigned int) (unsigned char)252)) <= (((((/* implicit */_Bool) 3671310264U)) ? (3579691363U) : (((/* implicit */unsigned int) var_4))))))) : (max((((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1]))), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_2))))))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((short)6534), (((/* implicit */short) var_9)))))));
                            var_26 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (+(var_17)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_4] [i_5 + 1])) : (arr_10 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) var_4)))));
                            arr_17 [i_0] [i_1] [i_5 + 1] [i_5 + 1] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            arr_23 [(_Bool)1] [i_0] [i_0] [i_7] |= ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_6 + 1] [14U]);
                            /* LoopSeq 2 */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (max((((/* implicit */int) arr_7 [i_1] [(short)12] [i_6 + 2] [i_6 + 1])), (((arr_18 [i_1] [i_7] [(_Bool)1]) ? (((/* implicit */int) (short)6556)) : (((/* implicit */int) var_11)))))) : (2147483632));
                                var_28 = ((/* implicit */_Bool) (~(var_15)));
                                var_29 ^= ((/* implicit */signed char) min((((/* implicit */short) var_2)), (((short) (_Bool)1))));
                            }
                            for (unsigned char i_9 = 1; i_9 < 17; i_9 += 3) 
                            {
                                arr_28 [i_1] [i_9] [3U] [i_0] [3U] [(short)16] [i_1] = ((/* implicit */unsigned char) (+(((arr_18 [i_6 - 2] [i_7] [i_0]) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_18 [i_6 + 2] [i_9] [i_0]))))));
                                arr_29 [i_0] = ((/* implicit */signed char) min((max((((unsigned int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [(_Bool)0] [(_Bool)0] [i_1] [(_Bool)0])) & (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) max((arr_26 [i_6] [i_6] [i_6 + 2] [i_6 - 2] [i_6 - 3] [i_9 - 1]), (((/* implicit */unsigned char) var_11)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
