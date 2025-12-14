/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88792
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
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) * (1267713686))) == (((/* implicit */int) ((short) (_Bool)1)))))) >> (((/* implicit */int) var_2))));
    var_21 = ((((((((/* implicit */int) var_4)) < (((/* implicit */int) var_15)))) && (((/* implicit */_Bool) -1399112694)))) ? (var_5) : (((/* implicit */int) ((((unsigned long long int) var_18)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) > (-4334835685904397275LL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0 + 2] [i_0 + 3]))), ((+((-(2095104ULL)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (var_12) : (var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >> (((var_12) - (3293847438U))))))))) && (((/* implicit */_Bool) 531019275U))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1399112672)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)22))) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */long long int) ((signed char) var_15))), (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (signed char)54)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0 + 3] [(short)24]))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (max((var_4), (var_1))))))) % (((((/* implicit */_Bool) ((var_9) >> (((var_3) - (357152613892009681LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (arr_1 [i_2])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
