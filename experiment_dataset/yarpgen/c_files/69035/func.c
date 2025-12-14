/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69035
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
    var_14 = ((((((((/* implicit */long long int) ((/* implicit */int) (short)32764))) > (69805794224242688LL))) ? ((-(var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))) & (((((/* implicit */int) var_3)) * ((-(((/* implicit */int) (unsigned short)59305)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-32763)) ? (((((/* implicit */int) (unsigned char)181)) ^ (((/* implicit */int) (unsigned char)133)))) : (((/* implicit */int) ((arr_0 [i_1] [i_1]) < (((/* implicit */long long int) -82497983))))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0])))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)59294))))), (min((((/* implicit */unsigned short) var_12)), ((unsigned short)59305)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)181)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) min(((short)12028), (((/* implicit */short) (signed char)-123))))) : (((/* implicit */int) (short)7598))))) : (((((/* implicit */_Bool) max((697236229), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) min((1028534012U), (((/* implicit */unsigned int) (short)0))))) : (var_11)))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)133)), (arr_2 [i_3 - 1]))))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [i_2] [i_0]) : (var_7))))) ? (((/* implicit */int) max((min(((unsigned short)6270), (((/* implicit */unsigned short) (short)5)))), (max(((unsigned short)59294), (((/* implicit */unsigned short) (signed char)-84))))))) : (((/* implicit */int) (unsigned short)6251)))))));
                            var_17 = ((/* implicit */int) ((((arr_6 [i_2] [i_1 - 1] [i_3 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_2]))))) ? ((+(var_11))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-7598)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
