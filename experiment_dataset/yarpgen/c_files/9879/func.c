/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9879
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)10026)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(1267449874U))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) var_9);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2])) - (((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]))));
                        arr_12 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_5);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3027517421U)) ? (arr_7 [i_2] [i_2 - 1] [i_2 - 1]) : (3027517421U)));
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(var_7)));
                            arr_16 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (unsigned short)11736);
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (signed char)-102);
                            arr_19 [i_0] = ((/* implicit */_Bool) (+(1267449874U)));
                            var_16 *= ((/* implicit */short) (+((+(var_8)))));
                        }
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_3] [i_1] [i_2])) || (((/* implicit */_Bool) (unsigned short)6107)))) ? (((/* implicit */int) (unsigned char)239)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_0 [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((unsigned char) (+(((1267449884U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_22 [i_6] &= ((/* implicit */int) ((max((3027517430U), (((/* implicit */unsigned int) var_8)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6]))))))));
    }
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) / (6)))))));
}
