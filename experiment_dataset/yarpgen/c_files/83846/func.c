/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83846
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
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4196264140U)) ? (((/* implicit */unsigned int) -8274408)) : (4148148731U)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -958969389)) / (4148148731U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0))))) : (((unsigned int) var_7)))) : (min((((unsigned int) (unsigned char)136)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_11 [(signed char)4] [0] [i_0] [(signed char)4] &= ((/* implicit */_Bool) (~(((((739984064400662875ULL) % (((/* implicit */unsigned long long int) -958969389)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1209529303))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) 3494452969U)) ? (17706760009308888740ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)48)), (8274408)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_2] [i_3]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (3003275731U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (min((((/* implicit */long long int) var_5)), (arr_15 [i_1] [i_1]))))))));
                                var_20 = ((/* implicit */signed char) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_2] [i_2] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)135)), (var_17)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_2 - 1]) : (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned int) ((_Bool) arr_17 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0] [i_1]))), (max((((/* implicit */unsigned int) var_4)), (2097151U))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((_Bool) 26ULL))) : ((-(((/* implicit */int) var_4))))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -302839793)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12063)))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-24070))) : (((unsigned long long int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (var_15)))) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) var_1))))))));
}
