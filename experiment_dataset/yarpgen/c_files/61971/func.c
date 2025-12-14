/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61971
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)167), ((unsigned char)167)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (-(var_7)))) ? (var_7) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11892833407126188520ULL)) ? (1619754573) : (((/* implicit */int) (signed char)-99))))) ? ((~(var_7))) : (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (_Bool)1))));
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))), (min((arr_2 [i_0 + 1] [i_3 + 2]), (((/* implicit */unsigned int) ((var_8) < (var_0))))))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (-(5885563940938799682ULL))))) + (2147483647))) << (((((arr_4 [i_1] [i_1]) + (418460658))) - (30)))));
                        var_15 += ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned char)55))))));
                    }
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1] [i_0 + 2] [i_0 + 1])))), (((/* implicit */int) min(((short)254), (((/* implicit */short) arr_11 [i_4 - 1] [i_4 + 1] [i_0 + 1] [i_0 + 1])))))));
                        arr_15 [(unsigned short)1] [i_0 + 1] [i_1] [8ULL] [5ULL] = ((/* implicit */signed char) var_2);
                    }
                    var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_14 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
        arr_16 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((18), (arr_4 [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) ((signed char) arr_5 [i_0]))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_0] [(unsigned short)11] [i_0 - 1] [i_0 + 2])))) : (((/* implicit */int) max((var_6), (arr_13 [10ULL] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_1);
    var_19 = ((/* implicit */unsigned short) (unsigned char)64);
}
