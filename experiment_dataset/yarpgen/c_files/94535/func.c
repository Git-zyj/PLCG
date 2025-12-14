/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94535
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
    var_10 = ((/* implicit */unsigned short) ((long long int) (~(min((((/* implicit */unsigned long long int) 304477478)), (var_6))))));
    var_11 = ((/* implicit */_Bool) ((max((var_6), (((/* implicit */unsigned long long int) (signed char)-75)))) / (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 3])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_0] = max((((((/* implicit */int) arr_14 [16U] [(signed char)8] [i_2] [(unsigned short)17] [i_0 + 1] [(signed char)8])) | (((/* implicit */int) (short)-11071)))), (((((((/* implicit */int) var_5)) * (((/* implicit */int) var_8)))) ^ (((/* implicit */int) arr_5 [i_0])))));
                                arr_16 [6ULL] [i_0] [18U] = ((/* implicit */unsigned char) var_0);
                                var_13 = ((/* implicit */unsigned short) var_7);
                                arr_17 [i_0] [i_3] [i_2] [(unsigned short)4] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                var_14 ^= min((((/* implicit */int) ((signed char) arr_12 [(unsigned short)8] [i_0] [i_0] [18U]))), ((+(((/* implicit */int) (signed char)82)))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */short) (-(((/* implicit */int) min((arr_0 [i_0 + 3] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 3]))))));
                                arr_26 [i_0] [(unsigned short)10] [i_6 + 2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_23 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_6 + 1] [i_7] [1])) : (((/* implicit */int) arr_23 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 3] [i_6 - 1] [i_0 + 3] [i_6])))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((var_3), (-304477469))) : (((/* implicit */int) ((((unsigned int) var_3)) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */int) (+(min((min((((/* implicit */long long int) -304477470)), (8106519593850705211LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [(signed char)14] [2U] [(short)10] [i_6])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
