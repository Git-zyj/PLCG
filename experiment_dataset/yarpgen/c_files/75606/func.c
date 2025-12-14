/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75606
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) >= (max((((/* implicit */int) (short)26385)), (((((/* implicit */_Bool) (short)26385)) ? (var_12) : (((/* implicit */int) (unsigned short)19875))))))));
                    arr_11 [i_0 - 1] [i_0] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26393)) ? (-1988524358) : (((/* implicit */int) (unsigned short)19875))));
                    var_13 = arr_7 [i_0] [i_2] [i_1] [i_1];
                    var_14 = ((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_0 + 1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(arr_6 [i_3] [i_3])))), ((~(var_0)))));
        arr_14 [i_3] = (+(((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((((/* implicit */_Bool) var_3)) ? (arr_2 [(unsigned short)6]) : (((/* implicit */int) (unsigned short)22652)))) : (var_12))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1580776860U)) - (((var_9) - (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) arr_18 [i_4] [i_4]);
        var_16 = ((/* implicit */signed char) arr_18 [i_4] [i_4]);
        arr_20 [i_4] = ((/* implicit */int) (signed char)66);
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (arr_22 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_29 [i_7] [i_6] [i_7] = (!(((/* implicit */_Bool) arr_21 [i_6] [i_6])));
                    var_18 = ((/* implicit */int) var_4);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((unsigned long long int) (unsigned short)19320)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) 14802923535931449404ULL);
                                var_21 = ((/* implicit */unsigned int) var_11);
                                arr_36 [i_5] [i_6] [i_7] [i_8 - 3] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10050958716093825092ULL)))));
                                var_22 = ((((((/* implicit */_Bool) arr_21 [i_5] [i_5])) || ((_Bool)1))) ? (17830367602194003172ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6022)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_22 [i_5] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                {
                    arr_46 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((short) (+(((/* implicit */int) arr_28 [i_10] [i_11] [i_11] [i_11])))));
                    var_23 = ((/* implicit */unsigned short) (signed char)127);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) arr_21 [(_Bool)1] [i_13]);
                                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)107))));
                                arr_52 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)25666)) << (((((/* implicit */int) max((var_2), (((/* implicit */short) ((unsigned char) 2246927581U)))))) - (210)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14329216161163421509ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))));
        var_27 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_8)) ? (15988302961117722764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [20U] [i_10]))))))), (((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_39 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10])))))));
    }
    for (int i_15 = 0; i_15 < 19; i_15 += 4) 
    {
        arr_55 [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
        var_28 = ((/* implicit */int) (~(arr_37 [i_15])));
    }
}
