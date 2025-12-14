/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95093
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_11 = arr_3 [i_0] [i_2];
                            var_12 -= ((/* implicit */unsigned short) 926721764564449480ULL);
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned short) var_10);
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))) ? (((/* implicit */long long int) 3624052331U)) : (max((arr_4 [10LL] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_10))))))) ? ((((~(var_1))) ^ (arr_5 [i_0] [(short)10]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190)))));
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)0))))) * (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)26210))))) ? (386047614U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
