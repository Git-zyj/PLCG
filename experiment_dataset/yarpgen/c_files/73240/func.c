/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73240
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((short) (!(arr_0 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? ((+(((arr_0 [i_0] [(signed char)3]) ? (((/* implicit */int) arr_0 [(unsigned short)17] [i_0])) : (((/* implicit */int) var_12)))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_8 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2040U)) ? (((/* implicit */int) (short)13722)) : (-2147483647)));
                        var_22 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(2020U)))) ? (((/* implicit */unsigned long long int) var_18)) : (arr_3 [i_0] [i_1] [14ULL]))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        var_23 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14844712553611523970ULL)))))) % (((((/* implicit */_Bool) (short)1592)) ? (((/* implicit */long long int) 134086656)) : (-8598502582276071319LL)))));
        arr_11 [i_4 + 2] = ((/* implicit */unsigned long long int) arr_9 [i_4 + 2] [i_4]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */long long int) arr_12 [i_5] [7LL])) : (var_0))) >= (((long long int) var_1))))) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 795978683)) && (((/* implicit */_Bool) var_4))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */long long int) var_12);
                    arr_18 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((min((arr_0 [i_5] [i_5]), (arr_0 [i_5] [i_6]))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-3185))) / (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_5] [i_6]) : (((/* implicit */long long int) 4294967295U)))))) : (min(((+(var_8))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_16)), ((unsigned short)55209))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned char) (-(min((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_9]))) : (10191024028616037564ULL))), (arr_3 [i_5] [17ULL] [17ULL])))));
                                var_27 = ((/* implicit */_Bool) var_0);
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_8] [i_5]))))) ? ((~(((/* implicit */int) arr_16 [i_6] [i_8])))) : (((/* implicit */int) ((short) arr_16 [i_7] [10U])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_18)) : (var_6))) < (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (15396807293227576137ULL)));
}
