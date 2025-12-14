/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72686
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */int) (unsigned char)56);
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1] [i_1 + 2])) & (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_7))))))) << (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4] [i_1]))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_15))) & (arr_8 [i_3] [i_1] [i_3] [(unsigned char)5] [i_1] [i_3]))))))));
                                arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) / (((/* implicit */int) var_13))))) : (((7ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56)))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned char)200))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_23 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_13)))) : (var_12))));
                            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)255)), ((-(2305843009079476224ULL)))));
                            var_25 += (~((+(((/* implicit */int) (_Bool)1)))));
                            var_26 *= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_19)))), ((-(((/* implicit */int) var_16))))));
                        }
                    } 
                } 
                arr_15 [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (signed char)-110)), (var_2)))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_12)) : (arr_3 [i_0] [i_0] [i_1 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (max((((/* implicit */long long int) var_9)), (arr_3 [i_1] [i_0] [i_0]))))))))));
                arr_16 [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))));
            }
        } 
    } 
    var_28 += ((/* implicit */unsigned int) 0LL);
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((((var_0) <= (((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))))), ((!(((/* implicit */_Bool) var_11)))))))));
}
