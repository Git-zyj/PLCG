/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91353
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), ((+(max((max((17011952157035442369ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_9))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (max((((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) -3195453115170815965LL))))), (max((var_12), (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((unsigned short) -1789589065)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_2 + 1] [i_2 - 1] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_1])))))))) ? (min((((/* implicit */int) max((arr_6 [i_2] [i_2] [i_2] [i_0]), (arr_6 [i_0] [i_0] [i_2] [i_0])))), ((~(var_4))))) : (((/* implicit */int) arr_1 [i_0]))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) 17011952157035442369ULL))), (3750889432490451343LL)))) ? (((long long int) arr_3 [i_2 + 2])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    } 
}
