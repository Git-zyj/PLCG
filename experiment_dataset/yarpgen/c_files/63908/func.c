/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63908
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
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_5 [i_0]))))) | (max((6136487531448069611ULL), (var_2))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (9368705624696908679ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_2 + 1] [i_2 - 2] [i_2]))) | (var_2)))));
                                var_15 = ((min(((~(4332996731990928486ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_4]))))) & (((var_9) >> ((((+(arr_14 [i_2 - 1]))) - (7233902870139294706ULL))))));
                                arr_18 [i_0] [i_1] [i_2 + 1] [8U] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(12310256542261482010ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1])))))) ? (arr_12 [i_0] [i_0] [11ULL] [i_0] [i_0] [i_0]) : ((-((+(arr_14 [i_2 + 1])))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((min((arr_0 [i_0] [(signed char)18]), (arr_9 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_9))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (4332996731990928461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_13 [(signed char)2] [(signed char)2]) < (10379870883803052754ULL)))), ((+(((/* implicit */int) arr_15 [i_2] [i_2] [5ULL] [i_2] [i_2]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2 + 1]))) | (min((4332996731990928461ULL), (((/* implicit */unsigned long long int) arr_8 [i_0])))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) < (((/* implicit */int) ((((arr_12 [i_1] [i_1] [i_2] [i_2] [i_1] [(signed char)16]) * (var_3))) != (((3068461030809320529ULL) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((unsigned long long int) var_5));
                                var_19 = (~(var_1));
                                arr_31 [i_7] = ((/* implicit */short) min((9078038449012642936ULL), (((/* implicit */unsigned long long int) max((((arr_25 [i_0]) <= (var_1))), ((!(((/* implicit */_Bool) 11519455077304563369ULL)))))))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5] [i_0] [i_5] [i_7])) ? (arr_12 [i_1] [(unsigned short)18] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 6722643214991002595ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((12012089779491780513ULL) / (arr_12 [i_0] [i_0] [i_1] [13ULL] [13ULL] [i_7])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_2))))));
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_7), (((/* implicit */short) var_8)))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_11))));
}
