/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94120
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
    var_13 &= ((/* implicit */_Bool) 2580874894210855573LL);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (signed char)0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned char) arr_4 [(_Bool)1] [7] [7])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) -2147483638);
                                var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)0)), (((((/* implicit */_Bool) 10704474133901472048ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-4)), (var_6))))) : (5658986449996271087LL)))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)6)) > (min((((/* implicit */int) (unsigned short)64046)), (((((/* implicit */_Bool) 2088800697U)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                                arr_18 [i_1] [i_0] [(unsigned short)13] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])))) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
}
