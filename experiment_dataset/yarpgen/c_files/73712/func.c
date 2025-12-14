/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73712
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
    var_16 = ((/* implicit */signed char) var_2);
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */signed char) (~(((((/* implicit */int) ((signed char) (_Bool)1))) & (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_6)))))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)8] [(unsigned short)8]))) ^ (arr_2 [(short)4] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)1633)))), (((/* implicit */int) min((arr_8 [i_0] [(signed char)3] [i_2] [i_1 + 1] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1657)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), ((signed char)-26)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) min((var_13), (arr_5 [0ULL] [i_0] [i_0] [(short)6])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [0ULL] [i_0] [i_0]))) : (((long long int) arr_0 [i_0] [i_0]))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) (((((~(var_5))) + (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */int) (unsigned short)63912)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_1] [(unsigned short)4]) < (((var_3) % (var_3)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3772783593518306725LL)))) ? ((~(-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_4)))));
}
