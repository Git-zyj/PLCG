/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61722
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 872637622)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)8])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))), (max((((arr_1 [i_0 - 1] [i_0]) / (((/* implicit */long long int) 872637622)))), (((-7276382262494809510LL) | (-1118915992599921560LL)))))));
        var_19 = ((/* implicit */long long int) ((max((max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) 872637622)))), (((/* implicit */long long int) max((var_0), (((/* implicit */int) (unsigned short)27415))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((max((-7433397833577749621LL), (7276382262494809510LL))) >= (((/* implicit */long long int) -872637623))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 *= (((((-(0LL))) ^ (((((/* implicit */_Bool) 7276382262494809509LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-3990395527179164660LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), (-872637623)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [2LL] [i_3] [i_3] [i_0 - 1] [i_0] [i_2] &= ((((/* implicit */_Bool) (((~(arr_1 [i_2] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7276382262494809509LL)) && (((/* implicit */_Bool) 1985988497))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) arr_12 [i_2]))))) > ((~(arr_1 [i_1] [i_4])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 7276382262494809510LL)) ? (var_6) : (760792098615381979LL))) < (((((/* implicit */long long int) arr_5 [i_0] [i_0 - 1] [i_0] [i_0])) + (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))));
                                arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_11 [i_0 + 1] [1LL] [1LL] [i_0] [i_0]), (var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_12)) ? (9223372036854775807LL) : (760792098615381979LL))))) % (((/* implicit */long long int) (+(((/* implicit */int) (!(var_2))))))));
    var_22 = ((/* implicit */long long int) ((2595943543837623810LL) >= ((-((~(-3990395527179164660LL)))))));
    var_23 = ((/* implicit */signed char) ((max((((((((/* implicit */int) var_16)) + (2147483647))) << (((872637622) - (872637622))))), (((((/* implicit */_Bool) -872637640)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)0)))))) & (max((872637620), (((/* implicit */int) (_Bool)1))))));
}
