/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71749
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) var_4);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) var_5)) : (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) 0LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : (((unsigned long long int) var_0))))));
        arr_2 [i_0] [i_0] = min((max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_10)) >= (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) 0)))))), (((/* implicit */unsigned int) var_8)));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min(((unsigned short)24557), ((unsigned short)41602)));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))) ? (min((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned short)40966)))) : (min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (unsigned char)128))))), (((unsigned long long int) var_11))))));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_11)))))))) & (max((var_6), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned int) (((-(((unsigned long long int) var_11)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((293712720928277369LL), (((/* implicit */long long int) (unsigned short)65045))))) ? (((unsigned int) arr_8 [i_2])) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)40960)), (arr_3 [i_2])))))))));
                arr_11 [i_2] = ((/* implicit */unsigned int) (unsigned char)0);
            }
        } 
    } 
}
