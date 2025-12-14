/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62638
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                var_15 = arr_1 [i_1];
                var_16 *= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 + 2] [i_0 + 1])), (-11LL)))));
                arr_5 [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((long long int) ((unsigned char) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_2] [i_2])), (arr_0 [i_2])))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) 9977106148056530607ULL))), (arr_1 [i_2])));
        var_19 = ((/* implicit */short) var_0);
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) >= (min((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_2])))))) >= (((/* implicit */int) (unsigned char)243))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_7)), (var_11))), (arr_4 [i_3] [i_3] [i_3]))))));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_3 [i_3])))));
        arr_11 [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8469637925653021007ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3])))))) ? (((long long int) 2377256590U)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) <= (((unsigned long long int) arr_1 [i_3]))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (max((((/* implicit */unsigned int) ((unsigned short) var_7))), (1678458145U)))));
    var_23 = ((/* implicit */unsigned char) ((1357862656U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12)))));
    var_24 = ((/* implicit */short) max(((+(((long long int) var_12)))), (((/* implicit */long long int) var_5))));
}
