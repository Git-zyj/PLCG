/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95999
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */signed char) 9223372036854775807LL);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned int) 4294967295U));
                                arr_14 [i_0] [i_2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))))) | ((-(((((/* implicit */_Bool) 0U)) ? (-7672548242893879696LL) : (((/* implicit */long long int) arr_2 [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (+(4294967295U))))))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_24 [i_5] [(signed char)10]))));
                            arr_27 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) (~(592600739U)))) - (var_15))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) 1717854894U)) ? (((long long int) arr_18 [i_6])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7] [i_5])))))) == (max((arr_1 [i_5]), (((/* implicit */long long int) arr_5 [i_6] [i_7]))))))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) (~(((unsigned int) ((signed char) arr_13 [i_6] [i_5] [i_5] [i_5] [i_5])))));
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_35 [i_10] [i_5] = ((/* implicit */signed char) ((short) (-(-219213778584492554LL))));
                                var_26 *= ((/* implicit */unsigned int) ((max((arr_9 [i_6]), (((/* implicit */long long int) (+(var_17)))))) / ((+(arr_4 [i_5])))));
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_10 [i_6] [i_6] [i_6]))));
                                arr_36 [i_5] [i_10] [i_5] [i_6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (~(var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5] [i_9] [i_5]))) : (max((arr_6 [i_5] [i_11] [i_5]), (((/* implicit */unsigned int) arr_32 [i_5] [i_9] [i_5] [i_5]))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_5] [i_6] = ((/* implicit */long long int) (+(592600739U)));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_18);
    var_29 &= ((/* implicit */unsigned int) max((var_13), (((/* implicit */long long int) ((signed char) var_17)))));
}
