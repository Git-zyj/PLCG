/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93059
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
    var_10 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31059))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)10] [i_0] [i_1] = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_2))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [(unsigned short)3] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)33821))))));
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (-((-(((/* implicit */int) var_3)))))))));
                                var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)10])))))));
                                var_13 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_3))))));
                                arr_12 [(unsigned short)9] [i_0] [i_2] [i_2] [(unsigned short)2] [i_2] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_0 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [(unsigned short)6] [i_6 + 1] &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_8 [i_5] [(unsigned short)6] [(unsigned short)8] [i_5] [(unsigned short)0]))))));
                                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                                var_15 ^= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)56667))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_18 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)61455))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61455)))))))));
                        var_19 = ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) arr_10 [(unsigned short)6] [i_9] [i_7] [i_1] [(unsigned short)8]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_3))))));
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17175)))))));
                    }
                    arr_32 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)56720))));
                    var_22 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)56677))))));
                    arr_33 [i_1] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) var_7))))))));
                }
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_7))))))));
}
