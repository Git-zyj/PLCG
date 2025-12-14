/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78589
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
    var_20 = ((signed char) (~(((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [(unsigned short)1] [i_1] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned char)81), (((/* implicit */unsigned char) (_Bool)1)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1671618235)) ? (-122526658) : (((/* implicit */int) (unsigned short)53815))))) : (min((var_12), (((/* implicit */long long int) var_14))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 24; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_21 [i_7] [i_5] [i_5 - 1] [i_5] [i_0] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-92))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_5] [i_5 - 1] [i_5 + 1] [i_5])), (max((1384897802), (((/* implicit */int) var_5))))))) : (((((arr_2 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) - (((/* implicit */int) var_14))))))));
                                arr_22 [i_0] [i_5] [i_5] = ((unsigned char) (signed char)120);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_4] [i_4] [(short)4] [i_5] = ((/* implicit */short) var_10);
                                arr_28 [i_0] [i_5] [i_5] [i_8] [(_Bool)1] = max((((long long int) ((((/* implicit */_Bool) (unsigned short)38806)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_0] [(unsigned char)6] [i_5] [i_8 - 2]))))), (((/* implicit */long long int) var_4)));
                                arr_29 [i_9] [i_5] [i_5] [i_5] [i_0] = max((-122526646), (2147483630));
                                arr_30 [i_0] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */signed char) arr_14 [i_5] [i_4] [i_5 - 1] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((min((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0]))))), (max((((/* implicit */long long int) 3971166575U)), (-1194785787351422810LL))))), (((/* implicit */long long int) var_17))));
        arr_31 [i_0] = ((/* implicit */long long int) -893085672);
        var_24 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (signed char)19)))));
    }
}
