/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80313
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
    var_17 = ((/* implicit */unsigned short) var_3);
    var_18 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */long long int) var_15))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((short) (signed char)20))))) << (((((/* implicit */int) max((arr_4 [i_0] [i_0 - 2] [i_0 - 2]), (arr_4 [i_0] [i_0 - 2] [i_0 - 2])))) - (16861)))));
                arr_5 [i_0 - 3] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))) : (var_2))) != (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_0] [i_3 + 2] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))), (((/* implicit */unsigned int) (!(var_5))))));
                                var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_9 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 2]))), (-1656721907)));
                                var_21 = ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min((var_22), (arr_11 [i_0 + 2] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0])));
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)185))))) : (max((arr_9 [i_0] [i_0 - 2] [i_0] [i_0]), (arr_9 [i_0] [i_0 - 2] [i_2] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 1])))) ? (max((arr_2 [i_0 + 1] [i_0 - 2]), (arr_2 [i_0 - 3] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0 + 2] [i_0 - 3]) <= (arr_2 [i_0 + 1] [i_0 + 1])))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (var_11)));
                    }
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_21 [i_1] [i_0] = ((/* implicit */signed char) arr_2 [i_0 - 2] [i_0 + 2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_24 [i_0 + 1] [i_1] [i_0] = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned int) arr_20 [i_0 - 2] [i_0 - 3] [i_0 - 2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_6] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2])) && (((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2])))))));
                        arr_25 [i_0] [i_1] [i_0] [i_0] = max((((/* implicit */long long int) (!(((arr_12 [i_0] [i_0] [i_6] [i_6] [i_6] [i_7]) == (((/* implicit */int) (signed char)127))))))), (((max((var_11), (((/* implicit */long long int) arr_18 [i_0 + 2] [i_1] [i_6] [i_7])))) / (((/* implicit */long long int) 124166059)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6784583887548774604LL)) ? (arr_28 [i_8 - 1] [i_8 + 1] [i_6] [i_0 - 3] [i_0 - 1]) : (((/* implicit */int) (_Bool)1))));
                            arr_30 [i_0] = ((/* implicit */short) (+(arr_28 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned int) (signed char)-99);
                            arr_33 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_6] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0]))))));
                            var_27 = ((/* implicit */long long int) ((int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_3)) * (((/* implicit */int) var_4)))))));
                        }
                        var_28 = ((/* implicit */unsigned short) arr_32 [i_0] [i_0] [i_6] [i_7] [i_7] [i_0]);
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-112))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (arr_34 [i_10] [i_0] [i_10] [i_10])));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_13)))));
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -476197978)) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_13)))))));
}
