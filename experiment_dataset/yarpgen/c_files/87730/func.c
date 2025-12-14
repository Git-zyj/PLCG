/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87730
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_2] = (-(((/* implicit */int) var_13)));
                        arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (arr_2 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_8 [i_0]))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (arr_1 [i_4])))) ? (((arr_3 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_8 [i_4]))))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_6 [i_0] [i_1])) / (((/* implicit */int) arr_7 [i_2] [i_0])))))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)0)))))));
                        var_19 = ((/* implicit */short) var_0);
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_15 [i_1] [i_2] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_12 [(unsigned char)19] [i_2 + 1] [i_2] [i_2 - 1] [i_2])))) < (((/* implicit */int) var_13))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                        var_21 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_2] [i_0] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */short) var_9);
                        var_23 = ((/* implicit */long long int) ((unsigned int) max((max((arr_2 [i_2 + 2] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((signed char) var_5))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) arr_14 [i_0] [i_2] [i_2] [i_2] [i_0] [i_1]))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) >= (685712909829968538LL)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1] [i_7]));
                            arr_20 [i_7] [i_2] [i_6] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [14U] [i_1] [14U] [i_1] [i_7]) & (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) arr_8 [i_6 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0]))));
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_1] [(signed char)0] [i_7])) > (((/* implicit */int) arr_16 [i_6] [i_0] [i_2 - 2] [i_6]))));
                        }
                    }
                    arr_21 [i_2] [i_2] [i_0] = ((long long int) var_1);
                    arr_22 [i_0] [i_2] [i_2] [i_2 + 1] = (+(((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1]))))))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_0));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) >> (((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (1575094191902846619LL)))))) ? (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_1))), (((((/* implicit */_Bool) 1958310436)) ? (-1419463535757748725LL) : (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_9)))))))));
}
