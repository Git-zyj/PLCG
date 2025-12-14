/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94936
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)4] [i_4 + 2] [i_0]))) == (arr_17 [i_0] [i_4 + 2] [i_4 + 2] [i_1 - 1] [i_4 + 1]))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13730322198317648600ULL)) ? (((/* implicit */int) (short)-8480)) : (((/* implicit */int) (unsigned char)7))))) != ((+(1936992395U))))));
                                arr_18 [i_2] |= ((/* implicit */long long int) ((_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-20)) % (-1142282470)))) ? (((((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_2] [i_4 + 2]))) : (arr_6 [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_1 - 1] [i_4 + 1] [i_4 + 2]) == (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 7U);
                var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_0)) * (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */int) (((!(((/* implicit */_Bool) (short)-21557)))) && (((/* implicit */_Bool) ((unsigned short) var_6)))))) >= (min((var_3), (((((/* implicit */int) var_1)) % (((/* implicit */int) var_0)))))));
}
