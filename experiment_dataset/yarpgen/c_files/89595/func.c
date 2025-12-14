/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89595
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
    var_15 |= ((-1710486131) % (((/* implicit */int) (_Bool)1)));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_4);
                            arr_11 [i_0] [i_0] [(signed char)1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((+(((/* implicit */int) arr_5 [i_1] [i_1 - 4] [i_2])))) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) var_7)))))));
                            var_17 = ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) (signed char)7)), (var_3)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)32767)))) || (((/* implicit */_Bool) (unsigned char)216))));
                                arr_24 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_3) != (var_3)))), (((((/* implicit */_Bool) (unsigned char)224)) ? (arr_13 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)250))))))) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned char)224))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_1 + 1] [i_0] [i_1] = ((((/* implicit */_Bool) min((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((/* implicit */unsigned long long int) var_11))))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (arr_2 [i_0])))))));
                arr_26 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                arr_27 [i_0] = ((/* implicit */int) (unsigned char)220);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)190)) - (((/* implicit */int) (unsigned char)53))))) != (var_11)));
}
