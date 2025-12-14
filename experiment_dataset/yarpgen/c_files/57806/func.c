/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57806
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
    var_15 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63100)) == (((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) var_7)), (max(((unsigned short)63106), (((/* implicit */unsigned short) (short)-28)))))), (((unsigned short) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((signed char) (unsigned short)63100));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((long long int) 14092533117942780034ULL))));
                            var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_3 - 1] [(_Bool)1] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)63106)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4]))))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)63110)))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), ((((~(((/* implicit */int) (signed char)50)))) / (((int) arr_7 [i_3 - 1] [i_5 + 1]))))));
                            var_21 = (((!(((/* implicit */_Bool) arr_10 [i_0] [(short)6] [i_5 - 1] [i_3 + 1] [7ULL])))) ? (max((((int) (unsigned short)23682)), (((((/* implicit */int) (short)-12241)) * (0))))) : (((/* implicit */int) min((arr_9 [i_3 + 1] [i_5 + 1] [i_3]), (arr_11 [i_5] [i_1])))));
                            var_22 = ((/* implicit */unsigned long long int) max((min(((~(arr_2 [i_0]))), (((/* implicit */int) arr_4 [i_1] [i_1])))), (((int) max((((/* implicit */short) arr_12 [i_0])), ((short)-18278))))));
                            arr_14 [i_3] = ((/* implicit */unsigned int) max((2988881641478703049LL), (min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_3])) >= (((/* implicit */int) (unsigned short)2428))))), (min((((/* implicit */long long int) (unsigned char)36)), (-1133207427626079016LL)))))));
                        }
                        for (long long int i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((max((((/* implicit */long long int) (unsigned short)2418)), (arr_10 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))) | (((/* implicit */long long int) (-(2147483647))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) -535045804))));
                            var_25 = ((/* implicit */int) ((unsigned int) max(((signed char)28), (arr_5 [i_3 - 1] [i_6 - 3]))));
                        }
                        var_26 = ((/* implicit */int) (-(((long long int) (short)-16755))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((-1781242706), (((/* implicit */int) (signed char)125)))))))), ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)49152))))) : (var_14)))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1536))))), ((+(var_14))))) : (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)35)), ((short)11702)))))))));
}
