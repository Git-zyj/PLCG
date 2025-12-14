/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55370
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1791462069)))) ? (((/* implicit */int) (unsigned char)124)) : (1581478382)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1500274322)) <= (var_9)))) : (-1791462069)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = -1791462069;
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -1791462077))) || (((/* implicit */_Bool) ((int) var_0)))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [3ULL] [i_0])), (4294967295U)))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)1)))) : (var_1)))));
                        arr_11 [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_10) : (((/* implicit */int) (signed char)123))))) ? (((/* implicit */int) var_3)) : (var_10))) / (((int) ((((/* implicit */_Bool) var_7)) ? (1791462060) : (((/* implicit */int) var_13)))))));
                        var_17 = ((/* implicit */signed char) max((1791462070), (1791462069)));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((4534078319288809512ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) -1)) + (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0U) : (((/* implicit */unsigned int) -1791462060)))))))));
                }
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */int) var_4);
                        var_21 -= (-(max((8388607U), (((/* implicit */unsigned int) (_Bool)1)))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1791462060)) ? (8388597U) : (var_9)))) ? (((/* implicit */int) (_Bool)1)) : (var_7)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != ((-2147483647 - 1)))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (var_4)));
                                arr_20 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) <= (max((((/* implicit */unsigned long long int) ((var_5) == ((-2147483647 - 1))))), (max((18446744073709551586ULL), (18446744073709551613ULL)))))));
                            }
                        } 
                    } 
                }
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1]);
            }
        } 
    } 
}
