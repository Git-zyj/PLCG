/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9970
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_11))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-82))))));
                            arr_16 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_0 [i_4] [i_3]) + (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))))) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_0]))));
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))) ? ((~(((/* implicit */int) (signed char)72)))) : (((int) ((signed char) (signed char)-82)))));
                        }
                        var_21 = (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)83))))))));
                        var_22 = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_23 &= ((/* implicit */unsigned int) (+(-1839589897)));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)88)), (1930643205U)))) ? (((/* implicit */int) (short)29275)) : (((/* implicit */int) (short)-29276))))));
                        var_24 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)12007)), (4294967264U)));
                    }
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned long long int) max(((unsigned short)52727), ((unsigned short)18187)));
                                var_26 = ((/* implicit */signed char) var_18);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((/* implicit */int) arr_18 [i_7] [i_7 + 1] [i_7] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                }
                arr_29 [i_1] [i_0] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_16))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_6)), (var_16))) >= (arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) var_2);
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)12015)) : (((/* implicit */int) (signed char)122))));
}
