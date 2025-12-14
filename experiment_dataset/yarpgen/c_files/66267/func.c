/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66267
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_14)))) : (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) max((4294967287U), (((/* implicit */unsigned int) var_12)))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (signed char)56)) : (-1613580642))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */int) arr_4 [i_0]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_18 &= ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)-118)) | (((/* implicit */int) var_12))))));
                        arr_13 [i_0 + 1] [i_0] [i_3] = ((/* implicit */int) var_0);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_1] [i_1]))));
                            var_20 ^= ((/* implicit */signed char) arr_12 [i_0 - 1] [i_4] [i_0 - 1] [i_1]);
                            var_21 = (~((~(-7121433286725110713LL))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))))))));
                        }
                        for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 4) 
                        {
                            var_23 |= ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [i_2] [i_0 - 1] [i_1] [i_5 - 1]);
                            var_24 -= ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_1])) ? (((4294967287U) << (((-7808123649838365271LL) + (7808123649838365271LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_5] [i_0 + 2]))));
                        }
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (signed char)90)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) 5925855))));
                    }
                }
                for (int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_0 + 3] [i_0 + 3] [i_0])), (3433948442U)))) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_6])) : (((((arr_8 [i_6] [i_6] [i_0] [i_6]) >> (((((-2147483638) - (-2147483628))) + (23))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_6])), (var_10)))))))));
                    var_27 = ((/* implicit */int) (signed char)127);
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (0ULL)));
                    var_29 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)27)) : (2147483647)));
                }
                var_30 |= ((/* implicit */unsigned int) arr_1 [i_1]);
            }
        } 
    } 
    var_31 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (_Bool)1)))))))));
}
