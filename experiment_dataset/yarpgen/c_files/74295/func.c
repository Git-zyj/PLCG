/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74295
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */signed char) (+(max((min((((/* implicit */long long int) (short)22849)), (8682103549124319713LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) == (8682103549124319713LL))))))));
                                var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_6)))), (min((((/* implicit */unsigned char) (_Bool)1)), (arr_6 [i_0])))))), ((unsigned short)15)));
                                arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [(signed char)11] = ((/* implicit */signed char) var_3);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (unsigned char)14)), (11227753454353997204ULL)))));
                                var_21 = ((/* implicit */signed char) arr_9 [i_4 - 2] [i_1] [i_2 - 1] [i_4 + 1] [i_0]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
                    var_23 = ((/* implicit */int) var_4);
                    var_24 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [7ULL])) ? (arr_8 [i_0] [i_2 - 1] [7U] [i_2 + 1]) : (arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((((arr_8 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) + (2147483647))) << (((((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])) - (10)))))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [7ULL])) ? (arr_8 [i_0] [i_2 - 1] [7U] [i_2 + 1]) : (arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((((((arr_8 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1])) - (10))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((arr_10 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13))))));
                        arr_18 [i_5] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned char) arr_3 [i_0]);
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) : (256785495U)))) || (((/* implicit */_Bool) arr_15 [1] [1] [i_1 - 1] [1]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_16))))) : (((long long int) arr_2 [i_0]))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                    }
                }
            } 
        } 
    } 
    var_28 -= 13328015909561580567ULL;
}
