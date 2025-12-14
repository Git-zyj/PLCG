/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62733
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
    var_14 = ((/* implicit */unsigned long long int) ((var_13) < ((-((~(((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_1] = (+(((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_3 [i_0] [i_1] [(unsigned short)5])))) - ((-(((/* implicit */int) (signed char)-114)))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [4U])) <= (((/* implicit */int) var_0)))), (((((/* implicit */int) (unsigned short)57409)) < (536346624)))))) : (((/* implicit */int) arr_4 [i_1])))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_9 [i_1] [i_1] [7ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (((/* implicit */int) ((var_6) == (var_13)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)13] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_8 [(short)3] [i_1] [i_1]))))))) ? (((/* implicit */long long int) (~(((2147418112) - (((/* implicit */int) var_7))))))) : (((((((/* implicit */long long int) (-2147483647 - 1))) | (-1LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_1] [i_2 + 1])))))));
                arr_10 [i_1] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) var_4);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_4))));
                        }
                    } 
                } 
                arr_15 [i_1] [22ULL] [i_1] [i_2] = min(((unsigned short)65507), ((unsigned short)65520));
            }
        }
        var_18 |= ((/* implicit */signed char) (-2147483647 - 1));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) (-(((/* implicit */int) (signed char)-77)))))));
        var_19 = ((/* implicit */signed char) arr_7 [i_5] [i_5] [i_5] [(_Bool)1]);
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (-(var_4)));
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_9))));
}
