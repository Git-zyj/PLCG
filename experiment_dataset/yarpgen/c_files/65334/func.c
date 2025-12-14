/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65334
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)163))))) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) (unsigned char)93))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_16) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54936))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_18)))))));
    var_20 |= ((/* implicit */int) ((max((13183136494369140248ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned short)36903))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12850)) ? (((/* implicit */int) (short)32380)) : (((/* implicit */int) (unsigned short)52696))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)164)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)84))))))))));
                                arr_13 [i_0] [i_0 - 2] [i_0 + 1] [i_3] [7U] [i_0] = ((/* implicit */signed char) (((-(min((var_17), (var_6))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_3 + 1] [i_3] [i_3 - 3] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 - 3] [i_3])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_2] = ((unsigned short) ((unsigned int) 18446744073709551615ULL));
                                arr_19 [i_1] [i_1] [i_1] [1ULL] [i_1] = ((/* implicit */_Bool) max((max((var_16), (var_4))), (((/* implicit */long long int) min((((var_13) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_1)))))));
                                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                                var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((unsigned char)92), (arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 2])))), (((unsigned int) arr_0 [i_0 - 2] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 &= ((unsigned int) (~(((/* implicit */int) (_Bool)1))));
}
