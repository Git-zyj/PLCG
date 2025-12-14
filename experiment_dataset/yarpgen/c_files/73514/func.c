/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73514
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
    var_17 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 3450801743U)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            var_19 = 4095U;
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [6LL] [6LL] [i_4 - 2] [i_3] [i_3] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (arr_13 [i_2] [i_1] [i_4 + 1] [i_3] [i_4] [i_0]) : (((/* implicit */int) ((_Bool) arr_13 [i_0] [(unsigned char)6] [i_4 - 1] [i_0] [i_4] [i_1])))));
                        }
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 1452359012))));
                    }
                } 
            } 
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) / (var_9)));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    {
                        arr_20 [i_0] [2U] [i_6] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) -1452359006)));
                        arr_21 [i_0] [i_0] [(short)2] [i_0] = ((/* implicit */long long int) 1452358990);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (min((((/* implicit */unsigned int) arr_11 [i_5] [i_1] [i_5] [i_6] [i_0])), (1105078793U)))))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_1] [i_6 - 1] = ((/* implicit */short) arr_9 [i_1] [i_6]);
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_25 [1LL] [1LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_7])) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_7] [i_0] [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (var_15))) == (((/* implicit */long long int) min((arr_13 [0U] [i_7] [6LL] [i_0] [8ULL] [i_0]), (((/* implicit */int) (unsigned char)250))))))))));
            var_24 ^= ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) ((4591783925883582459ULL) >> (((821933301808821881LL) - (821933301808821855LL)))));
                var_26 &= (unsigned short)51422;
                arr_33 [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) var_0);
                var_27 -= ((/* implicit */unsigned short) ((-1452359006) == (((/* implicit */int) ((unsigned short) 1452359006)))));
            }
            for (unsigned short i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                arr_37 [7LL] [7LL] = ((/* implicit */long long int) max((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10 + 3] [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 2]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                arr_38 [i_0] [i_0] [(short)16] [i_0] = ((/* implicit */long long int) (+(var_13)));
            }
            var_28 ^= ((/* implicit */long long int) -1452359006);
        }
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
        {
            var_29 += (((+(max((var_3), (13854960147825969169ULL))))) / (((/* implicit */unsigned long long int) arr_32 [i_0] [i_11])));
            arr_41 [i_0] [i_0] [i_0] = arr_19 [i_11] [i_11] [i_11] [i_0];
            var_30 = ((/* implicit */unsigned char) arr_3 [i_0]);
            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-1452359029))))));
            arr_42 [i_0] = ((/* implicit */unsigned char) max((3840575263936975377LL), (((/* implicit */long long int) ((var_9) != (((/* implicit */int) (unsigned char)82)))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            arr_46 [i_0] [i_12] [i_12] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)46724)), ((-(((/* implicit */int) var_10))))));
            arr_47 [i_0] [i_12] = arr_36 [i_12] [i_12] [i_12 + 1] [i_0];
            arr_48 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_15)) ? (-7927842495324825107LL) : (var_15))), (((long long int) 2316445418084763274LL))))));
            var_32 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_36 [i_12 - 1] [i_12 + 1] [i_12 + 4] [11LL])) ? (((/* implicit */int) arr_30 [i_12] [i_12 + 4])) : (((/* implicit */int) var_14))))));
        }
        var_33 += ((/* implicit */unsigned char) var_13);
        var_34 = ((/* implicit */long long int) arr_5 [i_0] [(short)5] [i_0]);
    }
    for (long long int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            arr_56 [i_13] [i_14] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
            var_35 &= ((/* implicit */int) (-((~(-3157825177665234499LL)))));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_12 [(unsigned char)10] [i_13] [i_13] [i_13] [i_13])) : (arr_34 [i_13] [i_13] [i_14])));
        }
        var_37 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_13]))))), (var_3)));
        var_38 = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        arr_60 [i_15] = ((/* implicit */long long int) (unsigned short)49914);
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_61 [i_15] [i_15] [i_17])) ? (((/* implicit */unsigned long long int) (-(var_2)))) : ((-(min((var_3), (((/* implicit */unsigned long long int) (unsigned short)27405))))))));
                    var_40 ^= ((/* implicit */short) var_8);
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (((-(arr_64 [i_18]))) >> (((((-3225501299277395121LL) / (((/* implicit */long long int) arr_64 [i_18])))) - (2530349663LL))))))));
        var_42 = ((/* implicit */long long int) max((var_42), (min(((~(arr_59 [i_18] [i_18]))), (((/* implicit */long long int) (-((+(var_8))))))))));
        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_18] [i_18] [i_18]))));
    }
    for (unsigned int i_19 = 1; i_19 < 15; i_19 += 3) 
    {
        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [i_19 + 1] [i_19 + 3] [i_19 + 1])))))))));
        var_45 = (~(((/* implicit */int) arr_40 [i_19 + 1])));
    }
}
