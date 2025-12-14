/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83741
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_1))))))));
        var_13 &= ((/* implicit */int) ((min((min((var_11), (((/* implicit */int) var_1)))), (((/* implicit */int) var_9)))) == (((/* implicit */int) var_2))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_14 = var_6;
                    var_15 = ((/* implicit */int) var_3);
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */short) var_9);
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_8))));
                        var_18 = ((/* implicit */unsigned char) (-(var_5)));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 4) 
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */signed char) (+(var_0)));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))));
                            var_20 = ((/* implicit */unsigned int) ((int) var_6));
                        }
                        var_21 = ((/* implicit */unsigned short) var_3);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((int) var_7));
                                var_23 = ((/* implicit */int) (+(var_5)));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_11 = 1; i_11 < 15; i_11 += 4) 
    {
        var_25 = ((/* implicit */signed char) var_8);
        var_26 = ((/* implicit */unsigned long long int) var_3);
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((var_7), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))))));
        var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (min((((/* implicit */unsigned int) var_1)), (var_7))))));
        var_29 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))))));
    }
    var_30 = ((/* implicit */signed char) var_1);
}
