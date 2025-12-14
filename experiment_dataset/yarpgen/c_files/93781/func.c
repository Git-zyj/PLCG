/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93781
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((signed char) 4294967295U)))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_7 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_6 [i_1] [i_1 + 2] [i_2]), (((/* implicit */unsigned short) arr_4 [i_1] [i_2])))))));
                    var_17 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned short)13870)))), (((((/* implicit */_Bool) var_6)) || (var_1)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_4)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    var_18 = ((/* implicit */unsigned short) var_12);
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0])))))))))));
                    var_20 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21588))));
                    var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) < (arr_10 [i_3] [i_3] [i_1] [i_3])))))) + (((/* implicit */int) var_9))));
                    arr_11 [i_1] [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)27)) ? (16768709963438735956ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_22 = ((/* implicit */unsigned short) min((arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) var_1))));
                }
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) var_10);
                    arr_16 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_1] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_0]))) : (var_4)))), (((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_8 [i_1] [i_4] [i_1] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_4] [i_0])), (arr_14 [i_1] [i_1])))))))));
                        var_23 += ((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_5] [i_5] [i_5]), (((/* implicit */long long int) (-(arr_12 [i_0] [i_1]))))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_24 ^= ((/* implicit */_Bool) (+(((((arr_10 [i_1] [i_1 + 1] [i_0] [i_1]) + (2147483647))) << (((((arr_10 [i_1] [i_1 - 1] [i_0] [i_1]) + (760687233))) - (13)))))));
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                    arr_25 [i_1] [i_1] [i_6] = min((min((var_2), (((/* implicit */short) arr_22 [i_1 + 2] [i_1 - 1] [i_1 - 1])))), (((/* implicit */short) ((unsigned char) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 2]))));
                    arr_26 [i_0] [i_0] [i_6] &= ((/* implicit */unsigned short) max((var_1), (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < ((-(((/* implicit */int) var_11)))))))));
}
