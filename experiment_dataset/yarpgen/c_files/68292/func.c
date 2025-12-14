/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68292
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                    arr_9 [i_1] = ((/* implicit */signed char) (~((-((+(var_10)))))));
                    arr_10 [i_1] [i_1 + 3] [i_1 + 3] = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) var_6);
        arr_12 [i_0] = ((/* implicit */int) var_17);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    {
                        arr_25 [i_3] [i_4 + 3] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_28 [i_3] [i_3] [i_7] [i_5] [i_6] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0)))))))));
                            var_22 = ((/* implicit */unsigned int) var_5);
                            arr_29 [i_7] [(unsigned short)7] [i_7] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) var_17))))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 4; i_9 < 18; i_9 += 3) 
                        {
                            var_25 &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_5))))));
                            arr_36 [i_3] [i_4 - 1] [i_9] [(unsigned short)12] [i_9] = ((/* implicit */unsigned int) var_2);
                            var_26 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)51))))));
                            var_27 = ((/* implicit */int) max((var_27), ((-(var_15)))));
                            var_28 = ((/* implicit */unsigned char) (-(var_10)));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            arr_39 [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(var_16))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) var_16);
                            arr_42 [8LL] [i_5] &= ((/* implicit */long long int) var_13);
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_7))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 2) 
        {
            arr_47 [i_12] [8ULL] [i_13] = ((/* implicit */_Bool) var_8);
            var_32 = ((/* implicit */signed char) (~(var_11)));
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (+(var_9))))));
        }
        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_9))))));
        arr_48 [i_12] = ((/* implicit */_Bool) var_16);
    }
    var_35 = ((/* implicit */unsigned short) (-((+(var_5)))));
}
