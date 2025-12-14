/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58565
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = min((((unsigned int) (unsigned short)62871)), (((/* implicit */unsigned int) max((arr_0 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 + 1]))))));
        arr_5 [i_0] = var_12;
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) (((-(arr_12 [i_0 - 1] [i_0] [i_0] [i_0]))) > (((/* implicit */int) ((_Bool) (unsigned short)2657)))));
                        var_14 = ((/* implicit */unsigned int) ((unsigned long long int) (+(var_9))));
                        var_15 += ((((/* implicit */_Bool) ((int) (unsigned short)2644))) ? (4294967292U) : (((/* implicit */unsigned int) -2015089935)));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0 - 1] = arr_3 [i_0] [i_0];
    }
    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (-(((10728463693185722160ULL) << (((63488) - (63467)))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10728463693185722160ULL)) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)128)))) : (arr_17 [i_4] [i_5])));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_18 [i_4 - 2] [i_5] [i_5]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_26 [i_8] [i_8]);
                    arr_31 [i_4 - 1] [i_8] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_4 + 2] [i_4 - 2] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_24 [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4 + 2])) : (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */int) arr_24 [i_4 + 2] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2])) << (((/* implicit */int) var_1))))));
                    var_20 = arr_22 [i_4 - 1] [i_8] [i_9] [i_9];
                    var_21 = ((((/* implicit */_Bool) min((8114385446817841794LL), (((/* implicit */long long int) (_Bool)1))))) ? (((arr_27 [i_9] [i_8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [i_8]))))) : (arr_27 [i_9] [i_4 - 1]));
                    var_22 = ((/* implicit */unsigned short) arr_18 [i_4] [i_8] [i_4 + 2]);
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % ((~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23930))) : (0U)))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 12; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7718280380523829464ULL)))) ? (((((/* implicit */_Bool) 984880503)) ? (5527758424927677517ULL) : (((/* implicit */unsigned long long int) 496920510)))) : (arr_10 [i_11 + 2] [i_11 + 2] [i_11 - 3]))))))));
                    arr_39 [i_11] = ((/* implicit */int) (+(16045735770837167055ULL)));
                }
            } 
        } 
        var_24 = ((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10]);
    }
    for (int i_13 = 1; i_13 < 24; i_13 += 4) 
    {
        var_25 += ((/* implicit */unsigned char) 0ULL);
        var_26 += ((/* implicit */int) ((((arr_40 [i_13 - 1]) ? (((/* implicit */int) arr_40 [i_13 - 1])) : (((/* implicit */int) arr_40 [i_13 + 1])))) <= ((~(2015089921)))));
        arr_42 [i_13 + 1] = ((/* implicit */_Bool) ((min((1686938872U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_41 [i_13] [i_13])) : (var_3)))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((arr_41 [i_13 - 1] [i_13]), (((/* implicit */signed char) (!(arr_40 [i_13 + 1]))))))))));
    }
    var_27 = ((((((/* implicit */_Bool) var_6)) ? (var_4) : ((((_Bool)1) ? (((/* implicit */int) var_11)) : (var_5))))) >= ((~(((/* implicit */int) var_8)))));
}
