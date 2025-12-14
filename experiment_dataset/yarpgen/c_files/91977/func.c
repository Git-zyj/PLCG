/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91977
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
    var_12 |= ((/* implicit */_Bool) (+(((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_6))))) ^ (((((/* implicit */_Bool) var_2)) ? (-2073460985058341564LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) <= (var_9))))));
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = min((arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2]), (arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned short)13] [i_4] [(signed char)10] = ((/* implicit */signed char) (+(((long long int) arr_1 [i_0 + 3] [i_1 + 4]))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)14]))));
                                var_17 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))))) != (arr_12 [i_0] [i_1] [i_4])));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)29316)) ? (((/* implicit */int) arr_6 [(unsigned char)11] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)6165)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))))))), (min((((/* implicit */int) ((3509957856615644424ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)1] [i_2])))))), (var_2)))));
                }
            } 
        } 
    } 
}
