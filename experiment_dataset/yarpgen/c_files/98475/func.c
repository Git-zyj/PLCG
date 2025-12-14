/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98475
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
    var_10 += ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [(short)7] = ((int) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))));
                                arr_15 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_12 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                                var_11 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) arr_2 [13ULL] [11LL])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) <= (18446744073709551600ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(arr_11 [i_5] [i_5])))) ? (min((5228565152832301797ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6773704794723507534LL)) ? (-5191612743385308451LL) : (6031221556354866307LL)))))))))));
                            arr_23 [i_0] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */signed char) var_9);
                            var_13 += ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (2147483647)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
