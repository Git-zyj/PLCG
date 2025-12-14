/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95796
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
    var_11 = var_7;
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))));
        var_12 ^= ((/* implicit */unsigned char) var_9);
        var_13 -= ((/* implicit */long long int) ((4682339896416793735LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 4682339896416793735LL)) ? (((/* implicit */int) (short)137)) : (((/* implicit */int) (_Bool)0)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) var_1);
                    arr_10 [i_1] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) var_7);
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (((576460752303423488LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13283))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
                    arr_11 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (~(arr_4 [i_1] [i_3])));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) var_9)), (var_6))) | (arr_5 [i_4]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_1 + 1] [i_1 + 1]) != (arr_4 [i_1 - 1] [i_1 - 1])))))));
                    var_17 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) min((arr_6 [i_1] [i_1] [i_4 + 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                }
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) min((((/* implicit */long long int) arr_4 [i_2] [i_2])), (var_7)))))));
                var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) var_4))))) / (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_2 - 1])))))));
                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (576460752303423488LL)))) ? (min((var_6), (((/* implicit */long long int) arr_8 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) : (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_8 [i_1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                var_21 = ((/* implicit */unsigned short) (!(((-1641331544) == (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))))));
            }
        } 
    } 
}
