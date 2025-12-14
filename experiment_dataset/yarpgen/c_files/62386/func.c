/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62386
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-2))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) (~(min(((~(((/* implicit */int) (unsigned char)187)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)10320))))))));
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65523))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), ((unsigned short)41033)));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1998586805114180225ULL)));
        var_17 = arr_7 [i_3] [i_3] [i_3] [i_3];
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)127), (arr_3 [i_4] [i_4])))) < ((+(((/* implicit */int) (short)10320))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((short) arr_1 [i_4])))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [(short)6])) ? (((/* implicit */int) arr_5 [(unsigned short)14])) : (((/* implicit */int) arr_5 [8ULL])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [8ULL])))))));
        var_21 ^= ((/* implicit */unsigned char) ((var_5) ? (var_4) : (var_4)));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_18 [i_5] = ((/* implicit */unsigned long long int) ((short) var_0));
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 11; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (signed char)-18))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_16 [i_5] [i_6]))));
                        arr_25 [i_4] [i_4] [i_7] [i_7] [i_4] = (i_7 % 2 == zero) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_10 [i_6 - 2])), ((~(((/* implicit */int) (signed char)30)))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_7]), (var_0))))) : ((~(var_10))))) - (20178ULL)))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_10 [i_6 - 2])), ((~(((/* implicit */int) (signed char)30)))))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_7]), (var_0))))) : ((~(var_10))))) - (20178ULL))) - (18446744073709546109ULL))))));
                        arr_26 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6712)) ? ((-(min((1414044897), (((/* implicit */int) (short)-10892)))))) : ((+(((/* implicit */int) (short)-30967))))));
                        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (short)31400)) : (((/* implicit */int) (unsigned short)43487))))) : (((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_12 [i_6 - 3])))))));
                    }
                } 
            } 
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) / (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1436611783))))) : (((int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24487))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11ULL))))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) ((signed char) arr_28 [i_8]))) : (((/* implicit */int) max(((unsigned short)15434), (((/* implicit */unsigned short) (unsigned char)152)))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30967)) + (((/* implicit */int) (unsigned short)64717))))) ? ((+(((/* implicit */int) (short)-30989)))) : (((/* implicit */int) max((var_8), ((short)-30976))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65408)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)837)))) : (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_27 [i_8] [i_8])))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_33 [i_9] = ((/* implicit */short) (~((((_Bool)1) ? (1436611784) : (((/* implicit */int) (short)8191))))));
        var_27 = (short)31478;
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (5377130568190928330ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10299)) ^ (((/* implicit */int) max(((unsigned char)255), ((unsigned char)78)))))))));
    }
    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        arr_37 [i_10] [i_10] = ((/* implicit */signed char) (unsigned char)113);
        arr_38 [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        var_29 = arr_35 [i_10] [i_10];
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 18; i_11 += 2) 
    {
        for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
        {
            {
                arr_44 [i_11] [i_12 - 1] [i_12 + 1] = ((/* implicit */short) -117084573);
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_12]))))) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_11 + 2])) : (1436611791)));
            }
        } 
    } 
}
