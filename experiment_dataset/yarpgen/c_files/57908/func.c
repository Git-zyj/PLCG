/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57908
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_0) : (((/* implicit */int) var_14))))) > (max((((/* implicit */unsigned long long int) var_7)), (arr_0 [i_0]))))))) < (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])) & (max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_1])))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1]) >= (-1)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_17);
                            var_21 = ((/* implicit */unsigned long long int) var_4);
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_10 [i_0]) != (var_6)))), (var_3)))) ? (16035584171557206904ULL) : (((/* implicit */unsigned long long int) min((((unsigned int) var_18)), (((/* implicit */unsigned int) arr_8 [i_0] [i_2 - 1] [i_2 - 2])))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1] [i_2 - 2])) > (((/* implicit */int) var_15))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_23 += ((/* implicit */unsigned short) 7);
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_5]))));
            }
        } 
    } 
}
