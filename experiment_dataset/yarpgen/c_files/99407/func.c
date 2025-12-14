/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99407
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
    var_18 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((unsigned char) 2958247321U))))), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1]))) == (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2])))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(2958247338U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_3] [i_3] = ((/* implicit */short) (-(1336719974U)));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2 - 3])))))) ? (((min((arr_7 [i_2] [(unsigned short)0]), (((/* implicit */unsigned int) var_0)))) & (1336719957U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))))))));
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (min((2877378289U), (((/* implicit */unsigned int) (unsigned char)255)))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (short)32600)) : (((/* implicit */int) var_17)))) / ((-(((/* implicit */int) var_12)))))))));
            }
        } 
    } 
}
