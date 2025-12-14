/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94659
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2]))) < (arr_9 [i_1] [i_1] [i_1])))) >> (((var_5) - (17093440095346940187ULL))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (arr_4 [i_0] [i_0] [i_1 - 1])))) <= (((/* implicit */int) ((var_1) != (((/* implicit */int) arr_0 [i_2 - 2] [i_1]))))))))));
                    arr_11 [i_0] [i_0] [7ULL] [i_2 - 1] = ((/* implicit */signed char) ((var_2) <= (0)));
                    arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_2))));
                    arr_13 [i_2 - 2] [i_0] [i_0] &= var_5;
                    arr_14 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)90)))) ? (min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (281474976645120ULL))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (var_8))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            {
                arr_20 [i_3] = ((/* implicit */signed char) (((+(((805306368ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) ^ (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_12)) ? (11331586607857772183ULL) : (((/* implicit */unsigned long long int) var_2)))) : (((unsigned long long int) var_5))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_27 [(unsigned char)2] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((arr_21 [7ULL] [i_4] [i_3]) >= (((((/* implicit */_Bool) arr_15 [i_4 + 2] [i_3])) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) var_14))))));
                            var_18 = ((/* implicit */signed char) arr_6 [i_3] [i_4] [i_3] [i_6]);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((255850730U) + (((((/* implicit */_Bool) 3412447705U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (1408596405U))))))));
                            var_20 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_3] [i_5])) ? ((+(4294705152ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_6]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_11)))) < (((((/* implicit */_Bool) var_2)) ? (var_10) : (var_10))))))));
                        }
                    } 
                } 
                arr_28 [(signed char)1] [i_4 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((min((arr_26 [i_3] [i_3] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_13)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_4] [i_4]))) : (var_16))))))));
                arr_29 [i_3] = ((/* implicit */unsigned char) var_13);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_11);
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)20))));
}
