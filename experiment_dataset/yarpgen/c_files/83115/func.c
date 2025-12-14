/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83115
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
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (+((-(arr_3 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_0 - 1] [0ULL] [i_3] [i_0 + 1] [(_Bool)1]), (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [(unsigned short)15] [(unsigned char)10] [i_4] [i_4 - 4] [i_0] [11ULL]))))) ? (((((((/* implicit */int) (unsigned short)61536)) == (((/* implicit */int) var_5)))) ? ((+(((/* implicit */int) (unsigned char)36)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_2)))))) : ((+((+(((/* implicit */int) arr_0 [i_0]))))))));
                            arr_14 [i_3] [i_3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_2 [i_1 + 3])), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (16012951346519492339ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_0 - 2] [i_2]))))) : (min((var_1), (((/* implicit */unsigned int) var_8))))))));
                            var_11 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_1] [i_1 - 1]);
                        }
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) arr_6 [i_2 - 4])), (arr_0 [i_2 - 1])))))));
                        arr_15 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) var_3);
                        arr_16 [i_0] [i_0] [i_3] [2U] = ((/* implicit */signed char) ((min((((/* implicit */int) var_9)), (arr_8 [i_3] [i_3] [i_3] [i_0 - 4]))) > (((/* implicit */int) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_13 [i_5 - 1] [i_0 - 3] [i_2 - 2] [i_5] [i_0 - 3]))));
                        arr_19 [i_5] [i_5] [i_2] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)15);
                    }
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_6] [i_6] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_6 - 1] [i_1] [i_1] [i_0 - 3]))))), (max((8846576326296834666LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))))))));
                        arr_25 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned short) arr_4 [i_6 - 2])), (var_3)));
                        arr_26 [10ULL] [i_1] [i_6] = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_0] [(unsigned short)3] [i_2] [15])))))), (max((arr_17 [i_2 - 1] [i_2] [i_2] [i_2]), ((-(((/* implicit */int) var_9))))))));
                        arr_27 [(signed char)3] [i_1] [i_1] [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 - 3] [i_6] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_18 [i_6 - 1] [i_6] [i_1 + 2])))))) : (((((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6] [i_1 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6 - 2] [i_6] [i_1 + 2])))))));
                    }
                    arr_28 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 4] [i_2 - 1] [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_1 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 4] [i_0 - 4] [i_0] [(unsigned char)17] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (-(-8846576326296834683LL)));
}
