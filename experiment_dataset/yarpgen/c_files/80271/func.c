/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80271
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 = min((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_12)))), ((+(arr_0 [i_0]))))), (max((arr_0 [i_0]), (((/* implicit */long long int) ((3664896324U) - (((/* implicit */unsigned int) var_11))))))));
        arr_4 [i_0 - 1] [1U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [5] [5]))) : (arr_1 [i_0 + 1] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))) : (arr_1 [i_0 - 2] [i_0 - 2])));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 7; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 6; i_5 += 4) 
                        {
                            {
                                arr_19 [i_1] [i_2 + 1] [i_1] [i_4] [i_5 + 3] = ((/* implicit */_Bool) min((((max((var_4), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5 - 2] [i_5])))) / (((/* implicit */unsigned long long int) (+(arr_5 [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1981875464U)) != (arr_0 [i_3 - 2]))))));
                                var_20 = ((/* implicit */int) arr_16 [(unsigned char)0] [i_2 + 2] [5U] [i_2 + 1] [i_2 + 1]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 2])) + (((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 3])))))));
                    arr_20 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((_Bool) ((signed char) min((8575388922516639644LL), (arr_0 [i_1])))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) var_10)), (var_4))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((/* implicit */int) var_14)))))));
}
