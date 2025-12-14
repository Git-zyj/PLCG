/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89793
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((var_12) % (min((min((2147483647), ((-2147483647 - 1)))), ((~(2147483647))))))))));
    var_19 ^= ((/* implicit */unsigned short) ((var_14) != (((/* implicit */unsigned int) ((int) min((((/* implicit */int) (short)0)), (var_8)))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 |= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) -2147483635)))));
                var_22 = ((/* implicit */unsigned short) (-(818410757)));
                arr_5 [(unsigned short)14] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)0))));
                var_23 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((3920628760722562236ULL) - (3920628760722562235ULL))))) >> ((((-(arr_2 [i_0]))) + (11243084)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_12 [i_2 - 1] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) (~(-2147483620)));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_14), (min((((/* implicit */unsigned int) var_15)), (var_14))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_3] [i_5 + 2] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_5 - 2] [i_4 + 1] [i_3])) : (((/* implicit */int) var_6)))) % (((/* implicit */int) arr_10 [i_3] [i_3] [i_4 + 1] [i_5]))));
                                var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (short)17))))) ? ((-(arr_15 [i_6 - 2] [i_6 - 2] [i_5 + 1] [i_5 + 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3920628760722562236ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
