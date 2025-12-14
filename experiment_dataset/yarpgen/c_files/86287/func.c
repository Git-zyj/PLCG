/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86287
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) 4294967295U))) : (((/* implicit */int) ((unsigned char) 4632750761547774811LL))))) >> (((min((((long long int) -4632750761547774812LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)34)) || (((/* implicit */_Bool) var_10))))))) + (4632750761547774833LL)))));
    var_17 -= ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */unsigned int) min((var_5), (min((var_8), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-2)), (1007320374))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26911))) | (-6425100842963773366LL))) & ((~(arr_1 [i_0 - 1]))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) var_13)), (max((((((/* implicit */_Bool) 671591058U)) ? (((/* implicit */unsigned int) var_13)) : (1867743051U))), ((~(1311591952U)))))))));
                var_21 = ((/* implicit */long long int) var_13);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_17 [i_2 + 2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */unsigned int) var_11)) : (2243539038U)));
                                var_22 = ((/* implicit */unsigned int) max((arr_1 [i_3 - 1]), (((/* implicit */long long int) var_11))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) arr_2 [i_2] [i_2] [i_4]);
                }
            } 
        } 
    } 
}
