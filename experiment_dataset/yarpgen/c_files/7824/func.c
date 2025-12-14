/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7824
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
    var_11 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((-7943943723013089862LL) != (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) | (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) var_1);
                arr_4 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)11237)))) == (max((((/* implicit */int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))), (((int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((unsigned long long int) arr_11 [i_0] [17LL] [i_0] [20ULL] [i_0] [(signed char)0] [i_3 + 1])) << (((min((((/* implicit */int) arr_8 [i_0])), (max((((/* implicit */int) (unsigned short)11226)), (1832293280))))) - (52)))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_4 + 3]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32744))))) : (var_1)));
                                var_15 = ((/* implicit */short) max(((~(((/* implicit */int) (short)32765)))), (((/* implicit */int) ((((/* implicit */int) (short)-32744)) >= ((-(((/* implicit */int) (signed char)26)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0]))) : (18446744073709551605ULL)));
            }
        } 
    } 
    var_16 = (-(7943943723013089862LL));
}
