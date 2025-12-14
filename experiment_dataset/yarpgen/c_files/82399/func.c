/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82399
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [(unsigned char)1] [i_0] [i_1] [i_3] [i_0] [i_2] [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                                var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)80))))) ? ((+(arr_7 [i_0] [i_0] [i_0] [2LL]))) : ((~((~(((/* implicit */int) var_1))))))))));
                                var_11 = max(((-(arr_10 [i_4 - 3] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_1]))), (((/* implicit */int) ((((long long int) (unsigned short)46846)) == (((/* implicit */long long int) arr_1 [i_1]))))));
                                arr_12 [i_1] [i_1] [i_3] = ((/* implicit */int) max(((-(((((/* implicit */_Bool) (unsigned char)226)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-73))))) ? (((/* implicit */long long int) (+((-2147483647 - 1))))) : (((((/* implicit */_Bool) arr_2 [1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (6222205269687596326LL)))))));
                                var_12 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)65525)))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3] [10])) ? (9223372036854775807LL) : (((/* implicit */long long int) (+(arr_4 [i_0] [i_4])))))) : ((+(-6222205269687596326LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) max(((~(6222205269687596327LL))), (((((/* implicit */_Bool) (+(arr_17 [(unsigned char)2] [9LL] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)10))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (var_3)))))));
                            var_14 ^= ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1841578714)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_3)) ? (1840506578U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (246290604621824LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1715359128)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1840506578U)))) ? ((-(((/* implicit */int) var_8)))) : (var_0))))));
    var_16 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 278093622))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)63))))) == (min((40877027303242975LL), (((/* implicit */long long int) var_4)))))))) : (var_3)));
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)1024)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))) : (((/* implicit */long long int) (+(var_4))))))));
}
