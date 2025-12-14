/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61623
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
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) | (var_18))) / (((/* implicit */unsigned int) max((arr_1 [i_3 - 1]), (((/* implicit */int) var_4)))))))) ? ((+((+(((/* implicit */int) (short)-14310)))))) : (((/* implicit */int) var_12))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)235)), (max((3968U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3]))))))) ? (var_18) : (max((((/* implicit */unsigned int) max((var_13), (var_12)))), (((((/* implicit */_Bool) arr_1 [5])) ? (((/* implicit */unsigned int) var_6)) : (3994U)))))));
                        }
                    } 
                } 
                arr_10 [(_Bool)1] [i_0] [i_0] &= ((/* implicit */unsigned short) 4294963277U);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 4; i_4 < 9; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_24 &= ((/* implicit */unsigned short) (~(3984U)));
                }
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 63951154U)))) ? (((/* implicit */int) max((arr_12 [i_1] [i_0] [i_1] [i_1]), (arr_12 [i_0] [i_0] [(short)7] [i_0])))) : (((/* implicit */int) arr_7 [i_0] [0] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) (short)-32091))))))))) : (max((max((((/* implicit */unsigned int) var_4)), (4294963279U))), (((/* implicit */unsigned int) arr_9 [i_1] [i_1 - 1] [i_1] [(unsigned char)10] [(short)10] [6ULL]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1951100983)) ? (18034600450131751530ULL) : (((/* implicit */unsigned long long int) -258432709))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_3)))))))));
}
