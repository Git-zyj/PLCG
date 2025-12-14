/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8622
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
    var_13 = ((/* implicit */long long int) ((unsigned char) ((((2172930995593705279ULL) * (2172930995593705273ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_9)))))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((2172930995593705279ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_1 [i_0]))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_6 [i_1 + 2] [i_1 + 1] [i_1]))) != ((~(arr_6 [i_1 + 2] [8ULL] [i_0])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1 + 1] = ((/* implicit */unsigned char) ((arr_4 [i_1 + 1]) <= (65970697666560ULL)));
                    arr_10 [7] [i_1 + 1] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) 2172930995593705279ULL))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) max((arr_0 [i_3 + 3] [i_1 + 1]), (min((arr_0 [i_3 - 1] [i_1 - 1]), (arr_0 [i_3 - 1] [i_1 + 2])))));
                    var_18 *= ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    arr_14 [i_0] [i_1 + 2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((~(var_12))) >> (((((/* implicit */int) var_1)) - (28406)))))), ((~(max((((/* implicit */unsigned long long int) (signed char)-89)), (arr_6 [i_3] [i_1] [i_0])))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)17549))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) ^ (var_7)))));
                    arr_16 [i_1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((min((var_11), (arr_6 [i_3 + 3] [i_0] [i_0]))) <= (min((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */short) min((max((arr_12 [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)5] [(unsigned char)5] [i_0]))))))), (max((2172930995593705279ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] |= (_Bool)1;
                                var_20 = ((/* implicit */short) (~(arr_21 [i_6] [i_4 + 1] [i_1] [i_0])));
                                arr_27 [i_4] [i_1] [i_4] [i_4 + 1] [i_5] [i_5] = ((/* implicit */unsigned char) arr_22 [i_4]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (~(((min((262143), (-1))) ^ (((/* implicit */int) (signed char)-89))))));
}
