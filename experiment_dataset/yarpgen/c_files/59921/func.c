/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59921
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
    var_19 = ((/* implicit */_Bool) var_18);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_2] [i_2] [i_3] [i_3] [i_1] = min((((/* implicit */long long int) max((((short) var_11)), (arr_12 [i_0] [(short)8] [i_0] [i_0] [(_Bool)1] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)0] [i_1] [(unsigned short)8] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)13669)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3]))) : (arr_0 [i_0]))))));
                            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_1]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) max((max((max((var_0), (((/* implicit */long long int) arr_2 [i_0])))), (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_2 [11LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1 + 1]))) : (min((((/* implicit */long long int) var_7)), (arr_0 [i_1])))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9323757453932815889ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4434))) : (var_17)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0])), ((unsigned short)4434)))))))) ? (((((/* implicit */_Bool) var_2)) ? ((~(arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_16);
    var_24 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16841)) ? (((/* implicit */int) (unsigned short)36327)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)0)))))))) : (var_1)));
}
