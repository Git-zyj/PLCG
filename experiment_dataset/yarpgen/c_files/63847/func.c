/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63847
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))) ? (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-27061))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (var_13))))))) >= (min((2275620193U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
                var_16 = ((/* implicit */unsigned short) ((min((min((arr_3 [i_0] [4LL]), (((/* implicit */long long int) (short)-27061)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) var_5))))))) | (((/* implicit */long long int) (-(((/* implicit */int) (short)27061)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0])) ? (((long long int) arr_4 [3LL] [3LL] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [3ULL]))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)-27066)))) && (((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) >> (((var_3) - (3938162550U)))))))))) : ((~(arr_4 [i_0] [i_0 + 1] [i_1])))));
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0])), (min((688319164603500950ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)28)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((var_10), (((/* implicit */unsigned int) (signed char)-34)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [11LL] [i_1] [i_0])), (arr_6 [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), ((unsigned short)39162)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17758424909106050666ULL)) ? (((/* implicit */unsigned long long int) -1LL)) : (688319164603500956ULL))))))));
                    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 688319164603500945ULL)))))) | (min((7754649898850762329LL), (var_9)))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)4] [i_0 + 1]))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (short)-27048))))));
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_11))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)127)), (((unsigned int) (-(3400193255U))))));
}
