/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95118
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */int) var_9);
        var_12 = (+(max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (arr_1 [i_0]))), (((/* implicit */long long int) (_Bool)1)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-8)))))));
        var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [(signed char)2]), (((/* implicit */long long int) 0)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-(((unsigned int) (short)-27)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_15 -= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2))))), ((~(1987409665783187522ULL))))), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(0U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((int) var_6)) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_1] = ((((/* implicit */_Bool) (+(var_5)))) ? (((min((((/* implicit */unsigned long long int) 190670144U)), (arr_6 [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) == (((/* implicit */int) var_2)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) | (arr_1 [i_1])))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
        arr_12 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-23993)), ((~(11780141622921852024ULL)))));
    }
    var_16 = (+(190670144U));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_2), (var_2)))))))));
}
