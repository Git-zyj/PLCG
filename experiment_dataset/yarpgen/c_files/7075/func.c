/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7075
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
    var_18 = ((/* implicit */long long int) (-((~(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = (+(((((/* implicit */_Bool) ((arr_6 [i_0] [(signed char)7]) << (((/* implicit */int) (signed char)26))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)54024)) & (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_3])) ? (arr_4 [i_0]) : (2517479602U))))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] = ((signed char) ((short) 1372580726U));
                                var_20 &= ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)16)), ((unsigned short)28886)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)20))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_10 [i_6] [22LL] [i_1] [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */long long int) ((arr_18 [i_0] [i_0] [i_5] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (short)-14667)))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1])) / (((/* implicit */int) arr_3 [i_0 - 2])))))));
                            var_22 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) * (1372580726U)))) > (min((6678559659519961055LL), (6678559659519961044LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_16))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))));
    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_12)), (var_5))))) > ((-(var_17)))));
}
