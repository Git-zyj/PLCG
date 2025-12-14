/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56863
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((arr_2 [i_0] [(unsigned short)2]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0]))) : (max((((/* implicit */unsigned long long int) var_15)), (var_8)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0]);
                            arr_10 [i_0] [3LL] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_0])))))) << (((((unsigned int) arr_5 [i_0] [i_3 - 1] [i_0])) - (31141U)))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_0])))))) << (((((((unsigned int) arr_5 [i_0] [i_3 - 1] [i_0])) - (31141U))) - (13933U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) ((arr_11 [23LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43930)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14899))) : (10331409413838341009ULL)))))))) : ((-(((unsigned long long int) arr_16 [i_6] [i_4] [i_4]))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_6])))))));
                    arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_14 [i_6])), (var_13))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) && (arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 2])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (-(max((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_5))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_16))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)21611))))));
}
