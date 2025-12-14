/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83529
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((((/* implicit */int) (short)32763)) > (((/* implicit */int) (unsigned char)92)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-1)), (var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (967720685215239196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) var_7))))));
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 4067191496U)) : (967720685215239174ULL)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+((+(var_13)))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 ^= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (((arr_7 [i_0] [i_0] [0U] [i_0]) ? (((/* implicit */unsigned long long int) 1159487870075797741LL)) : (var_14))))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)243))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)18] [i_3 + 2] [(signed char)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (((((/* implicit */_Bool) 14130649651147090473ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52659)))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_0] [i_3 - 1])) % (((/* implicit */int) (short)4624))));
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) arr_8 [i_3 - 1])) : (((((-1159487870075797752LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-18)) + (71))) - (53)))))));
                }
            }
        } 
    } 
}
