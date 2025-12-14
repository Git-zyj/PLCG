/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97332
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)12856)) ? (min((arr_0 [i_0]), (var_6))) : (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52659))));
                    var_18 = ((/* implicit */signed char) 1275445136U);
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-14274))));
                    var_20 += ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    arr_12 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [(signed char)5] [i_0]);
                }
                for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_21 += ((/* implicit */int) min((var_6), (((/* implicit */unsigned long long int) (signed char)57))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)173);
                                arr_22 [i_1] [i_1] [i_4] [i_6] = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0]);
                                var_22 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6158)) ? (7084390712478460809LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_11);
}
