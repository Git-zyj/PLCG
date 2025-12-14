/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76855
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)64)), ((unsigned short)47049)))))))));
        var_14 = min((((/* implicit */unsigned int) arr_2 [i_0])), (min((((/* implicit */unsigned int) var_0)), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_2] [14LL]))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_5 [i_3 - 1] [i_3 + 1] [(unsigned short)10]))));
                }
            } 
        } 
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_12 [i_1] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
            arr_13 [i_1] [18U] = ((/* implicit */unsigned int) arr_7 [i_1] [i_4] [i_1]);
        }
        for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            var_18 -= ((/* implicit */short) (unsigned char)54);
            arr_16 [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (+(var_10)));
            var_19 = ((/* implicit */long long int) var_2);
        }
        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 2) 
        {
            var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_6 - 3] [i_6 - 3]))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_24 [i_1] [i_1] [i_6 - 1] [i_1] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_11 [i_1]);
                    arr_25 [i_1] [i_6 - 2] [i_6 - 2] [i_1] = ((/* implicit */long long int) var_4);
                    var_21 |= (+(45655757U));
                }
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_30 [i_1] [i_6] [i_7 + 3] [i_6] [i_10] = ((/* implicit */unsigned short) var_2);
                        arr_31 [i_7] [i_7] [i_7 + 3] [i_9] [i_1] = ((/* implicit */unsigned short) 3306572357626671463LL);
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) arr_35 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 + 2]);
                        arr_36 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1]))));
                        var_23 *= (_Bool)1;
                    }
                    var_24 -= ((/* implicit */unsigned short) var_3);
                    arr_37 [1LL] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                    var_25 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_1] [i_6 + 1] [i_7 - 1] [i_7 - 1]))));
                }
                var_26 -= ((/* implicit */unsigned short) (~(45655746U)));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(-1031908733784760369LL))))));
                    arr_40 [i_1] [i_6] [i_7 + 2] [i_1] = ((/* implicit */long long int) var_0);
                    var_28 = ((/* implicit */unsigned int) max((var_28), ((+(var_5)))));
                    var_29 = (_Bool)1;
                    arr_41 [i_1] [i_1] [i_1] [i_12] = ((/* implicit */long long int) var_7);
                }
                for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 3) 
                {
                    arr_44 [i_1] [i_6 - 3] [i_1] [2U] [5LL] = ((/* implicit */unsigned short) arr_6 [i_6 + 1] [i_6 - 3] [i_7 + 4]);
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 2; i_14 < 22; i_14 += 4) 
                    {
                        arr_48 [i_14] [i_1] [i_7 + 3] [i_1] [i_1] = ((/* implicit */unsigned short) 0U);
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) 2462565879856765105ULL))));
                    }
                    for (short i_15 = 3; i_15 < 23; i_15 += 1) 
                    {
                        arr_51 [i_1] [i_1] = ((/* implicit */unsigned char) (~(var_8)));
                        arr_52 [i_1] [i_6] [i_6] [i_7] [i_13] [i_15] = ((/* implicit */unsigned short) var_12);
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_29 [i_1] [i_1] [(unsigned char)2] [i_1] [i_1]))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) -1031908733784760369LL))));
                    }
                    var_33 = ((/* implicit */short) (unsigned short)51638);
                }
                for (long long int i_16 = 3; i_16 < 22; i_16 += 2) 
                {
                    var_34 = ((/* implicit */int) var_6);
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6)))))));
                        var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_17] [i_6 - 1] [i_17] [i_6 - 1]))));
                        arr_57 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        arr_58 [i_1] [i_6] [i_16 + 2] = ((/* implicit */long long int) (~(var_5)));
                    }
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)184))))));
                        arr_63 [i_1] [i_6 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                        var_38 = ((/* implicit */unsigned short) arr_28 [i_1] [i_1]);
                    }
                    var_39 = ((/* implicit */unsigned char) var_11);
                }
            }
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (-(var_8))))));
        }
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            var_41 = ((/* implicit */_Bool) (unsigned char)253);
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) 3306572357626671452LL))));
        }
        arr_67 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))));
        var_43 = ((/* implicit */unsigned int) max((var_43), (arr_60 [i_1] [i_1] [i_1])));
    }
    var_44 = ((/* implicit */unsigned char) var_1);
}
