/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86457
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
    var_18 = ((/* implicit */short) max((((signed char) (+(((/* implicit */int) (unsigned char)217))))), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) (((((+(-795652723))) - (((/* implicit */int) (unsigned short)35609)))) + (((/* implicit */int) (unsigned short)35606))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)38);
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (-1307696711))))) : (((/* implicit */int) (unsigned short)35609))));
    var_21 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_5 [(short)21] [i_4 + 3]))) % ((+(arr_5 [i_4] [i_4 + 1])))));
                    arr_15 [10LL] [i_4] [i_4] = ((/* implicit */unsigned short) ((int) max((var_8), (((/* implicit */long long int) arr_14 [i_4 + 3] [i_4 + 1] [i_4])))));
                    var_23 *= ((/* implicit */signed char) min((((((/* implicit */int) min((((/* implicit */short) var_10)), ((short)16564)))) / (((/* implicit */int) (signed char)-64)))), ((((+(((/* implicit */int) arr_12 [(signed char)11] [i_3])))) / (((((/* implicit */_Bool) (unsigned short)35606)) ? (((/* implicit */int) (signed char)124)) : (-1242401448)))))));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32763)) ? (((((/* implicit */int) arr_10 [i_2] [i_2])) * (((/* implicit */int) var_15)))) : (arr_4 [(signed char)14] [i_3]))) / (arr_4 [i_7] [i_2])));
                                var_25 = var_1;
                                arr_25 [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_8 [(signed char)13]))))) : (((/* implicit */int) arr_13 [3LL] [13] [i_5] [i_5]))));
                                var_26 += ((/* implicit */int) ((long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)35613)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) var_17);
                    arr_26 [(signed char)8] [(signed char)8] [i_2] |= ((/* implicit */long long int) 0);
                }
                var_28 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_0 [i_2] [i_3]))))));
                var_29 ^= ((/* implicit */signed char) ((short) min((-308507752731802258LL), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_2] [(signed char)7] [i_2] [(signed char)7])) % (502777593)))))));
            }
        } 
    } 
}
