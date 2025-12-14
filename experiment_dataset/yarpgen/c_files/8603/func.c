/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8603
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)59020)) + (-1))), (((/* implicit */int) arr_2 [(unsigned char)14] [i_1])))))));
                arr_7 [(short)10] [i_1] = (_Bool)1;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26775))) >= (1936874950U)))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6515)) / (-422638359)))) != (min((((/* implicit */unsigned int) -2047115051)), (1936874950U)))))))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) 947321135U)) - (max((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_0])) : (var_0))), (5319099718104159799LL))))))));
                            arr_12 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_11 [(unsigned char)3] [i_2]), ((unsigned short)6515)))) ? (arr_9 [i_1] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_3])) / (arr_1 [i_2])))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (2358092360U))) < (((/* implicit */unsigned int) (((_Bool)1) ? (422638359) : (((/* implicit */int) (_Bool)1)))))))))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) << (0ULL)))) ? (max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])), ((~(((/* implicit */int) var_14)))))) : (((/* implicit */int) arr_2 [4LL] [i_1]))));
            }
        } 
    } 
    var_20 = var_14;
}
