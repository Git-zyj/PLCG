/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63140
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3] [13] [(unsigned char)6] [i_1] = ((/* implicit */unsigned int) var_5);
                                arr_14 [i_1] [i_1] [i_2 - 4] [i_3 + 1] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2 - 3] [i_2 - 3] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1])) : (-197974384)))))));
                                var_12 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    arr_15 [4U] [(signed char)15] [i_1] [i_2] = -6512466329662059248LL;
                    var_13 = (-(-197974401));
                    var_14 = ((/* implicit */signed char) var_8);
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_15 ^= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    var_16 = ((/* implicit */_Bool) var_10);
                    arr_20 [i_1] [(unsigned char)14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5]))))), (min((arr_16 [i_0] [i_1] [i_5] [i_5]), (((/* implicit */long long int) (unsigned char)255)))))))));
                    var_17 -= ((/* implicit */unsigned char) ((signed char) (+(arr_3 [i_5]))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_0] [9U] [i_0] [i_1] = ((/* implicit */unsigned short) -197974406);
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1])) : (197974384)));
                    arr_25 [(_Bool)1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)118))));
                    arr_26 [(short)14] [i_1] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_1] [i_1] [i_0 - 1]));
                }
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((((var_4) == (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))), (((/* implicit */unsigned long long int) var_10))));
}
