/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62537
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
    var_15 += ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((var_3) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_2])))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)7);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) * (((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3 - 1]))) : (((unsigned long long int) arr_6 [i_3] [i_1] [i_3]))))));
                        var_17 = ((/* implicit */short) (((~(((/* implicit */int) min((((/* implicit */short) var_4)), (var_7)))))) | (((/* implicit */int) ((unsigned char) arr_10 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        arr_15 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((var_4), (var_8))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_2] [i_1] [(unsigned short)12])) ? (((/* implicit */int) ((var_14) || (((/* implicit */_Bool) 13474169618084641735ULL))))) : (((/* implicit */int) ((signed char) (_Bool)1)))))), (arr_11 [i_1] [i_1] [i_1] [i_1] [(unsigned short)16])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0 - 1] [i_0 - 1])))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_6])))) ? (((arr_16 [i_6]) % (arr_16 [i_6]))) : (((/* implicit */int) ((short) arr_16 [i_6]))))))));
                            var_21 = ((/* implicit */int) arr_3 [i_1] [i_2] [i_1]);
                        }
                    }
                }
            } 
        } 
    } 
}
