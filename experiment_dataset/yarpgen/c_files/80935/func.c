/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80935
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
    var_14 = ((/* implicit */signed char) (unsigned short)0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(0U)))) ? ((((~(2057986436U))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_2)) + (28))) - (14)))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)1476)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) 63488);
                            arr_11 [i_0] [i_1] [i_1] [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-4636650408802576043LL) - (((/* implicit */long long int) ((/* implicit */int) (short)27812)))))) ? ((-(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) - (((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_4 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)11] [i_1])))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10585822147739963846ULL)) ? (((/* implicit */int) (((+(18446744073709551615ULL))) <= ((+(9766678011733835166ULL)))))) : (((/* implicit */int) (unsigned short)65525))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))))) ? (((18446744073709551615ULL) + (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? ((~(((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((414123755U) <= (var_6))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) 3880843524U))));
}
