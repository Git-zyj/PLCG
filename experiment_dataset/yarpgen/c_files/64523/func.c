/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64523
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
    var_15 *= var_3;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_16 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (arr_2 [i_0]))))))) >> (((((((/* implicit */_Bool) min(((unsigned short)21681), ((unsigned short)43846)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24295))))))) - (41434)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (arr_2 [i_0]))))))) >> (((((((((/* implicit */_Bool) min(((unsigned short)21681), ((unsigned short)43846)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24295))))))) - (41434))) + (36471))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) (unsigned short)21677)) - (21652))))) != (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)59879))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)45824))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)18284)))))));
        var_21 *= var_1;
        arr_7 [i_1] [i_1] = (unsigned short)33699;
    }
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (unsigned short i_4 = 3; i_4 < 23; i_4 += 1) 
            {
                for (unsigned short i_5 = 3; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_22 *= arr_2 [(unsigned short)22];
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_2] [i_4])) ? (((/* implicit */int) ((unsigned short) arr_15 [i_4 + 1] [i_2] [i_4]))) : (((/* implicit */int) min((arr_15 [i_4 - 2] [i_2] [i_4]), (arr_15 [i_4 - 1] [i_2] [i_4]))))));
                        var_24 = (unsigned short)50330;
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) var_9))))) || (((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_21 [(unsigned short)12] [i_2] [i_2 + 2] [i_2] [i_2]))))))) + (min((((/* implicit */int) min(((unsigned short)21140), (var_7)))), ((-(((/* implicit */int) var_11))))))));
        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10759))))) && (((/* implicit */_Bool) (unsigned short)10262))));
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    }
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
    {
        var_28 = ((unsigned short) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_6] [i_6])))) & (((((/* implicit */_Bool) (unsigned short)43844)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)21694))))));
        arr_26 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_10 [i_6 - 1]), (arr_10 [i_6 + 2]))))));
        arr_27 [i_6] [i_6] = arr_16 [i_6] [i_6] [i_6 - 1] [i_6 + 1];
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21668)) ? (((/* implicit */int) (unsigned short)60945)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)45845)) ? (((/* implicit */int) (unsigned short)8989)) : (((/* implicit */int) (unsigned short)54751))))))));
                        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_35 [i_7] [i_7] [i_7] [i_7] [i_8] [i_9]), (arr_35 [i_8] [i_6 - 1] [i_7] [(unsigned short)0] [i_6 - 1] [(unsigned short)2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_8] [i_8] [i_9] [i_9])) || (((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_7])))))));
                        arr_37 [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_9 [i_6] [i_6]), ((unsigned short)65515))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_13 [i_6] [i_6 + 1]), (arr_23 [i_7])))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((arr_31 [i_6] [i_8] [i_6]), ((unsigned short)63885)))))) ? (((/* implicit */int) var_8)) : (min((((((/* implicit */int) var_7)) << (((((/* implicit */int) var_12)) - (33697))))), (((((/* implicit */int) arr_24 [i_6])) % (((/* implicit */int) (unsigned short)32481))))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_19 [i_8] [i_7]), (max((var_3), ((unsigned short)42669)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)43311)) ? (((/* implicit */int) (unsigned short)14932)) : (((/* implicit */int) (unsigned short)56528)))))) : ((~(((/* implicit */int) (unsigned short)65515)))))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_17 [i_6 + 1] [i_6 - 1] [i_6])))))))));
                    }
                    var_35 -= arr_12 [i_8];
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)10783)) ^ (((/* implicit */int) (unsigned short)21768))));
                }
            } 
        } 
    }
    var_37 = var_8;
}
