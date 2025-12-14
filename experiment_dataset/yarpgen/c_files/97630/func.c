/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97630
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) arr_1 [(_Bool)1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) -1082994925);
                                var_15 = ((/* implicit */int) max((var_15), ((-(((/* implicit */int) (unsigned short)37828))))));
                                arr_16 [i_4 + 2] [1] [1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37840)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37828))) : (5209362566026888108LL)));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [(unsigned short)3] [(_Bool)1] [i_0] [i_0] [i_0] [6LL])))))));
                var_17 = ((/* implicit */long long int) ((10999352961121306978ULL) >= (((/* implicit */unsigned long long int) -5209362566026888108LL))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_27 [i_7] [(_Bool)0] [(_Bool)0] [i_5] |= ((/* implicit */unsigned int) max((-2268544715574029316LL), (((/* implicit */long long int) (unsigned char)24))));
                    var_18 = ((/* implicit */unsigned long long int) var_2);
                    arr_28 [i_5] [i_5] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) 10999352961121306978ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        arr_39 [i_10] [2] [2] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= ((~(arr_21 [i_10] [19] [i_8])))));
                        arr_40 [i_5] [i_5] [i_5] [24] = ((/* implicit */_Bool) max((arr_17 [i_10]), (((/* implicit */long long int) ((((((/* implicit */_Bool) 10999352961121306994ULL)) ? (-5209362566026888109LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_5]))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_3)))) : (((((/* implicit */_Bool) (short)22365)) ? (var_7) : (var_0))))) * (((/* implicit */int) (signed char)127))));
    }
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        arr_43 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) -1658603150771909409LL)) ? (2849902063365741860ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107)))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 8; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_12 [i_11] [i_12] [i_13] [i_13])), (7447391112588244621ULL))), (((unsigned long long int) 5547912606771090769LL))))) ? ((~(((/* implicit */int) (signed char)53)))) : ((+((+(((/* implicit */int) arr_48 [i_11] [i_11] [i_13]))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) 9757645932827351066ULL));
                }
            } 
        } 
        var_22 -= ((/* implicit */int) ((arr_17 [i_11]) * (((/* implicit */long long int) ((int) ((arr_10 [i_11] [i_11] [i_11] [i_11]) < (((/* implicit */long long int) arr_33 [i_11] [i_11] [i_11]))))))));
        var_23 = ((/* implicit */unsigned char) (signed char)-121);
    }
    var_24 = ((/* implicit */unsigned char) var_11);
    var_25 = ((/* implicit */unsigned long long int) (+(max((((var_8) >> (((var_1) + (3923423633844382288LL))))), (var_1)))));
    var_26 = ((/* implicit */long long int) max((min(((+(-341793316))), (((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) (~(68698490)))))));
}
