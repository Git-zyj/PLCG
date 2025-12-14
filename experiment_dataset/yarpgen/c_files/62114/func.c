/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62114
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(200714566)))) ? (var_1) : (max((var_4), (var_4)))))) ? (max((((/* implicit */long long int) var_6)), (((-135109326507868628LL) + (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((var_9) > (((/* implicit */int) var_5))))) ^ (((/* implicit */int) ((var_8) > (var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((496595449) + (((/* implicit */int) (unsigned short)60513))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60679)))))))) ? (((max((6261671190287900584ULL), (((/* implicit */unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1 + 1] [i_1 + 3]) : (arr_1 [i_1 + 3] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) var_3)), (var_6))) : (var_10))))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)43288)), (var_10)))) : (var_11))) > (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 496595452)) ? (-1714084514) : (-1741495077))))))))));
}
