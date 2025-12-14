/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88583
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)-109)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((signed char)108), ((signed char)-105))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) != ((+(((/* implicit */int) (unsigned short)65520)))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) arr_6 [i_2 - 2] [(_Bool)1] [i_2 - 2]))), (((((((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 4294967292U)) : (var_3))) >> (((max((((/* implicit */unsigned int) arr_2 [(unsigned char)11])), (var_7))) - (1820571036U)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_10 [i_2] [(short)10] [11]);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_13 [i_0] [i_0] [i_1] [(unsigned short)8] [i_2] [i_3];
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [5U] [i_2 - 2])) ? (((arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))) <= (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)226)), ((-(((/* implicit */int) var_0)))))))));
                        arr_18 [(unsigned char)6] [i_0] [i_1] [i_0] [i_2] [11] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [2U] [i_1] [i_2 - 3])) ? (arr_8 [i_0] [i_2] [i_4]) : (((/* implicit */int) (signed char)-109)))))))), (((unsigned short) min((arr_0 [(short)4]), (((/* implicit */int) arr_2 [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))))))) ^ (max((arr_17 [i_1] [i_5]), (arr_15 [i_0] [i_1] [i_2] [i_5])))))));
                            arr_23 [i_0] = ((/* implicit */unsigned int) arr_22 [i_6 + 2] [i_6] [2] [i_6] [(unsigned short)4] [i_6] [i_6]);
                            var_22 += ((/* implicit */short) var_5);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_16))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
                    }
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */int) var_1);
    var_26 = var_9;
}
