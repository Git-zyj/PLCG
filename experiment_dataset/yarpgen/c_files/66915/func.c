/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66915
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
    var_18 = ((((-1LL) - (max((3LL), ((-9223372036854775807LL - 1LL)))))) & (-2175178537840841126LL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) >= (2431414068953419927LL))))));
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) >= (var_5)))));
                    var_20 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_6 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) && (((/* implicit */_Bool) arr_7 [i_2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_0] [i_2] [(unsigned char)9] [i_2] = max((arr_0 [i_0]), (((arr_0 [i_0]) | (5LL))));
                                var_21 = (-(arr_10 [i_0] [i_0] [(unsigned short)3] [i_4]));
                                var_22 = ((/* implicit */long long int) max((var_22), (arr_12 [i_0] [i_1] [i_1] [(unsigned char)7] [(unsigned char)7] [(unsigned short)4])));
                                var_23 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) max((min((max((-9223372036854775805LL), (var_11))), (((9223372036854775807LL) / (var_14))))), (max((((/* implicit */long long int) ((unsigned short) (unsigned char)252))), ((+(arr_9 [i_2] [(unsigned char)10] [(unsigned char)10] [9LL])))))));
                }
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_5] [i_5] = (+(((arr_9 [i_5] [i_1] [i_5] [i_5]) / (-9223372036854775789LL))));
                    var_25 |= (+(arr_5 [i_0] [i_1] [i_5]));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_26 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) (unsigned short)53308)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))) : (arr_5 [(unsigned char)4] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5))))))) == (((((-16LL) | (var_11))) % (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1] [(unsigned short)6]), (arr_14 [i_6] [i_1] [i_1] [i_0])))))))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((arr_19 [i_0] [i_0] [i_0] [12LL]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_6])) ? (((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) ((unsigned char) -9223372036854775805LL)))))))))));
                }
                var_28 = ((/* implicit */unsigned short) max((((arr_17 [i_0] [i_0]) & (arr_17 [i_0] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -8694991219758404031LL)))))));
            }
        } 
    } 
}
