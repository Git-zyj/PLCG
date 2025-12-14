/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88493
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
    var_10 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) var_8);
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) var_1);
                                var_12 *= ((/* implicit */_Bool) min((((/* implicit */long long int) max(((+(((/* implicit */int) arr_11 [0ULL] [i_1] [i_1] [i_1])))), (((/* implicit */int) (!(arr_7 [i_4] [i_4]))))))), ((+(max((var_6), (((/* implicit */long long int) (signed char)56))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)61632)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))))));
                var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_12 [i_0]))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_7 [(unsigned short)21] [(_Bool)1])))) & (((/* implicit */int) var_0))))) : (arr_1 [i_0])));
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1449772460517803264LL)) : (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_7)))))))), (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)61623)) & (((/* implicit */int) (unsigned short)61623)))))) ? (((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((arr_15 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_6]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_6] [i_5] [i_5] [i_5])) & (arr_10 [(signed char)19] [i_6] [i_5] [i_5] [i_6])))))))));
                var_17 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_5)) && (arr_11 [i_5] [i_5] [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (11080702218310505268ULL)))));
            }
        } 
    } 
}
