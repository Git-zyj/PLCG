/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81201
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (short)32767))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_14))))) * (((/* implicit */int) var_11))));
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned short)10500)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [(unsigned char)14] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((min((4U), (((/* implicit */unsigned int) (unsigned char)215)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                var_19 |= ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) 326986036640206603LL);
                                var_21 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)41))));
                                arr_17 [i_0] [(signed char)10] |= ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_0])) : (((/* implicit */int) var_0))))))));
                                var_22 = ((/* implicit */unsigned int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)66))));
                                var_23 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)15150))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2]))) : (4U)))) : ((+(var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
